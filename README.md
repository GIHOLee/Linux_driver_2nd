# Linux_driver_2nd

##### 1.Description 

`drivers`：S3C6410X peripheral controller driver for Linux 4.5.2 kernel
`samples`：Source code for each chapter

##### 2.Makefile Configuration description 

`CC	= gcc`
`KERNELDIR ?= /usr/src/linux-headers-4.15.0-36-generic`：Configure according to the local environment，you can use `uname -a`or`cat /proc/version`to find current working's kernel version。

Example:

`cat /proc/version
Linux version 4.15.0-48-generic (buildd@lcy01-amd64-020) (gcc version 5.4.0 20160609 (Ubuntu 5.4.0-6ubuntu1~16.04.10)) #51~16.04.1-Ubuntu SMP Fri Apr 5 12:01:12 UTC 2019`

`uname -a
Linux robin 4.15.0-48-generic #51~16.04.1-Ubuntu SMP Fri Apr 5 12:01:12 UTC 2019 x86_64 x86_64 x86_64 GNU/Linux`

To be continued ...