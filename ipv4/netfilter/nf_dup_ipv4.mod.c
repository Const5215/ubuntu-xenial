#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x6f2bdffd, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x589d0478, __VMLINUX_SYMBOL_STR(ip_local_out) },
	{ 0x49c140ee, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x2124474, __VMLINUX_SYMBOL_STR(ip_send_check) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xc906f5e0, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x8d3d2243, __VMLINUX_SYMBOL_STR(__pskb_copy_fclone) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x42b235ee, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0x70c52dc5, __VMLINUX_SYMBOL_STR(nf_skb_duplicated) },
	{ 0x6ccdfd18, __VMLINUX_SYMBOL_STR(nf_conntrack_untracked) },
	{ 0x53569707, __VMLINUX_SYMBOL_STR(this_cpu_off) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack";


MODULE_INFO(srcversion, "2D5232FCF28DD217AFFE0C0");
