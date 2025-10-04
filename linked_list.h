#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include<string>

// data structure
/*
    - Singlely linked_list
    - Doublely linked_list
*/

struct student
{
   std::string name;
   int age;
};

struct Node2
{
    student data;
    Node2* pNext;
};

void addStudent(Node2*& pHead, student s);
void printStudentList(Node2* pHead);


struct Node //Node define
{
   int data;
   Node* pNext;

};

void pushFront(Node*& pHead, int value);
void pushBack(Node*& pHead, int value);
void printList(Node* pHead);
void writeDataToFile(std::string filename, Node* pHead);
void readDataFromFile(std::string filename);

#endif