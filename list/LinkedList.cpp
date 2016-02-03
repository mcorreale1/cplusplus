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
    } else  {
        Node* current = head;    
        for (int i = 1; i < ind; i++) {
           current = current->link;
           if(current == nullptr) {
               printf("Out of range: %d\n",ind);
               return;
           }
        }
        if(current->link->link != nullptr) {
            current->link = current->link->link;
        } else if (current->link == tail) {
            tail = current;
        }
    }
}

