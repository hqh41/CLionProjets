//
// Created by houqinghua on 2018/4/14.
//

#ifndef LINKEDLIST_LINKLIST_H
#define LINKEDLIST_LINKLIST_H

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class LinkList{
public:
    ListNode *head;
public:
    LinkList(){head = nullptr;}
    //~LinkList();
    bool Insert(int i, int e);
};
ListNode * addTwoNumbers(ListNode* l1, ListNode* l2);
ListNode* swapPairs(ListNode* head);

#endif //LINKEDLIST_LINKLIST_H
