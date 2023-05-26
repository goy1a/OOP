#ifndef PUKIPUK2_STACK_H
#define PUKIPUK2_STACK_H

struct Node {
    int data;
    struct Node* next;
};

class Stack {
public:
    void push();
    void pop();
}

#endif //PUKIPUK2_STACK_H
