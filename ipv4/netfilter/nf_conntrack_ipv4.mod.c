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
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0xbfc9b2b6, __VMLINUX_SYMBOL_STR(nf_conntrack_in) },
	{ 0x76347bae, __VMLINUX_SYMBOL_STR(__nf_ct_refresh_acct) },
	{ 0x49733d7b, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_pernet_register) },
	{ 0x99bab161, __VMLINUX_SYMBOL_STR(nf_ct_zone_dflt) },
	{ 0x42b72dcf, __VMLINUX_SYMBOL_STR(nf_ct_get_tuplepr) },
	{ 0x56d4ca56, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x2c97a755, __VMLINUX_SYMBOL_STR(nf_conntrack_set_hashsize) },
	{ 0xaadef33d, __VMLINUX_SYMBOL_STR(nf_ct_deliver_cached_events) },
	{ 0xea054b22, __VMLINUX_SYMBOL_STR(nla_policy_len) },
	{ 0xf885885d, __VMLINUX_SYMBOL_STR(nf_conntrack_l4proto_tcp4) },
	{ 0xd8e24d53, __VMLINUX_SYMBOL_STR(nf_ip_checksum) },
	{ 0x442d2ba, __VMLINUX_SYMBOL_STR(nf_log_packet) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x675ba28e, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_unregister) },
	{ 0x39e60c12, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0xd3ec43be, __VMLINUX_SYMBOL_STR(nf_ct_invert_tuple) },
	{ 0x1bd7a2a, __VMLINUX_SYMBOL_STR(__nf_conntrack_confirm) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xed17778, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_pernet_unregister) },
	{ 0x8afaebe7, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xf1ad181a, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_register) },
	{ 0x8ffe7e89, __VMLINUX_SYMBOL_STR(nf_conntrack_htable_size) },
	{ 0xbca85ab0, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_unregister) },
	{ 0xd54aec8, __VMLINUX_SYMBOL_STR(nf_unregister_hooks) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x6e224a7a, __VMLINUX_SYMBOL_STR(need_conntrack) },
	{ 0xb4b660f0, __VMLINUX_SYMBOL_STR(param_get_uint) },
	{ 0x7879028f, __VMLINUX_SYMBOL_STR(nf_unregister_sockopt) },
	{ 0xca9722fb, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_pernet_register) },
	{ 0xdcd04620, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x1716c3ef, __VMLINUX_SYMBOL_STR(nf_ct_seq_adjust) },
	{ 0x6b6c3d10, __VMLINUX_SYMBOL_STR(nf_defrag_ipv4_enable) },
	{ 0xee1767f8, __VMLINUX_SYMBOL_STR(nf_register_hooks) },
	{ 0x7968ccb, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_pernet_unregister) },
	{ 0x17c54a85, __VMLINUX_SYMBOL_STR(nf_conntrack_l4proto_udp4) },
	{ 0x17d25a75, __VMLINUX_SYMBOL_STR(nf_register_sockopt) },
	{ 0x96aba385, __VMLINUX_SYMBOL_STR(proc_dointvec_jiffies) },
	{ 0x3dbd8007, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x43cc16c7, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_register) },
	{ 0x2879d33c, __VMLINUX_SYMBOL_STR(nf_conntrack_find_get) },
	{ 0x1cc59530, __VMLINUX_SYMBOL_STR(__nf_ct_l4proto_find) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_defrag_ipv4";


MODULE_INFO(srcversion, "9FDFC1B31D3BFCD3AE79F53");
