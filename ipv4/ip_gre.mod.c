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
	{ 0x8b5835ce, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x4ddcfd4e, __VMLINUX_SYMBOL_STR(ip_tunnel_get_stats64) },
	{ 0x1524dff4, __VMLINUX_SYMBOL_STR(ip_tunnel_get_iflink) },
	{ 0x49c140ee, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x8d05867d, __VMLINUX_SYMBOL_STR(metadata_dst_alloc) },
	{ 0xf125c74e, __VMLINUX_SYMBOL_STR(icmp_send) },
	{ 0x85992e0a, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0x3dbd336d, __VMLINUX_SYMBOL_STR(ip_tunnel_lookup) },
	{ 0x7fe181b3, __VMLINUX_SYMBOL_STR(__ip_tunnel_change_mtu) },
	{ 0xac51bec2, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xed925c63, __VMLINUX_SYMBOL_STR(ip_tunnel_xmit) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x3994089c, __VMLINUX_SYMBOL_STR(inetdev_by_index) },
	{ 0xfb3c7d0f, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x6c943a1b, __VMLINUX_SYMBOL_STR(ip_tunnel_setup) },
	{ 0xaa0d2f74, __VMLINUX_SYMBOL_STR(ip_tunnel_dellink) },
	{ 0xe2f5d0f9, __VMLINUX_SYMBOL_STR(skb_checksum) },
	{ 0x9fdecc31, __VMLINUX_SYMBOL_STR(unregister_netdevice_many) },
	{ 0x5fa2c419, __VMLINUX_SYMBOL_STR(gre_add_protocol) },
	{ 0x9a1c0d47, __VMLINUX_SYMBOL_STR(ip_tunnel_newlink) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x6e6e7ffc, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0xa49a887a, __VMLINUX_SYMBOL_STR(ip_tunnel_uninit) },
	{ 0x7fa3ac22, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x8afaebe7, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xf80c6eb6, __VMLINUX_SYMBOL_STR(gre_del_protocol) },
	{ 0xab435272, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x6439e154, __VMLINUX_SYMBOL_STR(iptunnel_xmit) },
	{ 0x7822540, __VMLINUX_SYMBOL_STR(ip_tunnel_delete_net) },
	{ 0xdb3e1872, __VMLINUX_SYMBOL_STR(ip_tunnel_init) },
	{ 0xce51227d, __VMLINUX_SYMBOL_STR(ip_tunnel_get_link_net) },
	{ 0x7e13bbfa, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x8c32b2f2, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0xfcde315d, __VMLINUX_SYMBOL_STR(ip_tunnel_ioctl) },
	{ 0x84850bab, __VMLINUX_SYMBOL_STR(ip_tunnel_changelink) },
	{ 0x47a8b61f, __VMLINUX_SYMBOL_STR(rtnl_configure_link) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xc906f5e0, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xe35b9034, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0x8ff27cbb, __VMLINUX_SYMBOL_STR(ip_mc_inc_group) },
	{ 0x6bfe83a1, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x6e4868f4, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0x4274ac54, __VMLINUX_SYMBOL_STR(ip_tunnel_init_net) },
	{ 0x47f74c89, __VMLINUX_SYMBOL_STR(iptunnel_handle_offloads) },
	{ 0x42b235ee, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0x1141e01a, __VMLINUX_SYMBOL_STR(rtnl_create_link) },
	{ 0x9126c4f, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x1147145f, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x53569707, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0x43517fc4, __VMLINUX_SYMBOL_STR(iptunnel_pull_header) },
	{ 0x424baac8, __VMLINUX_SYMBOL_STR(ip_tunnel_encap_setup) },
	{ 0x303522d1, __VMLINUX_SYMBOL_STR(ip_tunnel_change_mtu) },
	{ 0xb13cf79, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xe199a58f, __VMLINUX_SYMBOL_STR(ip_mc_dec_group) },
	{ 0xfddd14a2, __VMLINUX_SYMBOL_STR(__skb_checksum_complete) },
	{ 0xb2e27b3f, __VMLINUX_SYMBOL_STR(ip_tunnel_rcv) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_tunnel,gre";


MODULE_INFO(srcversion, "B3A9E135868537FD0FECF5C");
