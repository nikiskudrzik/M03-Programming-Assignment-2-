#ifndef QUEUE_H
#define QUEUE_H

class Queue {
public:
    char arr[1000];
    int frontIndex;
    int rearIndex;
    int count;

    Queue();
    void addChar(char ch);
    char removeChar();
    bool isEmpty();
};

#endif