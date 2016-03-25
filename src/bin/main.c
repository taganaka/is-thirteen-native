#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include "isthirteen.h"
static void test_IsThirteen(){
  assert(IsThirteen(130) == false);
  assert(IsThirteen(13) == true);
}

static void test_IsNotThirteen(){
  assert(IsNotThirteen(130) == true);
  assert(IsNotThirteen(13) == false);
}

static void test_IsThirteenString(){
  assert(IsThirteenString("tredici") == true);
  assert(IsThirteenString("foobar")  == false);
}

static void test_IsThirteenDivisibleBy(){
  assert(IsThirteenDivisibleBy(1) == true);
  assert(IsThirteenDivisibleBy(13) == true);
  assert(IsThirteenDivisibleBy(8) == false);
  assert(IsThirteenDivisibleBy(0) == false);
  assert(IsThirteenDivisibleBy(-13) == false);
}

static void test_IsThirteenGreaterThan() {
  assert(IsThirteenGreaterThan(1) == true);
  assert(IsThirteenGreaterThan(14) == false);
  assert(IsThirteenGreaterThan(13) == false);
}

static void test_IsThirteenLessThan(){
  assert(IsThirteenLessThan(1) == false);
  assert(IsThirteenLessThan(14) == true);
  assert(IsThirteenLessThan(13) == false);
}

static void test_IsRoughlyThirteen() {
  assert(IsRoughlyThirteen(13.2) == true);
  assert(IsRoughlyThirteen(12.8) == true);
  assert(IsRoughlyThirteen(13) == true);
  assert(IsRoughlyThirteen(14) == false);
  assert(IsRoughlyThirteen(12) == false);
}

static void test_IsThirteenWithin() {
  assert(IsThirteenWithin(12, 15) == true);
  assert(IsThirteenWithin(0, 14) == true);
  assert(IsThirteenWithin(14, 15) == false);
  assert(IsThirteenWithin(13, 13) == true);
  assert(IsThirteenWithin(18, 1) == false);
}

int main() {
  printf("Welcome to IsThirteen Native library Unit test\n");
  test_IsThirteen();
  test_IsNotThirteen();
  test_IsThirteenString();
  test_IsThirteenDivisibleBy();
  test_IsThirteenGreaterThan();
  test_IsThirteenLessThan();
  test_IsRoughlyThirteen();
  test_IsThirteenWithin();
  printf("All good! Happy Thirteening\n");
}
