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
	{ 0x6910fe04, __VMLINUX_SYMBOL_STR(xfrm_input) },
	{ 0x6a31912d, __VMLINUX_SYMBOL_STR(xfrm4_rcv) },
	{ 0xcfe0abef, __VMLINUX_SYMBOL_STR(xfrm4_protocol_deregister) },
	{ 0x2c9be061, __VMLINUX_SYMBOL_STR(xfrm_unregister_type) },
	{ 0xf8a7f5e8, __VMLINUX_SYMBOL_STR(xfrm4_protocol_register) },
	{ 0x4fab6c00, __VMLINUX_SYMBOL_STR(xfrm_register_type) },
	{ 0x5dfe0d09, __VMLINUX_SYMBOL_STR(xfrm_input_resume) },
	{ 0xfb3c7d0f, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x6bfe83a1, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa6e66685, __VMLINUX_SYMBOL_STR(xfrm_aalg_get_byname) },
	{ 0xf2094e9b, __VMLINUX_SYMBOL_STR(crypto_ahash_setkey) },
	{ 0xd6fdd892, __VMLINUX_SYMBOL_STR(crypto_alloc_ahash) },
	{ 0xca0b003, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x78b0636f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x6f48d725, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x4d0d90e0, __VMLINUX_SYMBOL_STR(crypto_ahash_digest) },
	{ 0x1eb97d89, __VMLINUX_SYMBOL_STR(skb_to_sgvec_nomark) },
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xab435272, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x248722d4, __VMLINUX_SYMBOL_STR(skb_cow_data) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x18815af, __VMLINUX_SYMBOL_STR(xfrm_output_resume) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x85992e0a, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0x6751835d, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0xe35b9034, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0x769abcd7, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=xfrm_algo";


MODULE_INFO(srcversion, "D49196686DDF42DCBF46D5B");
