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
	{ 0x57ea27ca, __VMLINUX_SYMBOL_STR(ipcomp_output) },
	{ 0xa6c75545, __VMLINUX_SYMBOL_STR(ipcomp_input) },
	{ 0x5c0b1d96, __VMLINUX_SYMBOL_STR(ipcomp_destroy) },
	{ 0x6910fe04, __VMLINUX_SYMBOL_STR(xfrm_input) },
	{ 0x6a31912d, __VMLINUX_SYMBOL_STR(xfrm4_rcv) },
	{ 0xcfe0abef, __VMLINUX_SYMBOL_STR(xfrm4_protocol_deregister) },
	{ 0x2c9be061, __VMLINUX_SYMBOL_STR(xfrm_unregister_type) },
	{ 0xf8a7f5e8, __VMLINUX_SYMBOL_STR(xfrm4_protocol_register) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x4fab6c00, __VMLINUX_SYMBOL_STR(xfrm_register_type) },
	{ 0x85992e0a, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0xe35b9034, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0x6751835d, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0x6f8d8ca4, __VMLINUX_SYMBOL_STR(xfrm_state_insert) },
	{ 0x63dc6183, __VMLINUX_SYMBOL_STR(xfrm_init_state) },
	{ 0x440b546a, __VMLINUX_SYMBOL_STR(xfrm_state_alloc) },
	{ 0x769abcd7, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0x8aa92ada, __VMLINUX_SYMBOL_STR(ipcomp_init_state) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=xfrm_ipcomp";


MODULE_INFO(srcversion, "9006F9B6DE7160554F07F6A");
