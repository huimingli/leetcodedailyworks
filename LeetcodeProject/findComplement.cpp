#include<iostream>
#include<vector>
using namespace std;
int findComplement(int num) {
	int mask = ~0;
	while (num & mask) mask <<= 1;
	return ~num & ~mask;
}
int main() {
	int ass = 5;
	cout << findComplement(ass) << endl;
	cout << !ass << endl;
}