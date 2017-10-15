#include<iostream>
 
#include <sys/timeb.h>
using namespace std;

int hammingDistance(int x, int y) {
		int a = x^y;
		int distance = 0;
		while (a != 0) {
			if (a % 2 != 0) {
				distance++;
			}
			a >>= 1;
		 }
		return distance;
}
 
//int main() {
//	 
//	cout << hammingDistance(1,4);
//	return -1;
//}