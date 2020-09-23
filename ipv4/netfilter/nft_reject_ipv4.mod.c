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
	{ 0xa2db3c7f, __VMLINUX_SYMBOL_STR(nft_reject_policy) },
	{ 0x16ba2be4, __VMLINUX_SYMBOL_STR(nft_reject_dump) },
	{ 0x188b1379, __VMLINUX_SYMBOL_STR(nft_reject_init) },
	{ 0x5234c29c, __VMLINUX_SYMBOL_STR(nft_unregister_expr) },
	{ 0x197a24ee, __VMLINUX_SYMBOL_STR(nft_register_expr) },
	{ 0x4d326442, __VMLINUX_SYMBOL_STR(nf_send_unreach) },
	{ 0xb8f9c7f6, __VMLINUX_SYMBOL_STR(nf_send_reset) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nft_reject,nf_tables,nf_reject_ipv4";


MODULE_INFO(srcversion, "06123239785FAD382DBEFDB");
