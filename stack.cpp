#include "stack.h"

Stack::Stack() {
    stackTop = 0;
}

void Stack::push(char ch) {
    arr[stackTop] = ch;
    stackTop++;
}

char Stack::pop() {
    stackTop--;
    return arr[stackTop];
}

bool Stack::isEmpty() {
    return stackTop == 0;
}