#include<QThread>
#include<cstdio>
#include<fcntl.h>
#include<sys/ioctl.h>
#include <unistd.h>

//motor
#define DCM_IOCTRL_SETPWM 			(0x10)
#define DCM_TCNTB0				(16384)



class MotorThread:public QThread{
	Q_OBJECT
public:
	MotorThread(){
		stopped=true;
        	speed=100;
        	direct=1;
        	factor=DCM_TCNTB0/1024;
		dcm_fd=0;

	}
	void stop(){
		stopped = true;
		 ioctl(dcm_fd, DCM_IOCTRL_SETPWM,(0));
		close(dcm_fd);
	}
protected:
	void run(){
	         
                char *DCM_DEV="/dev/dcm/0raw";
                 if((dcm_fd=open(DCM_DEV, O_WRONLY))<0){
                        printf("Error opening /dev/dcm/0raw device\n");
                        return;
                }
	int i = 0;
	stopped=false;
	while(!stopped) {
		for (i=-512; i<=512; i++) {
			ioctl(dcm_fd, DCM_IOCTRL_SETPWM,(direct*speed*factor));			
			int t,j;
			for(t=500;t>0;t--) for(j=0;j<400;j++);
			
		}
		
	}
	
		
	}
public slots:

	void MotorReverseDirection(){
		direct*=-1;
	}
	void MotorSpeedUp(){
		speed+=50;
	}
	void MotorSpeedDown(){
		speed-=50;
		speed=speed<0?0:speed;
	}
private:
	volatile bool stopped;
	int speed;
	int direct;
	int factor;
	int dcm_fd;
};

