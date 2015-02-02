#include "../headers/mod_adj.h"

int AdjustBase(int a, int b);

int AdjustBase(int a, int b) {
	int result = 0;
	result = a + b;
	return result;
}

int Mult(int a, int b) {
	int result = 0;
	result = a * b;
	return result;
}

int AdjustNormal(int a) {
	int result = 0;
	result = AdjustBase(a, ADJUST_NORMAL);
	return result;
}

int AddjustUrgent(int a) {
	int result = 0;
	result = AdjustBase(a, ADJUST_URGENT);
	return result;
}

