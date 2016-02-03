#include <iostream>
#include "Node.h"
#include "LinkedList.h"

int main() {
    Node* node1 = new Node(5);
    Node* node2 = new Node(6);

    LinkedList* list = new LinkedList();
    list->add(100);
    list->add(45);
    list->add(78);
    list->add(103);
    list->add(321);


    list->remove(4);
    printf("%d\n", list->head->val);
    printf("%d\n", list->tail->val);
    printf("%d\n", list->get(3));

}
