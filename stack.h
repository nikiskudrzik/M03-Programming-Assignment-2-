#ifndef STACK_H
#define STACK_H

class Stack {
public:
    char arr[1000];
    int stackTop;

    Stack();
    void push(char ch);
    char pop();
    bool isEmpty();
};

#endif