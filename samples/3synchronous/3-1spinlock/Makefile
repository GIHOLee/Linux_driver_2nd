ifeq ($(KERNELRELEASE),)
ARCH=x86
PWD:= $(shell pwd)
CROSS_COMPILE=x86_64-linux-gnu-
CC=$(CROSS_COMPILE)gcc
#CROSS_COMPILE=arm-linux-gnueabi-
KERNELDIR=/usr/src/linux-headers-4.13.0-36-generic


lkm.ko:    spinlock.c
	$(MAKE) ARCH=$(ARCH) CROSS_COMPILE=$(CROSS_COMPILE) -C $(KERNELDIR) M=$(PWD) modules

else

obj-m += spinlock.o

endif

test:	test.c
	arm-linux-gnueabi-gcc $< -o $@ -g
clean:
	rm -rf *.o *.ko *.mod.c .*.cmd *.markers *.order *.symvers .tmp_versions test
