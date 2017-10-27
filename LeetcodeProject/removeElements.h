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
 struct ListNode {
	 int val;
	 ListNode *next;
	 ListNode(int x) : val(x), next(NULL) {}
	 
};
ListNode* removeElements(ListNode* head, int val) {

	if (head == nullptr) return nullptr;
	head->next = removeElements(head->next, val);
	return head->val == val ? head->next : head;
}