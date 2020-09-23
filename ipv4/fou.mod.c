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
	{ 0x78b0636f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x8b5835ce, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0xc3e9a09e, __VMLINUX_SYMBOL_STR(genl_unregister_family) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0xb5940c7d, __VMLINUX_SYMBOL_STR(udp_add_offload) },
	{ 0x1030c932, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x20e37a3e, __VMLINUX_SYMBOL_STR(__genl_register_family) },
	{ 0x1a9613f9, __VMLINUX_SYMBOL_STR(inet6_offloads) },
	{ 0x79810baa, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xe777a9ca, __VMLINUX_SYMBOL_STR(udp_sock_create6) },
	{ 0xfb3c7d0f, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x6f9ce0d1, __VMLINUX_SYMBOL_STR(udp_tunnel_sock_release) },
	{ 0x4eb95e80, __VMLINUX_SYMBOL_STR(ip_tunnel_encap_del_ops) },
	{ 0x7caf4407, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x6e6e7ffc, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0x8afaebe7, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xab435272, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x353a07d7, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x99517682, __VMLINUX_SYMBOL_STR(udp_encap_enable) },
	{ 0xda99ae71, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0xe55e652, __VMLINUX_SYMBOL_STR(__skb_get_hash) },
	{ 0x4a2c5a3c, __VMLINUX_SYMBOL_STR(udp_del_offload) },
	{ 0x1f8c765, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xc906f5e0, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x6bfe83a1, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xca0b003, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x303041c6, __VMLINUX_SYMBOL_STR(udp_flow_hashrnd) },
	{ 0x47f74c89, __VMLINUX_SYMBOL_STR(iptunnel_handle_offloads) },
	{ 0x9c8aa35c, __VMLINUX_SYMBOL_STR(inet_offloads) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xce4b8a02, __VMLINUX_SYMBOL_STR(udp_set_csum) },
	{ 0x2ebcee12, __VMLINUX_SYMBOL_STR(genlmsg_put) },
	{ 0x6d5af453, __VMLINUX_SYMBOL_STR(udp_sock_create4) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0x77ae0365, __VMLINUX_SYMBOL_STR(inet_get_local_port_range) },
	{ 0x63e28e5c, __VMLINUX_SYMBOL_STR(ip_tunnel_encap_add_ops) },
	{ 0xfddd14a2, __VMLINUX_SYMBOL_STR(__skb_checksum_complete) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip6_udp_tunnel,udp_tunnel,ip_tunnel";


MODULE_INFO(srcversion, "989D608D5AF3C3B0E71F70E");
