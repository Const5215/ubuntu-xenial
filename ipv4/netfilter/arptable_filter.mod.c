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
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x723f129e, __VMLINUX_SYMBOL_STR(arpt_register_table) },
	{ 0x3d7769b5, __VMLINUX_SYMBOL_STR(arpt_alloc_initial_table) },
	{ 0xc3b38ed, __VMLINUX_SYMBOL_STR(arpt_unregister_table) },
	{ 0xf99939c4, __VMLINUX_SYMBOL_STR(arpt_do_table) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables,arp_tables";


MODULE_INFO(srcversion, "224C0D3981896FA90BFC860");
