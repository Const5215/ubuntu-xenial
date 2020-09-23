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
	{ 0x6e74f854, __VMLINUX_SYMBOL_STR(inet_diag_unregister) },
	{ 0x47f86adc, __VMLINUX_SYMBOL_STR(inet_diag_register) },
	{ 0x43b5d527, __VMLINUX_SYMBOL_STR(inet_diag_dump_icsk) },
	{ 0x52576c9e, __VMLINUX_SYMBOL_STR(inet_diag_dump_one_icsk) },
	{ 0xd92e2dca, __VMLINUX_SYMBOL_STR(tcp_hashinfo) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8a240fc9, __VMLINUX_SYMBOL_STR(tcp_get_info) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=inet_diag";


MODULE_INFO(srcversion, "F6809304D5026F78001A836");
