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
	{ 0x145ef536, __VMLINUX_SYMBOL_STR(nft_unregister_chain_type) },
	{ 0xb05fb60a, __VMLINUX_SYMBOL_STR(nft_register_chain_type) },
	{ 0xb939e5f0, __VMLINUX_SYMBOL_STR(nf_nat_ipv4_in) },
	{ 0xb9da074, __VMLINUX_SYMBOL_STR(nf_nat_ipv4_fn) },
	{ 0xf92440ff, __VMLINUX_SYMBOL_STR(nf_nat_ipv4_local_fn) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3a2dd6f, __VMLINUX_SYMBOL_STR(nft_do_chain) },
	{ 0xdad84c89, __VMLINUX_SYMBOL_STR(nf_nat_ipv4_out) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_tables,nf_nat_ipv4";


MODULE_INFO(srcversion, "185E404036DDE1FC27D3209");
