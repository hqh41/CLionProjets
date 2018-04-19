//
// Created by houqinghua on 2018/4/16.
//
#include "LinkList.h"
#include<iostream>
using namespace std;

int main() {
    int a = 0;
    int *p = &a;
    LinkList l1;
    l1.Insert(0, 5);

    LinkList l2;
    l2.Insert(0, 1);
    l2.Insert(1, 2);
    l2.Insert(2, 4);

    NODE *result = mergeTwoLists(l1.head, l2.head);

    while(result != nullptr){
        cout << result->val << "->";
        result = result->next;
    }
    cout << endl;
    return 0;
}