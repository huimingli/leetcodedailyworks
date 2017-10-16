#include<iostream>
#include<vector>
using namespace std;
int findComplement(int num) {
	int mask = ~0;
	while (num & mask) mask <<= 1;
	return ~num & ~mask;
}
//int main() {
//	int ass = 20161211;
//	cout << findComplement(ass) << endl;
// 
//}