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
	{ 0x17ca3f3d, __VMLINUX_SYMBOL_STR(xt_unregister_target) },
	{ 0xd54aec8, __VMLINUX_SYMBOL_STR(nf_unregister_hooks) },
	{ 0xd4b70f1, __VMLINUX_SYMBOL_STR(xt_register_target) },
	{ 0xee1767f8, __VMLINUX_SYMBOL_STR(nf_register_hooks) },
	{ 0x90298227, __VMLINUX_SYMBOL_STR(synproxy_init_timestamp_cookie) },
	{ 0x52a41251, __VMLINUX_SYMBOL_STR(__cookie_v4_init_sequence) },
	{ 0xd8e24d53, __VMLINUX_SYMBOL_STR(nf_ip_checksum) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x2345c718, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x7fe3701d, __VMLINUX_SYMBOL_STR(synproxy_parse_options) },
	{ 0xefd41584, __VMLINUX_SYMBOL_STR(nf_ct_seqadj_init) },
	{ 0x195d6869, __VMLINUX_SYMBOL_STR(synproxy_tstamp_adjust) },
	{ 0x3dbd8007, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0xef7db50c, __VMLINUX_SYMBOL_STR(synproxy_net_id) },
	{ 0x11a006b5, __VMLINUX_SYMBOL_STR(synproxy_check_timestamp_cookie) },
	{ 0x8841d39b, __VMLINUX_SYMBOL_STR(synproxy_build_options) },
	{ 0x1f8c765, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xb42e336a, __VMLINUX_SYMBOL_STR(synproxy_options_size) },
	{ 0x5272d8bc, __VMLINUX_SYMBOL_STR(__cookie_v4_check) },
	{ 0xc906f5e0, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x589d0478, __VMLINUX_SYMBOL_STR(ip_local_out) },
	{ 0x2af18de4, __VMLINUX_SYMBOL_STR(ip_route_me_harder) },
	{ 0xf6388c56, __VMLINUX_SYMBOL_STR(sysctl_ip_default_ttl) },
	{ 0xd8132314, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x78f9b710, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_try_module_get) },
	{ 0xb602c57e, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_module_put) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables,nf_synproxy_core,nf_conntrack";


MODULE_INFO(srcversion, "F64154F109AF4F51E10E18C");
