#include<iostream>




class node
{
    public:
        int data{};
        int key{};
        node* next;

        node()
        {
            data = 0;
            key = 0;
            next = nullptr;
        }
        node(int k,int d):data(d),key(k) {}

};
class doubleLinkedList
{
    public:
        node* head;
        doubleLinkedList():head(nullptr){}
};




node* 