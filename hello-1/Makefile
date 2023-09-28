obj-m += hello-1.o
obj-m += hello-2.o
obj-m += hello-3.o

# 如果Makefile里没这句话，可能sudo make不能正确编译
# 避免了sudo带来的权限问题
PWD := $(CURDIR)

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean