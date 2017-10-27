#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_map>
#include<unordered_set>
#include<queue>
#include<math.h>
using namespace std;
class MyStack {
public:
	/** Initialize your data structure here. */
	queue<int> q;
	MyStack() {

	}

	/** Push element x onto stack. */
	void push(int x) {
		q.push(x);
	}

	/** Removes the element on top of the stack and returns that element. */
	int pop() {
		if (!empty()) {
			int re = q.back();
			while (q.front() != re) {
				int p = q.front();
				q.push(p);
				q.pop();
			}
			q.pop();

			return re;
		}
		else {
			return -1;
		}

	}

	/** Get the top element. */
	int top() {
		return q.back();
	}

	/** Returns whether the stack is empty. */
	bool empty() {
		return q.empty();
	}
};