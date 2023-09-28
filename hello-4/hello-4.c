//
// Created by calibrec on 23-9-21.
//

#include "hello-4.h"

#include <linux/module.h>
#include <linux/printk.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("LKMPG");
MODULE_DESCRIPTION("A sample driver");

static int __init init_hello_4(void)
{
    pr_info("Hello World 4.\n");
    return 0;
}

static int __exit cleanup_hello_4(void)
{
    pr_info("GoodBye World 4.\n");
}

module_init(init_hello_4);
module_exit(cleanup_hello_4);
