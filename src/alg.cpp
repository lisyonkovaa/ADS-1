// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"

bool checkPrime(uint64_t value) {
// вставьте код функции
  if (value < 2)
    return false;
  for (uint64_t i = 2; i * i <= value; i++)
    if (value % i == 0)
      return false;
  return true;
}

uint64_t nPrime(uint64_t n) {
// вставьте код функции
  uint64_t number = 2;
  for (uint64_t i = 1; i < n; i++)
    while (!checkPrime(++number)) {}
  return number;
}

uint64_t nextPrime(uint64_t value) {
// вставьте код функции
  while (!checkPrime(++value)) {}
  return value;
}

uint64_t sumPrime(uint64_t hbound) {
// вставьте код функции
  uint64_t summa = 0;
  for (uint64_t number = 2; number < hbound;)
    checkPrime(number) ? summa += number++ : ++number;
  return summa;
}
