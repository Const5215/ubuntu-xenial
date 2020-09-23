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
	{ 0xf125c74e, __VMLINUX_SYMBOL_STR(icmp_send) },
	{ 0x2124474, __VMLINUX_SYMBOL_STR(ip_send_check) },
	{ 0xe3e23cf4, __VMLINUX_SYMBOL_STR(nf_ct_attach) },
	{ 0xd8e24d53, __VMLINUX_SYMBOL_STR(nf_ip_checksum) },
	{ 0xf6388c56, __VMLINUX_SYMBOL_STR(sysctl_ip_default_ttl) },
	{ 0x2af18de4, __VMLINUX_SYMBOL_STR(ip_route_me_harder) },
	{ 0x1f8c765, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xc906f5e0, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x52d051ff, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0xd8132314, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x3dbd8007, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "DC7D54B36796C77D3F48B96");
