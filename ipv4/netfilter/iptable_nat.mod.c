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
	{ 0xd54aec8, __VMLINUX_SYMBOL_STR(nf_unregister_hooks) },
	{ 0x39e60c12, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0xee1767f8, __VMLINUX_SYMBOL_STR(nf_register_hooks) },
	{ 0xdcd04620, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x61844fe9, __VMLINUX_SYMBOL_STR(ipt_register_table) },
	{ 0x18c4b840, __VMLINUX_SYMBOL_STR(ipt_alloc_initial_table) },
	{ 0xdcf65d55, __VMLINUX_SYMBOL_STR(ipt_unregister_table) },
	{ 0xb939e5f0, __VMLINUX_SYMBOL_STR(nf_nat_ipv4_in) },
	{ 0xdad84c89, __VMLINUX_SYMBOL_STR(nf_nat_ipv4_out) },
	{ 0xf92440ff, __VMLINUX_SYMBOL_STR(nf_nat_ipv4_local_fn) },
	{ 0xcb6cdf71, __VMLINUX_SYMBOL_STR(ipt_do_table) },
	{ 0xb9da074, __VMLINUX_SYMBOL_STR(nf_nat_ipv4_fn) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_tables,nf_nat_ipv4";


MODULE_INFO(srcversion, "0ABBEAA64C52C3302A03BE4");
