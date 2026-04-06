#include <iostream>
#include <string>
#include <cctype>
#include "stack.h"
#include "queue.h"

using namespace std;

int main() {
    Stack stack;
    Queue queue;

    string text;
    string processedText = "";
    bool palindrome = true;

    cout << "Enter a line of text: ";
    getline(cin, text);

    // Put each lowercase letter or number into both the stack and queue
    for (int i = 0; i < text.length(); i++) {
        if (isalnum(text[i])) {
            char ch = tolower(text[i]);
            processedText += ch;
            stack.push(ch);
            queue.addChar(ch);
        }
    }

    // Compare values from the stack and queue
    while (!stack.isEmpty() && !queue.isEmpty()) {
        char stackChar = stack.pop();
        char queueChar = queue.removeChar();

        if (stackChar != queueChar) {
            palindrome = false;
        }
    }

    cout << endl;
    cout << "Original text: " << text << endl;
    cout << "Processed text: " << processedText << endl;

    if (palindrome) {
        cout << "This is a palindrome." << endl;
    } else {
        cout << "This is not a palindrome." << endl;
    }

    return 0;
}