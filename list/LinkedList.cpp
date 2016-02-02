#include "LinkedList.h"
#include "Node.h"

LinkedList::LinkedList(Node* first) {
    head = first;
    tail = nullptr;
    size = 1;
}

LinkedList::LinkedList() {
    head = nullptr;
    tail = nullptr;
    size = 0;
}

void LinkedList::add(int value) {
    Node* node = new Node(value);
    if(head == nullptr) {
        head = node;
    } else if (tail == nullptr) {
        tail = node;
        head->link = tail;
    } else {
        tail->link = node;
        tail = node;
    }
    size++;
}
int LinkedList::get(int ind) {
    if (ind == 0) {
        return head->val;
    }
    Node* current = head->link;
    for(int i = 1; i < ind; i++) {
        current = current->link;
        if(current == nullptr) {
            printf("Out of range");
            return ind;
        }
    }
    return current->val;
}
void LinkedList::remove(int ind) {
    if(ind == 0) {
        head = head->link;
    } else if (ind < size-1) {
       for (int i = ind; i < 0; i++) {

       }

    }
}

