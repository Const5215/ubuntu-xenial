cmd_net/ipv4/netfilter/nf_log_arp.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o net/ipv4/netfilter/nf_log_arp.ko net/ipv4/netfilter/nf_log_arp.o net/ipv4/netfilter/nf_log_arp.mod.o
