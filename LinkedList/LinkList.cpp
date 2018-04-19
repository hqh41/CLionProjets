//
// Created by houqinghua on 2018/4/14.
//
#include "LinkList.h"
#include <iostream>
using namespace std;
#include <deque>
#include <math.h>

/*LinkList::~LinkList(){
    ListNode *p = head;
    while(p){
        p = head;
        head = head->next;
        delete p;
    }
}*/

bool LinkList::Insert(int i, int e){
    ListNode *p = head;
    ListNode *s;
    int j = 0;
    if(i == 0){
        s = (ListNode *)new ListNode(e);
        s->next = p;
        head = s;
        return true;
    }
    if(p == nullptr)
        return false;
    while(p && j < i-1){
        p = p->next;
        j++;
    }
    s = (ListNode *)new ListNode(e);
    s->next = p->next;
    p->next = s;
    return true;
}

/*ListNode * addTwoNumbers(ListNode* l1, ListNode* l2) {
    long int result1 = 0;
    int size_moins_11 = 0;
    ListNode* r1;
    ListNode* p1 = l1;
    ListNode* q1 = l1->next;
    l1->next = nullptr;
    while(q1){
        r1 = q1->next;
        q1->next = p1;
        p1 = q1;
        q1 = r1;
        size_moins_11++;
    }
    l1 = p1;
    int size_iter1 = size_moins_11;
    while(p1){
        result1 += p1->val*(int)pow(10, size_iter1);
        p1 = p1->next;
        size_iter1--;
    }

    long int result2 = 0;
    int size_moins_12 = 0;
    ListNode* r2;
    ListNode* p2 = l2;
    ListNode* q2 = l2->next;
    l2->next = nullptr;
    while(q2){
        r2 = q2->next;
        q2->next = p2;
        p2 = q2;
        q2 = r2;
        size_moins_12++;
    }
    l2 = p2;
    int size_iter2 = size_moins_12;
    while(p2){
        result2 += p2->val*(long int)pow(10, size_iter2);
        p2 = p2->next;
        size_iter2--;
    }

    long int result3 = result1 + result2;
    deque<int> v3;
    if(result3 == 0)
        v3.push_front(0);
    while(result3 != 0){
        v3.push_front(result3%10);
        result3 = result3/10;
    }

    ListNode* head = nullptr;
    for(auto ele : v3){
        ListNode* n = head;
        ListNode* p = new ListNode(ele);
        p->next = n;
        head = p;
    }
    return head;
}*/
