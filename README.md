# IsThirteen C Library.

Original project:

https://github.com/jezen/is-thirteen

## Build:

```
$ ./configure
$ make
```

## Install

`$ make install`

## Exported functions

```c
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
```
