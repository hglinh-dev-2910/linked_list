#include "linked_list.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include<string.h>
#include<fstream>
#include<vector>

/*
[Node pHead] -> [Node 0] -> [Node 1] -> [Node 2]
*/
void pushFront(Node *&pHead, int value)
{

    Node *tmp = new Node();
    tmp->data = value;
    tmp->pNext = pHead;

    pHead = tmp;
}

/*
[Node pHead] -> [Node 0] -> [Node 1] -> [Node 2] ->  [Node new: value]
[current]

*/
void pushBack(Node *&pHead, int value)
{
    if (pHead == nullptr)
    {
        std::cout << "List is not defined" << std::endl;
    }
    else
    {
        Node *currentNode = pHead;
        Node *tmp = new Node();
        tmp->data = value;

        while (currentNode->pNext != nullptr)
        {
            currentNode = currentNode->pNext; // duyet toi cuoi dsach
        }
        currentNode->pNext = tmp; // cap nhat phan tu cuoi
    }
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
        while (currentNode != nullptr)
        {
            std::cout << "Node thu " << counter + 1 << ": " << currentNode->data << std::endl;
            currentNode = currentNode->pNext;
            counter++;
        }
        std::cout << std::endl;
    }
}

/*
        [] -> nullptr
        [new] 
*/

void addStudent(Node2 *&pHead, student s)
{
    Node2* tmp = new Node2();

    // nhap data
    std::cin.ignore();
    std::cout << "Nhap ten: ";
    
    getline(std::cin, tmp->data.name);
    std::cout << "Nhap tuoi: ";
    std::cin >> tmp->data.age;

    // cap nhat con tro
    tmp->pNext = pHead;
    pHead = tmp;
}

void printStudentList(Node2 *pHead)
{
    Node2* currentNode = pHead;
    while (currentNode != nullptr)
    {
        std::cout << "Ten: " << currentNode->data.name << std::endl;
        std::cout << "Tuoi: " << currentNode->data.age << std::endl;

        currentNode = currentNode->pNext;
    }
    std::cout << std::endl;
    
}

void writeDataToFile(std::string filename, Node* pHead)
{
    // output to file
    std::ofstream outFile(filename ,std::ios::app); // append
    Node* currentNode = pHead;
    while (currentNode != nullptr)
    {
        outFile << currentNode->data << std::endl;
        currentNode = currentNode->pNext;
    }
    outFile.close();

}

void readDataFromFile(std::string filename)
{
    std::ifstream inFile(filename);
    std::vector<int> a;

    if(!inFile)
    {
        std::cout << filename << " khong ton tai" << std::endl;
    }
    else 
    {
        std::string tmp;
        while (getline(inFile, tmp))
        {
           a.push_back(stoi(tmp));
        }
        inFile.close();
        
    }

    for(int i = 0; i< a.size(); i++) {
        std::cout<< a[i] <<std::endl;
    }
}
