//
// Created by houqinghua on 2018/4/16.
//

#ifndef MERGE_TWO_SORTED_LISTS_LINKLIST_H
#define MERGE_TWO_SORTED_LISTS_LINKLIST_H

typedef struct node{
    int val;
    struct node *next;
}NODE;

class LinkList{
public:
    LinkList(){head = nullptr;}

    int Length();
    bool GetElem(int i, int *e);

    bool Insert(int i, int e);

    NODE *head;
};
NODE* mergeTwoLists(NODE* l1, NODE* l2);

#endif //MERGE_TWO_SORTED_LISTS_LINKLIST_H
