#include "LinkList.h"
#include <iostream>
using namespace std;

int main() {
    LinkList l1;
    l1.Insert(0, 0);
    l1.Insert(1, 1);
    l1.Insert(2, 2);
    //l1.Insert(3, 4);
    //l1.Insert(4, 5);
    //l1.Insert(4, 5);
    //l1.Insert(5, 6);
    //l1.Insert(6, 7);

    //LinkList l2;
    //l2.Insert(0, 7);

    /*ListNode* r = swapPairs(l1.head);
    while(r){
        cout << r->val << "->" << endl;
        r = r->next;
    }*/
    ListNode* head = rotateRight(l1.head, 4);
    while(head != nullptr){
        cout << head->val << "->";
        head = head->next;
    }
    cout << "NULL" << endl;
    cout << endl;
    return 0;
}