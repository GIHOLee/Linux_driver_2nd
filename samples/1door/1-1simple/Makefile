AR	= ar
ARCH	= arm
CC	= gcc
DEBFLAGS = -O2
obj-m	:= smodule.o
KERNELDIR ?= /usr/src/linux-headers-4.15.0-48-generic
PWD       := $(shell pwd)
modules:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) LDDINC=$(PWD)/../include modules
clean:
	rm -rf *.o *~ core .depend .*.cmd *.ko *.mod.c .tmp_versions
