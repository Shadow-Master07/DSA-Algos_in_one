#pragma once

#include <iostream>
#include <stdlib.h>

namespace linear
{
    typedef struct SinglyNode
    {
        int data;
        struct SinglyNode *next;
    } S_Node;

    typedef struct DoublyNode
    {
        int data;
        struct DoublyNode *next;
        struct DoublyNode *previous;
    } D_Node;

    class Array
    {
        private:
            int m_size;
            int *data = (int *) malloc(sizeof(int) * m_size);
        public:
            Array(int size);
            void setData();
            void showData();
            ~Array()
            {
                free(data);
            }
    };

    class Stack
    {
        public:
            Stack(int data);
            void addData(int howMany);
            void showData();
            void deleteData(int whichData);
    };

    class Queue
    {
        public:
            Queue();
            void addData(int howMany);
            void showData();
            void deleteData(int whichData);
    };

    class SinglyLinkedList
    {
        private:
            S_Node *head;
        
        public:
            SinglyLinkedList(int data);
            void addData(int data);
            void showData();
            void deleteData(int data);
            void searchData(int data);
    };

    class DoublyLinkedList
    {
        private:
            D_Node *head;
        
        public:
            DoublyLinkedList(int data);
            void addData(int data);
            void showData();
            void deleteData(int data);
            void searchData(int data);
    };

    class HashTable
    {
    };
};
