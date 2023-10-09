#obj-m += ioctl.o
obj-m += chardev2.o

PWD := $(CURDIR)

user:
	gcc userspace_ioctl.c -o userspace_ioctl

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean

user_clean:
	rm userspace_ioctl