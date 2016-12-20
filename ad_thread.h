#include<QThread>
//ad
#include <unistd.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/ioctl.h>
#include <fcntl.h>
#include "s3c2410-adc.h"


class ADThread:public QThread{
	Q_OBJECT
public:
	ADThread(){
		stopped = true;
		adc_fd=0;
                
	}
	void stop(){
		printf("stop()  adc \n");
		stopped = true;
		close(adc_fd);
	}
protected:
	void run(){
		char * ADC="/dev/adc/0raw";
		adc_fd=open(ADC, O_RDWR);
		if(adc_fd<0){printf("faied to open adc\n "); return;}
		stopped = false;
		while(!stopped){
			float ad0,ad1,ad2;
			ad0=((float)GetADresult(0)*3.3)/1024.0;
			ad1=((float)GetADresult(1)*3.3)/1024.0;
			ad2=((float)GetADresult(2)*3.3)/1024.0;
			emit AdPortData(ad0,ad1,ad2);
			usleep(2);		
		}
	}
	int GetADresult(int channel)
	{
		int PRESCALE=0XFF;
		int data=ADC_WRITE(channel, PRESCALE);
		write(adc_fd, &data, sizeof(data));
		read(adc_fd, &data, sizeof(data));
		return data;
	}
	
signals:
	void AdPortData(float f0, float f1, float f2);
private:
	volatile bool stopped;
	int adc_fd;
};
