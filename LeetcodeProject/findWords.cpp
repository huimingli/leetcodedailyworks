#include<iostream>
#include<vector>
#include<string>
using namespace std;
vector<string> findWords(vector<string>& words) {
	vector<string> res;
	for (auto str : words)
	{
		bool r1 = str.
			find_first_of("QWERTYUIOPqwertyuiop") 
			== string::npos ? false : true;
		bool r2 = str.find_first_of("ASDFGHJKLasdfghjkl") == string::npos ? false : true;
		bool r3 = str.find_first_of("ZXCVBNMzxcvbnm") == string::npos ? false : true;

		if (r1 + r2 + r3 == 1)
			res.push_back(str);
	}

	return res;
}
	

 
//int main() {
//	vector<string> params = { "Hello", "Alaska", "Dad", "Peace" };
//	
//	for (string word : findWords(params)) {
//		cout << word;
//	}
//}