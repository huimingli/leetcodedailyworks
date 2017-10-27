#pragma once
#include<math.h>
bool isPowerOfTwo(int n) {
	return fmod(log10(n) / log10(2), 1) == 0;
}