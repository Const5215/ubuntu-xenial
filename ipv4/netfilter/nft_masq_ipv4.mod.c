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
	{ 0xe3b8ea21, __VMLINUX_SYMBOL_STR(nft_masq_policy) },
	{ 0x39ff4d37, __VMLINUX_SYMBOL_STR(nft_masq_validate) },
	{ 0x11678973, __VMLINUX_SYMBOL_STR(nft_masq_dump) },
	{ 0x4ba0fd99, __VMLINUX_SYMBOL_STR(nft_masq_init) },
	{ 0x3f5c468e, __VMLINUX_SYMBOL_STR(nf_nat_masquerade_ipv4_unregister_notifier) },
	{ 0x5234c29c, __VMLINUX_SYMBOL_STR(nft_unregister_expr) },
	{ 0xfedbf252, __VMLINUX_SYMBOL_STR(nf_nat_masquerade_ipv4_register_notifier) },
	{ 0x197a24ee, __VMLINUX_SYMBOL_STR(nft_register_expr) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbcbc92c2, __VMLINUX_SYMBOL_STR(nf_nat_masquerade_ipv4) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nft_masq,nf_nat_masquerade_ipv4,nf_tables";


MODULE_INFO(srcversion, "6FC5F43C66265676D1BAADF");
