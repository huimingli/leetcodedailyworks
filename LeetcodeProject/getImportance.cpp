#include<iostream>
#include<vector>
using namespace std;
class Employee {
public:
// It's the unique ID of each node.
// unique id of this employee
int id;
// the importance value of this employee
int importance;
// the id of direct subordinates
vector<int> subordinates;
};
 
class Solution {
public:
	int getImportance(vector<Employee*> employees, int id) {
		int sum = 0;
		for (int i = 0; i<employees.size(); i++) {
			if (id == employees[i]->id) {
				sum += employees[i]->importance;
				vector<int> sub = employees[i]->subordinates;
				for (int j = 0; j<sub.size(); j++) {
					sum += getImportance(employees, sub[j]);
				}
			}
		}
		return sum;

	}
};