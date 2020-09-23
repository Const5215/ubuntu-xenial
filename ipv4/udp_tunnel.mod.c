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
	{ 0xa1199b4d, __VMLINUX_SYMBOL_STR(sock_release) },
	{ 0x8d05867d, __VMLINUX_SYMBOL_STR(metadata_dst_alloc) },
	{ 0xb66b8a08, __VMLINUX_SYMBOL_STR(sock_create_kern) },
	{ 0x7ac1be48, __VMLINUX_SYMBOL_STR(kernel_connect) },
	{ 0x6439e154, __VMLINUX_SYMBOL_STR(iptunnel_xmit) },
	{ 0xb8f06653, __VMLINUX_SYMBOL_STR(kernel_sock_shutdown) },
	{ 0x99517682, __VMLINUX_SYMBOL_STR(udp_encap_enable) },
	{ 0xae2b920e, __VMLINUX_SYMBOL_STR(ipv6_stub) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xce4b8a02, __VMLINUX_SYMBOL_STR(udp_set_csum) },
	{ 0x803a3781, __VMLINUX_SYMBOL_STR(kernel_bind) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F8F56A46D6FB9F1702501C0");
