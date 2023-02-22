#include <linux/init.h>
#include <linux/module.h>

MODULE_LICENSE("GPL");

static int __init mymodule_init(void)
{
    printk(KERN_INFO "mymodule: Hello, world!\n");
    return 0;
}

static void __exit mymodule_exit(void)
{
    printk(KERN_INFO "mymodule: Goodbye, world!\n");
}

module_init(mymodule_init);
module_exit(mymodule_exit);
