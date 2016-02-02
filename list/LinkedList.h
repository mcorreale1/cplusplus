#include "Node.h"
#include <iostream>
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

class LinkedList
{
    public:
        Node* head;
        Node* tail;
        LinkedList(Node* first);
        LinkedList();
        void add(int value);
        void remove(int ind);
        int get(int ind);
        int getSize() { return size; }

    private:
        int size;
};
#endif
