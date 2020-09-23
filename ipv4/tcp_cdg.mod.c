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
	{ 0xe2b2d93a, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xd82358e2, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xac51bec2, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x675b9837, __VMLINUX_SYMBOL_STR(tcp_unregister_congestion_control) },
	{ 0x590856b0, __VMLINUX_SYMBOL_STR(tcp_register_congestion_control) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x262f20a8, __VMLINUX_SYMBOL_STR(local_clock) },
	{ 0xd0029caf, __VMLINUX_SYMBOL_STR(tcp_enter_cwr) },
	{ 0xa735db59, __VMLINUX_SYMBOL_STR(prandom_u32) },
	{ 0xc0da4054, __VMLINUX_SYMBOL_STR(tcp_reno_cong_avoid) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "731AEF831BEDA49D5AC2C2E");
