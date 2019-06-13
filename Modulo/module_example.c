#include<linux/kernel.h>
#include<linux/module.h>
#include<linux/slab.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Miller Raycell e Rodrigo Andrade");
MODULE_DESCRIPTION("Modulo exemplo para o MX Linux");
MODULE_VERSION("0.1");

static int __init module_exemplo_init(void){
	int i;
	printk(KERN_INFO "Subindo modulo para o kernel do MX Linux");
	
	for (i = 0; i < 5 ; i++)
	{
		printk(KERN_INFO "Testando o laço de repetição");
	}
	
	return 0;
}

static void __exit module_exemplo_exit(void){
	printk(KERN_INFO "Saindo do módulo");
	return;
}

module_init(module_exemplo_init);
module_exit(module_exemplo_exit);
