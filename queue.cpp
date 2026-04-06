#include "queue.h"

Queue::Queue() {
    frontIndex = 0;
    rearIndex = 0;
    count = 0;
}

void Queue::addChar(char ch) {
    arr[rearIndex] = ch;
    rearIndex++;
    count++;
}

char Queue::removeChar() {
    char ch = arr[frontIndex];
    frontIndex++;
    count--;
    return ch;
}

bool Queue::isEmpty() {
    return count == 0;
}