#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x6f2bdffd, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x213e17ba, __VMLINUX_SYMBOL_STR(xt_hook_unlink) },
	{ 0x39e60c12, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0xc4776eca, __VMLINUX_SYMBOL_STR(xt_hook_link) },
	{ 0xdcd04620, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0xcb6cdf71, __VMLINUX_SYMBOL_STR(ipt_do_table) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x61844fe9, __VMLINUX_SYMBOL_STR(ipt_register_table) },
	{ 0x18c4b840, __VMLINUX_SYMBOL_STR(ipt_alloc_initial_table) },
	{ 0xdcf65d55, __VMLINUX_SYMBOL_STR(ipt_unregister_table) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables,ip_tables";


MODULE_INFO(srcversion, "5B0B1C6643ABC36B9F78AB2");
