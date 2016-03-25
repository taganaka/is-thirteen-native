#ifndef IS_THIRTEEN_H
#define IS_THIRTEEN_H
#include <stdlib.h>
#include <stdbool.h>

#define THIRTEEN 13
#define ROUGHLY_THIRTEEN_BOUNDS 0.5

extern void ShowSupportedStrings();
extern bool IsThirteen(const size_t);
extern bool IsNotThirteen(const size_t);
extern bool IsThirteenString(const char *);
extern bool IsThirteenDivisibleBy(const size_t);
extern bool IsThirteenGreaterThan(const size_t x);
extern bool IsThirteenLessThan(const size_t);
extern bool IsRoughlyThirteen(const float);
extern bool IsThirteenWithin(const size_t, const size_t);
extern bool IsThirteenPrime();
extern bool IsThirteenTheNewBlack();

#endif
