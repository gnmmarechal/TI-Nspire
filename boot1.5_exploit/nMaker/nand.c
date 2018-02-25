#include <os.h>
#include "nand.h"

// backward compatible
void bc_read_nand(void* dest, int size, int offset, int unknown, int percent_max, void *progress_cb) {
	if (nl_ndless_rev() < 989) // Ndless 3.1
		read_nand_31(dest, size, offset, unknown, percent_max, progress_cb);
	else
		read_nand(dest, size, offset, unknown, percent_max, progress_cb);
}