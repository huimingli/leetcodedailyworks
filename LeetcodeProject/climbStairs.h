#pragma once
int climbStairs(int n) {
	int a = 1;
	int b = 1;
	while (n>0) {
		b += a;
		a = b - a;
		n--;
	}
	return a;
}