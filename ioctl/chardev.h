//
// Created by calibrec on 23-10-9.
//

#ifndef LKMPG_CHARDEV_H
#define LKMPG_CHARDEV_H

#include <linux/ioctl.h>

#define MAJOR_NUM 100

#define IOCTL_SET_MSG _IOW(MAJOR_NUM, 0, char *)
#define IOCTL_GET_MSG _IOR(MAJOR_NUM, 1, char *)
#define IOCTL_GET_NTH_BYTE _IOWR(MAJOR_NUM, 2, int)

#define DEVICE_FILE_NAME "char_dev"
#define DEVICE_PATH "/dev/char_dev"

#endif //LKMPG_CHARDEV_H
