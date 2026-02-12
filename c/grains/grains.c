#include "grains.h"

typedef uint64_t u64;
typedef uint32_t u32;
typedef uint16_t u16;
typedef uint8_t u8;

typedef int8_t i8;
typedef int16_t i16;
typedef int32_t i32;
typedef int64_t i64;

u64 square(u8 index) {
    u64 sum = 0;
    u64 i = 0;
    do {
        if (!index) return 0;
        if (sum == 0) {
            sum++;
        } else {
            sum *= 2;
        }
        ++i;
    } while (i < index);
    return sum;
}

u64 total(void) {
    int grains = 0;
    for (u8 i = 1; i <= 64; ++i) {
        grains += square(i);
    }
    return grains;
}
