#ifndef NODE_H
#define NODE_H
class Node 
{
    public:
        Node(int);
        Node(int, Node*);
        ~Node();
        Node* link;
        int val;
};
#endif
