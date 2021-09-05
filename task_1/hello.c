#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>

MODULE_DESCRIPTION("Eudyptula Task 1");
MODULE_AUTHOR("Nishal Kulkarni");
MODULE_LICENSE("GPL");

static int __init hello_init(void)
{
    pr_debug("Hello World!\n");
    return 0;
}

static void __exit hello_exit(void)
{
}

module_init(hello_init);
module_exit(hello_exit);