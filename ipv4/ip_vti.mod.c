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
	{ 0xce51227d, __VMLINUX_SYMBOL_STR(ip_tunnel_get_link_net) },
	{ 0xaa0d2f74, __VMLINUX_SYMBOL_STR(ip_tunnel_dellink) },
	{ 0x1524dff4, __VMLINUX_SYMBOL_STR(ip_tunnel_get_iflink) },
	{ 0x4ddcfd4e, __VMLINUX_SYMBOL_STR(ip_tunnel_get_stats64) },
	{ 0x303522d1, __VMLINUX_SYMBOL_STR(ip_tunnel_change_mtu) },
	{ 0xa49a887a, __VMLINUX_SYMBOL_STR(ip_tunnel_uninit) },
	{ 0x8c32b2f2, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x6e6e7ffc, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0xcfe0abef, __VMLINUX_SYMBOL_STR(xfrm4_protocol_deregister) },
	{ 0x1147145f, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0xf8a7f5e8, __VMLINUX_SYMBOL_STR(xfrm4_protocol_register) },
	{ 0x8b5835ce, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x6910fe04, __VMLINUX_SYMBOL_STR(xfrm_input) },
	{ 0xa2fc2ef2, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0x53569707, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0xea108f42, __VMLINUX_SYMBOL_STR(skb_scrub_packet) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x2345c718, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xc906f5e0, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x49c140ee, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x417efe63, __VMLINUX_SYMBOL_STR(xfrm_lookup) },
	{ 0x42487f0a, __VMLINUX_SYMBOL_STR(__xfrm_decode_session) },
	{ 0x4274ac54, __VMLINUX_SYMBOL_STR(ip_tunnel_init_net) },
	{ 0xaa61b025, __VMLINUX_SYMBOL_STR(xfrm_garbage_collect) },
	{ 0x7822540, __VMLINUX_SYMBOL_STR(ip_tunnel_delete_net) },
	{ 0x85992e0a, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0x6751835d, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0xe35b9034, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0x769abcd7, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0x3dbd336d, __VMLINUX_SYMBOL_STR(ip_tunnel_lookup) },
	{ 0xdb3e1872, __VMLINUX_SYMBOL_STR(ip_tunnel_init) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xfcde315d, __VMLINUX_SYMBOL_STR(ip_tunnel_ioctl) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x6c943a1b, __VMLINUX_SYMBOL_STR(ip_tunnel_setup) },
	{ 0x9a1c0d47, __VMLINUX_SYMBOL_STR(ip_tunnel_newlink) },
	{ 0x84850bab, __VMLINUX_SYMBOL_STR(ip_tunnel_changelink) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8afaebe7, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_tunnel";


MODULE_INFO(srcversion, "82FFDA27BF7D0C79E6AD71A");
