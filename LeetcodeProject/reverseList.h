#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_map>
#include<unordered_set>
#include<queue>
using namespace std;
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}

};

ListNode* reverseList(ListNode* head) {
	if (!head) return NULL;
	ListNode* p = NULL;
	if (head->next == NULL) return head;
	while (head != NULL) {
		ListNode*nextNode = head->next;
		head->next = p;
		p = head;
		head = nextNode;
	}
	return p;
}