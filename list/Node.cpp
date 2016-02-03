#include <iostream>
#include "Node.h"

Node::Node(int value) {
    val = value;
    link = nullptr;
}

Node::Node(int value, Node* next) {
    val = value;
    link = next;
}

Node::~Node() {
    printf("Node with value %d deleted\n", val);
}

