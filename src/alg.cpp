// Copyright 2022 NNTU-CS
#include "alg.h"
#include <cstdint>
#include <cmath>

bool checkPrime(uint64_t value) {
	int count = 0;
	for (int i = value; i > 0; i--) {
		if (value % i == 0) {
			count += 1;
		}
	}
	if (count == 2) {
		return (true);
	}
	else {
		return (false);
	}
}

uint64_t nPrime(uint64_t n) {
	int i = 0;
	int count = 0;
	while (count < n) {
		i++;
		if (checkPrime(i)) {
			count += 1;
		}
	}
	return (i);
}

uint64_t nextPrime(uint64_t value) {
	while (checkPrime(value) == false) {
		value++;
	}
	return (value);
}

uint64_t sumPrime(uint64_t hbound) {
	int sum = 0;
	for (int i = 0; i < hbound; i++) {
		if (checkPrime(i)) {
			sum += i;
		}
	}
	return (sum);
}