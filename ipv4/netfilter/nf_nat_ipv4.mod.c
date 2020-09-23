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
	{ 0xee1cb5f, __VMLINUX_SYMBOL_STR(nf_ct_nat_ext_add) },
	{ 0x49c140ee, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x536150eb, __VMLINUX_SYMBOL_STR(nf_nat_used_tuple) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x915c6021, __VMLINUX_SYMBOL_STR(nf_nat_l4proto_register) },
	{ 0xc1f468f2, __VMLINUX_SYMBOL_STR(inet_proto_csum_replace4) },
	{ 0xd03c7700, __VMLINUX_SYMBOL_STR(secure_ipv4_port_ephemeral) },
	{ 0xd8e24d53, __VMLINUX_SYMBOL_STR(nf_ip_checksum) },
	{ 0x4a6df895, __VMLINUX_SYMBOL_STR(__nf_ct_kill_acct) },
	{ 0xe2f5d0f9, __VMLINUX_SYMBOL_STR(skb_checksum) },
	{ 0xd9bae4b, __VMLINUX_SYMBOL_STR(nf_nat_l4proto_nlattr_to_range) },
	{ 0x2af18de4, __VMLINUX_SYMBOL_STR(ip_route_me_harder) },
	{ 0x99e8264e, __VMLINUX_SYMBOL_STR(nf_nat_l4proto_unregister) },
	{ 0x251abba8, __VMLINUX_SYMBOL_STR(nf_xfrm_me_harder) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x680cdef4, __VMLINUX_SYMBOL_STR(nf_nat_packet) },
	{ 0x71a8cb0d, __VMLINUX_SYMBOL_STR(skb_make_writable) },
	{ 0x66ad90b0, __VMLINUX_SYMBOL_STR(nf_nat_l3proto_unregister) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0x7cf40b4b, __VMLINUX_SYMBOL_STR(nf_nat_l3proto_register) },
	{ 0x5012d966, __VMLINUX_SYMBOL_STR(__nf_nat_l4proto_find) },
	{ 0xac6d43e5, __VMLINUX_SYMBOL_STR(nf_nat_alloc_null_binding) },
	{ 0x90ff6c9f, __VMLINUX_SYMBOL_STR(nf_ct_invert_tuplepr) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_nat,nf_conntrack";


MODULE_INFO(srcversion, "62E44ADA1A1F6F29B5E6B7A");
