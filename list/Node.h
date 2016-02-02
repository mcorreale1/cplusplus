#ifndef NODE_H
#define NODE_H
class Node 
{
    public:
        int val;
        Node* link;
        Node(int);
        Node(int, Node*);
};
#endif
