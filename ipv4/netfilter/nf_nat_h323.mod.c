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
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0x5621206d, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_unregister) },
	{ 0xeb9551d5, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_register) },
	{ 0xae8af8e3, __VMLINUX_SYMBOL_STR(nat_q931_hook) },
	{ 0x1e3784f5, __VMLINUX_SYMBOL_STR(nat_callforwarding_hook) },
	{ 0xf4bb947f, __VMLINUX_SYMBOL_STR(nat_h245_hook) },
	{ 0xbbac0702, __VMLINUX_SYMBOL_STR(nat_t120_hook) },
	{ 0xb65314aa, __VMLINUX_SYMBOL_STR(nat_rtp_rtcp_hook) },
	{ 0x2f015120, __VMLINUX_SYMBOL_STR(set_ras_addr_hook) },
	{ 0x4ec0ca1c, __VMLINUX_SYMBOL_STR(set_sig_addr_hook) },
	{ 0xf674f222, __VMLINUX_SYMBOL_STR(set_h225_addr_hook) },
	{ 0x3d034c22, __VMLINUX_SYMBOL_STR(set_h245_addr_hook) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x20b32d74, __VMLINUX_SYMBOL_STR(get_h225_addr) },
	{ 0xc741bba6, __VMLINUX_SYMBOL_STR(nf_ct_unexpect_related) },
	{ 0x95e58804, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x3dbd8007, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x8768287e, __VMLINUX_SYMBOL_STR(__nf_nat_mangle_tcp_packet) },
	{ 0xc414bd8a, __VMLINUX_SYMBOL_STR(nf_nat_mangle_udp_packet) },
	{ 0x3fec89e7, __VMLINUX_SYMBOL_STR(nf_nat_follow_master) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x34aa23f1, __VMLINUX_SYMBOL_STR(nf_nat_setup_info) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_conntrack_h323,nf_nat";


MODULE_INFO(srcversion, "B50D0B221589CC8C4479864");
