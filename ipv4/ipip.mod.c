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
	{ 0xac51bec2, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xce51227d, __VMLINUX_SYMBOL_STR(ip_tunnel_get_link_net) },
	{ 0xaa0d2f74, __VMLINUX_SYMBOL_STR(ip_tunnel_dellink) },
	{ 0x1524dff4, __VMLINUX_SYMBOL_STR(ip_tunnel_get_iflink) },
	{ 0x4ddcfd4e, __VMLINUX_SYMBOL_STR(ip_tunnel_get_stats64) },
	{ 0x303522d1, __VMLINUX_SYMBOL_STR(ip_tunnel_change_mtu) },
	{ 0xa49a887a, __VMLINUX_SYMBOL_STR(ip_tunnel_uninit) },
	{ 0x8507c383, __VMLINUX_SYMBOL_STR(proc_dointvec) },
	{ 0x11c00678, __VMLINUX_SYMBOL_STR(unregister_net_sysctl_table) },
	{ 0x6e6e7ffc, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0x2d2b7da2, __VMLINUX_SYMBOL_STR(xfrm4_tunnel_deregister) },
	{ 0x8c32b2f2, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0xa914cca9, __VMLINUX_SYMBOL_STR(register_net_sysctl) },
	{ 0xa7b536a, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x1147145f, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x51b91893, __VMLINUX_SYMBOL_STR(xfrm4_tunnel_register) },
	{ 0x8b5835ce, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x9a1c0d47, __VMLINUX_SYMBOL_STR(ip_tunnel_newlink) },
	{ 0x84850bab, __VMLINUX_SYMBOL_STR(ip_tunnel_changelink) },
	{ 0x424baac8, __VMLINUX_SYMBOL_STR(ip_tunnel_encap_setup) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0xca0b003, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x78b0636f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xed925c63, __VMLINUX_SYMBOL_STR(ip_tunnel_xmit) },
	{ 0x47f74c89, __VMLINUX_SYMBOL_STR(iptunnel_handle_offloads) },
	{ 0xb2e27b3f, __VMLINUX_SYMBOL_STR(ip_tunnel_rcv) },
	{ 0xa2fc2ef2, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0xc906f5e0, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x43517fc4, __VMLINUX_SYMBOL_STR(iptunnel_pull_header) },
	{ 0x4274ac54, __VMLINUX_SYMBOL_STR(ip_tunnel_init_net) },
	{ 0x7822540, __VMLINUX_SYMBOL_STR(ip_tunnel_delete_net) },
	{ 0xe35b9034, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0x85992e0a, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x3dbd336d, __VMLINUX_SYMBOL_STR(ip_tunnel_lookup) },
	{ 0xdb3e1872, __VMLINUX_SYMBOL_STR(ip_tunnel_init) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xfcde315d, __VMLINUX_SYMBOL_STR(ip_tunnel_ioctl) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x6c943a1b, __VMLINUX_SYMBOL_STR(ip_tunnel_setup) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8afaebe7, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_tunnel,tunnel4";


MODULE_INFO(srcversion, "88518A994DF9E500ABD3833");
