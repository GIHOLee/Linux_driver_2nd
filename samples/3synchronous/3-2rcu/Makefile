ifeq ($(KERNELRELEASE),)

PWD:= $(shell pwd)
ARCH=x86
CROSS_COMPILE=x86_64-linux-gnu-
KERNELDIR=/usr/src/linux-headers-4.13.0-36-generic


lkm.ko:    rcu.c
	$(MAKE) ARCH=$(ARCH) CROSS_COMPILE=$(CROSS_COMPILE) -C $(KERNELDIR) M=$(PWD) modules

else

obj-m += rcu.o

endif

clean:
	rm -rf *.o *.ko *.mod.c .*.cmd *.markers *.order *.symvers .tmp_versions test
