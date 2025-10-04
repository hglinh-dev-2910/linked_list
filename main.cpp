#include "linked_list.h"
#include <iostream>
int main() {

    Node* pHead = nullptr;
    pushFront(pHead, 1);

    pushBack(pHead, 2);
    pushFront(pHead, 0);
    writeDataToFile("test.txt", pHead);
    readDataFromFile("test.txt");

    //printList(pHead);

    // std::cout << pHead->data << std::endl;

    // Node2* pHead = nullptr;
    // student s;
    // student s2;

    // addStudent(pHead, s);
    // addStudent(pHead, s2);

    // std::cout << "-----------------------------" << std::endl;
    // printStudentList(pHead);
    
    return 0;
}

/*
[0] -> [1] -> [2]

*/