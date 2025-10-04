#include "double_ll.h"
#include <iostream>
/*
nullptr <- [value] ->
        <- [0] ->
        <- [1] ->
        <- [2] ->
        <- [3] -> nullptr

        <- [new] -> nullptr


*/

/*

    nullptr <- [new] -> nullptr
*/
void pushFront(Node *&pHead, int value)
{
    if (pHead == nullptr)
    {
        // std::cout << "List is empty" << std::endl;

        Node *tmp = new Node();
        tmp->data = value;
        tmp->pNext = nullptr;
        tmp->pPrev = nullptr;

        pHead = tmp;
    }
    else
    {
        Node *tmp = new Node();
        tmp->data = value;

        tmp->pNext = pHead;
        tmp->pPrev = nullptr;
        pHead->pPrev = tmp;

        pHead = tmp;
    }
}


void pushBack(Node*& pHead, int value) 
{
    Node* tmp = new Node();
    tmp->data = value;
    tmp->pNext = nullptr;

    Node* currentNode = pHead;
    while (currentNode->pNext != nullptr)
    {
       currentNode = currentNode->pNext;
    }
    

    tmp->pPrev = currentNode;
    currentNode->pNext = tmp;
    
}

void printList(Node *pHead)
{

    if (pHead == nullptr)
    {
        std::cout << "List is empty" << std::endl;
    }
    else
    {
        Node *currentNode = pHead;
        int counter = 0;
        while (currentNode != nullptr) {
            std::cout << "Node thu " << counter + 1 << ": " << currentNode->data << std::endl;
            currentNode = currentNode->pNext;

            counter++;
        }
    }
}