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
	{ 0x7b40fc97, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x146da384, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xf499fdb2, __VMLINUX_SYMBOL_STR(rcu_barrier_bh) },
	{ 0x893e6dc4, __VMLINUX_SYMBOL_STR(nf_unregister_hook) },
	{ 0x39e60c12, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x17ca3f3d, __VMLINUX_SYMBOL_STR(xt_unregister_target) },
	{ 0x4f095d44, __VMLINUX_SYMBOL_STR(nf_register_hook) },
	{ 0xd4b70f1, __VMLINUX_SYMBOL_STR(xt_register_target) },
	{ 0xdcd04620, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x3dbd8007, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x9d2b159, __VMLINUX_SYMBOL_STR(dev_mc_add) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xf54ea919, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x258e9b3a, __VMLINUX_SYMBOL_STR(dev_get_by_name) },
	{ 0x78f9b710, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_try_module_get) },
	{ 0x333fc469, __VMLINUX_SYMBOL_STR(seq_release) },
	{ 0x7e927f92, __VMLINUX_SYMBOL_STR(call_rcu_bh) },
	{ 0xb602c57e, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_module_put) },
	{ 0xa86647d8, __VMLINUX_SYMBOL_STR(dev_mc_del) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x6bf1c17f, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x9878745c, __VMLINUX_SYMBOL_STR(_atomic_dec_and_lock) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0xe8b1a2e, __VMLINUX_SYMBOL_STR(seq_open) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x4a8ca5b9, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3c80c06c, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x3bf10a35, __VMLINUX_SYMBOL_STR(PDE_DATA) },
	{ 0xca0b003, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x78b0636f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0x293bf018, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0x56d4ca56, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x633e490, __VMLINUX_SYMBOL_STR(proc_remove) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables,nf_conntrack";


MODULE_INFO(srcversion, "51AC50ACA508276DC7682E7");
