//
// Created by houqinghua on 2018/4/16.
//

#include "LinkList.h"
#include <iostream>
using namespace std;

bool LinkList::Insert(int i, int e) {
    NODE *p = head;
    NODE *s;
    int j = 0;
    if (i == 0) {
        s = (NODE *) new NODE();
        s->val = e;
        s->next = p;
        head = s;
        return true;
    }
    if (p == nullptr)
        return false;
    while (p && j < i - 1) {
        p = p->next;
        j++;
    }
    s = (NODE *) new NODE();
    s->val = e;
    s->next = p->next;
    p->next = s;
    return true;
}


bool LinkList::GetElem(int i, int *e) {
    NODE *p = head;
    int j = 0;
    while (p && j < i) {
        p = p->next;
        j++;
    }
    if (p == nullptr)
        return false;
    *e = p->val;
    return true;
}

int LinkList::Length() {
    NODE *p = head;
    int len = 0;
    while (p != nullptr) {
        len++;
        p = p->next;
    }
    return len;
}

NODE* mergeTwoLists(NODE* l1, NODE* l2) {
    if(NULL == l1) return l2;
    if(NULL == l2) return l1;

    NODE* n1cur = l1;
    NODE* n1pre = l1;
    NODE* n2cur = l2;

    while(n1cur != nullptr && n2cur != nullptr){
        if((n1cur->val) <= (n2cur->val)){
            n1pre = n1cur;
            n1cur = n1cur->next;
        }
        else{
            if(n1cur != l1){
                n1pre->next = n2cur;
                n2cur = n2cur->next;
                n1pre->next->next = n1cur;
                n1pre = n1pre->next;
            }
            else{
                NODE* n2tmp = n2cur;
                n2cur = n2cur->next;
                n2tmp->next = n1cur;
                n1pre = n2tmp;
                l1 = n2tmp;
            }
        }
    }
    if(n2cur != nullptr){
        n1pre->next = n2cur;
    }
    return l1;
}