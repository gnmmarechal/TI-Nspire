#define CR4_OFFSET			0x81D

static const unsigned read_nand_31_addrs[]			= {	0x10071F5C, 0x10071EC4, 0x10071658, 0X100715E8, 0x1006E0AC, 0x1006E03C};

#define read_nand_31		SYSCALL_CUSTOM(read_nand_31_addrs ,void,  void* dest, int size, int offset, int, int percent_max, void *progress_cb )

void bc_read_nand(void* dest, int size, int offset, int unknown, int percent_max, void *progress_cb);