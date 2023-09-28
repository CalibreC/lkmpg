//
// Created by calibrec on 23-9-19.
//

#include "hello-1.h"

#include <linux/module.h>
#include <linux/printk.h>

int init_module(void)
{
    pr_info("Hello World 1.\n");

    /* 返回负数，意味着初始化失败 */
    return 0;
}

void cleanup_module(void)
{
    pr_info("GoodBye World 1.\n");
}

MODULE_LICENSE("GPL");
