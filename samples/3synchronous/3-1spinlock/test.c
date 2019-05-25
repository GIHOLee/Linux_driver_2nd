#include<sys/types.h>
#include<unistd.h>
#include<fcntl.h>
#include<linux/rtc.h>
#include<linux/ioctl.h>
#include<stdio.h>
#include<stdlib.h>

void main()
{
	int fd;
	fd=open("/dev/jrb",O_RDWR);/*By read and write method open '/dev/fgj'*/
	if(fd==-1)
	{
		perror("error open\n");
		exit(-1);
	}
	printf("open /dev/jrb successfully\n");
	
	while(1);
	close(fd);
}
