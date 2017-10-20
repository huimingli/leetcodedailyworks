#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_map>
#include<unordered_set>
#include<queue>
 using namespace std;
  
 bool isHappy(int n) {
	 while (n>6) {
		 int next = 0;
		 while (n) { 
			 next += (n % 10)*(n % 10); 
			 n /= 10; }
		 n = next;
	 }
	 return n == 1;
 }
  
int main() {
	 
	cout << isHappy(100);
} 
 