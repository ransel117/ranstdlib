#ifndef RANTYPES_H
#define RANTYPES_H

#include <stdint.h>
#include <stddef.h>

#ifndef __bool_true_false_are_defined
#define _Bool bool
#define true 1
#define false 0

#define __bool_true_false_are_defined 1
#endif /* Check if user has included stdbool.h */

typedef uint8_t  u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;
typedef int8_t   i8;
typedef int16_t  i16;
typedef int32_t  i32;
typedef int64_t  i64;
typedef float    f32;
typedef double   f64;
typedef size_t   usize;

#endif /* RANTYPES_H */
