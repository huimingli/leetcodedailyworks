#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int calPoints(vector<string>& ops) {
	stack<int> s;
	int sum = 0;
	for (int i = 0; i < ops.size(); i++) {
		int point = 0;
		if (ops[i] == "C") {
			sum -= s.top();
			s.pop();
			continue;
		}
		else if (ops[i] == "D") {
			point = s.top() * 2;
		}
		else if (ops[i] == "+") {
			point = s.top();
			if (s.size() > 1) {
				s.pop();
				int sub = s.top();
				s.push(point);
				point += sub;
			}
			else {
				point *= 2;
			}
		}
		else {
			point = atoi(ops[i].c_str());
		}
		s.push(point);
		sum += point;
	} 
	return sum;
}

//int main() {
//	vector<string> v = { "5","-2","4","C","D","9","+","+" };
//	cout << calPoints(v);
//}