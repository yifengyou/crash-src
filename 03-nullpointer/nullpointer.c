#include <linux/module.h>
#include <linux/kernel.h>

char *p = NULL;

int init_module(void) 
{
	printk(KERN_INFO "Hello panic!\n");
	*p = 1;
	return 0;
}


void cleanup_module(void)
{
	printk(KERN_INFO "Goodbye panic\n");
}

MODULE_LICENSE("GPL");
