#include "Stack.h"
#include <iostream>
using namespace std;

int depth = 0;
int max_depth;
struct Node *top = nullptr;
Stack(int n);

int Stack(int n) {
    max_depth = n;
}

exception Stack::push(int element) {
    if (depth == max_depth)
        exception();

    depth++;
    Node *temp = (Node *) operator new(sizeof(Node));
    temp->data = element;
    temp->next = top;
    top = temp;
}
void Stack::pop() {
    depth--;
    struct Node *temp = top;
    if (top == nullptr) {
        return;
    }
    top = top->next;
    free(temp);
}

}