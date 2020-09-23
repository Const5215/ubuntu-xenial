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
	{ 0x75697397, __VMLINUX_SYMBOL_STR(inet_diag_bc_sk) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x3b6f6cd2, __VMLINUX_SYMBOL_STR(udp_table) },
	{ 0xf764868a, __VMLINUX_SYMBOL_STR(udplite_table) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xc906f5e0, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x59c432cd, __VMLINUX_SYMBOL_STR(__udp4_lib_lookup) },
	{ 0xda99ae71, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0x75a7d89f, __VMLINUX_SYMBOL_STR(inet_sk_diag_fill) },
	{ 0x1f8c765, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xf6afbae7, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x747e8387, __VMLINUX_SYMBOL_STR(sock_diag_check_cookie) },
	{ 0x1527c7bc, __VMLINUX_SYMBOL_STR(__udp6_lib_lookup) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=inet_diag";


MODULE_INFO(srcversion, "002F1F325626C00C11DE198");
