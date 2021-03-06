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
	{ 0x3f5c468e, __VMLINUX_SYMBOL_STR(nf_nat_masquerade_ipv4_unregister_notifier) },
	{ 0x17ca3f3d, __VMLINUX_SYMBOL_STR(xt_unregister_target) },
	{ 0xfedbf252, __VMLINUX_SYMBOL_STR(nf_nat_masquerade_ipv4_register_notifier) },
	{ 0xd4b70f1, __VMLINUX_SYMBOL_STR(xt_register_target) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbcbc92c2, __VMLINUX_SYMBOL_STR(nf_nat_masquerade_ipv4) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_nat_masquerade_ipv4,x_tables";


MODULE_INFO(srcversion, "764495F3227F0D58D0F994A");
