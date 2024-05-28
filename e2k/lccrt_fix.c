#include <stdint.h>

uint64_t __lccrt_fshl_i40(uint64_t v, unsigned l) {
    return (v << l) & ((1ULL << 40) - 1);
}
