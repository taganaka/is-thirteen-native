#include "isthirteen.h"
#include "isthirteen_strings.h"
#include <stdlib.h>
#include <stdio.h>
#include <strings.h>
#include <stdbool.h>

void ShowSupportedStrings() {
  for (size_t i = 0; i < sizeof(isThirtheenStrings) / sizeof(char *); i++) {
    printf("%s\n", isThirtheenStrings[i]);
  }
}

bool IsThirteen(const size_t x) {
  return x == THIRTEEN;
}

bool IsNotThirteen(const size_t x) {
  return !IsThirteen(x);
}

bool IsThirteenString(const char * str) {
  // XXX: TODO Sort the static array and use binary search to speedup the lookup
  for (size_t i = 0; i < sizeof(isThirtheenStrings) / sizeof(char *); i++) {
    if (strcmp(isThirtheenStrings[i], str) == 0) {
      return true;
    }
  }
  return false;
}

bool IsThirteenDivisibleBy(const size_t x) {
  if (x == 0) {
    return false;
  }
  return THIRTEEN % x == 0 ? true : false;
}

bool IsThirteenGreaterThan(const size_t x) {
  return THIRTEEN > x;
}

bool IsThirteenLessThan(const size_t x) {
  return THIRTEEN < x;
}

bool IsRoughlyThirteen(const float x) {
  return x >= ((float)THIRTEEN - ROUGHLY_THIRTEEN_BOUNDS) && x < ((float)THIRTEEN + ROUGHLY_THIRTEEN_BOUNDS);
}

bool IsThirteenWithin(const size_t x, const size_t y) {
  return THIRTEEN <= y && THIRTEEN >= x ? true : false;
}
