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
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x78b0636f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x87170693, __VMLINUX_SYMBOL_STR(sock_diag_put_meminfo) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x8568e706, __VMLINUX_SYMBOL_STR(from_kuid_munged) },
	{ 0xf56514fb, __VMLINUX_SYMBOL_STR(sock_diag_unregister) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x1030c932, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0xe06339fd, __VMLINUX_SYMBOL_STR(sock_i_ino) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x79810baa, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x8ffe7132, __VMLINUX_SYMBOL_STR(sock_diag_register) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xcd279169, __VMLINUX_SYMBOL_STR(nla_find) },
	{ 0x8afaebe7, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x353a07d7, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xda99ae71, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0x1f8c765, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xf31609ad, __VMLINUX_SYMBOL_STR(sock_diag_unregister_inet_compat) },
	{ 0xc906f5e0, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x3a997151, __VMLINUX_SYMBOL_STR(inet6_lookup) },
	{ 0xeeb9b34, __VMLINUX_SYMBOL_STR(sock_gen_put) },
	{ 0xca0b003, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x747e8387, __VMLINUX_SYMBOL_STR(sock_diag_check_cookie) },
	{ 0xebec72ff, __VMLINUX_SYMBOL_STR(sock_diag_save_cookie) },
	{ 0xa76af917, __VMLINUX_SYMBOL_STR(__inet_lookup_listener) },
	{ 0x4f79dd6e, __VMLINUX_SYMBOL_STR(nla_reserve) },
	{ 0x53da4272, __VMLINUX_SYMBOL_STR(sock_diag_register_inet_compat) },
	{ 0x8d7ab053, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0xf427e6ba, __VMLINUX_SYMBOL_STR(sock_i_uid) },
	{ 0x14aaaacc, __VMLINUX_SYMBOL_STR(__netlink_dump_start) },
	{ 0x30414ec1, __VMLINUX_SYMBOL_STR(__inet_lookup_established) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "96D1A28D3D44211457A3E19");
