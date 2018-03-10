#ifndef LYRA2Z330_H
#define LYRA2Z330_H

#include "miner.h"
//#define LYRA2Z330_SCRATCHBUF_SIZE (24576) // matrix size [12][4][4] uint64_t or equivalent
#define LYRA2Z330_SCRATCHBUF_SIZE (12*8*8)
// #define LYRA_SCRATCHBUF_SIZE (1536)
#define LYRA_SECBUF_SIZE (4) // (not used)
extern int lyra2Z330_test(unsigned char *pdata, const unsigned char *ptarget,
			uint32_t nonce);
extern void lyra2Z330_regenhash(struct work *work);

#endif /* LYRA2REV2_H */
