# M03 Programming Assignment 2

## Program Description

This program reads a line of text from the user, changes uppercase letters to lowercase, and stores each letter or number in both a queue and a stack. It then compares the characters from the queue and stack to determine whether the text is a palindrome.

A palindrome is a word or phrase that reads the same forward and backward.

Examples:

* Racecar: palindrome
* Hello: not a palindrome
* Never odd or even: palindrome

## Inputs

The program reads one line of text entered by the user.

Examples of input:

* Racecar
* Hello
* Never odd or even

## Outputs

The program prints:

* the original text
* the processed lowercase text
* whether the text is a palindrome or not


## How the Program Works

The user enters a line of text. The program goes through each character. If the character is a letter or number, it is converted to lowercase and added to both a queue and a stack. The program then compares characters removed from the queue and stack. If all characters match, the text is a palindrome. If any do not match, it is not a palindrome.

## Compile and Run Instructions

Compile:

```
g++ main.cpp stack.cpp queue.cpp -o program
```

Run:

```
./program
```

## Source Files Included

* main.cpp
* stack.cpp
* stack.h
* queue.cpp
* queue.h

## Program Testing

I have included 3 screenshots showing:

* Racecar
* Hello
* Never odd or even
