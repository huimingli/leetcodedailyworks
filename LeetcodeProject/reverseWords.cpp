#include<iostream>
#include<string>
using namespace std;
string reverseWords(string s) {
	for (int i = 0; i < s.size(); i++) {
		if (s[i] != ' ') {
			int j = i;
			for(;j<s.size() && s[j] != ' ';j++){}
			reverse(s.begin() + i, s.begin() + j );
			i = j;
		}
	}
	return s;
}

//int main() {
//	cout << reverseWords("Let's take LeetCode contest") << endl;
//	string test = "absisicne";
//	reverse(test.begin(), test.begin() + 3);
//	cout << test << endl;
//}