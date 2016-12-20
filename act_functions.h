#include"ui_hef.h"
#include"mot_thread.h"
#include"ad_thread.h"
#include<QObject>
#include<QString>

extern unsigned char  digit[10][10];
extern unsigned char   alpha[26][10];


#include<cstdio>
#include<fcntl.h>
#include<unistd.h>
#include<sys/ioctl.h>
#include<sys/mman.h>

class Actions:public QObject{
	Q_OBJECT
public:
	MotorThread* th_motor;
	ADThread* th_ad;
	int fd;
	Ui::Form * ui;
	Actions(){}
	Actions(Ui::Form *ui){
		th_motor = new MotorThread();
		th_ad = new ADThread();
		this->ui = ui;
		fd=0;


	connectAllSignalSlot();

}
void connectAllSignalSlot(){
        //ad
        QObject::connect(ui->ad_start, SIGNAL(clicked()),this,SLOT(startAD()) );
        QObject::connect(ui->ad_stop,SIGNAL(clicked()),this,SLOT(stopAD()) );
        QObject::connect(th_ad,      SIGNAL(AdPortData(float,float,float)) , this, SLOT(showAdData(float,float,float)) );
	//motor
        QObject::connect(ui->motor_start     ,SIGNAL(clicked()), this, SLOT(startMotor()));
        QObject::connect(ui->motor_stop     ,SIGNAL(clicked()), this , SLOT(stopMotor()));
        QObject::connect(ui->motor_reverse   ,SIGNAL(clicked()), th_motor , SLOT(MotorReverseDirection()));
        QObject::connect(ui->speedUp   ,SIGNAL(clicked()), th_motor , SLOT(MotorSpeedUp()));
        QObject::connect(ui->speedDown ,SIGNAL(clicked()), th_motor , SLOT(MotorSpeedDown()));
	//led
        QObject::connect(ui->led_start           ,SIGNAL(clicked()), this , SLOT(ledInit()));
        QObject::connect(ui->led_release         ,SIGNAL(clicked()), this , SLOT(ledRelease()));
        QObject::connect(ui->showA          ,SIGNAL(clicked()), this , SLOT(ledShowA()));
        QObject::connect(ui->show1           ,SIGNAL(clicked()), this , SLOT(ledShow1()));


}
   ~Actions(){
                if(th_ad !=0 && th_motor!=0){
                        delete th_motor;
                        delete th_ad;
                }
        }

public slots:
        void startAD(){
            printf("startAd\n");
                            if(th_ad==0){
                                    th_ad = new ADThread();
                                    connectAllSignalSlot();
                            }
                            th_ad->start();
                    ui->ad_start->setEnabled(false);

        }
    void stopAD(){
            if(th_ad==0) return;
                            printf("stopAd\n");
                            th_ad->stop();
                            ui->adpot0->setText(QString("%1").arg(0.0));
                            ui->adpot1->setText(QString("%1").arg(0.0));
                            ui->adpot2->setText(QString("%1").arg(0.0));
                            delete th_ad;th_ad=0;
                              ui->ad_start->setEnabled(true);
        }

    void showAdData(float f0, float f1, float f2){
		
		ui->adpot0->setText(QString("%1").arg(f0));
		ui->adpot1->setText(QString("%1").arg(f1));
		ui->adpot2->setText(QString("%1").arg(f2));
	}

	void startMotor(){
		printf("startMotor()\n");
		if(th_motor==0){
			th_motor = new MotorThread();
			connectAllSignalSlot();
		}
		th_motor->start();
                  ui->motor_start->setEnabled(false);
	}
	void stopMotor(){
		if(th_motor==0)return;
		printf("stopMotor()");
		th_motor->stop();
		th_motor=0;
                ui->motor_start->setEnabled(true);
	}

	void ledInit(){
                unsigned int LEDWORD;
                char * DEV_LED ="/dev/led/0raw";
		fd=open(DEV_LED,O_RDWR);
                if (fd < 0) {printf("falied to open led\n");   return; }

                LEDWORD=0xff00;
                LEDWORD=0xff00;
               ioctl(fd,0x12,LEDWORD);
       
        }
        void ledRelease(){ printf("ledRelease\n"); close(fd);}
        void ledShowA(){printf("showA() fd = %d\n",fd); write(fd,alpha[0],10);}
        void ledShow1(){printf("show1\n"); write(fd,digit[1],10);}

};
