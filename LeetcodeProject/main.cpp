#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include"detectCapitalUse.h"
using namespace std;

int main() {
	int pa[] = {3,4,5,3,2};
	int k = 7;
	/*for (int i = 0; i < 5; i++) {
		int in = (i + k % 5) % 5;
		pa[i] >>=(in*4);
	}*/
	pa[0] >>= 1;
	for (int i = 0; i < 5; i++) {
		cout << pa[i] << " ";
	}

}