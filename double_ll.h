#ifndef DOUBLELY_LINKED_LIST
#define DOUBLELY_LINKED_LIST

struct Node
{
    int data;
    Node* pNext;
    Node* pPrev;
};
/*
nullptr <- [0] ->
        <- [1] ->
        <- [2] ->
        <- [3] -> nullptr
*/

void pushFront(Node*& pHead, int value);
void pushBack(Node*& pHead, int value);
void printList(Node* pHead);

#endif