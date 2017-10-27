#pragma once.
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
ListNode* deleteDuplicates(ListNode* head) {
	ListNode* cur = head;
	while (cur) {
		while (cur->next && cur->val == cur->next->val) {
			cur->next = cur->next->next;
		}
		cur = cur->next;
	}
	return head;
}