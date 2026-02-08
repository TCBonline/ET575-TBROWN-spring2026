/*
Tristan Brown
lab 5, Leveraging AI as a C++ Coding Assistant
Feb 3, 2026
*/

// Ask both how to solve Lab Exercise 4 (refer to the original exercise description).

#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    
    // Ask user for a word
    cout << "Type a word: ";
    cin >> word;

    // Print the 2nd character
    cout << "\n2nd character:          " << word[1] << endl;

    // Print the length of the word
    cout << "word has:               " << word.length() << " characters" << endl;

    // Replace 2 characters starting from index 2 (3rd character)
    string replacedWord = word;
    if (replacedWord.length() >= 3) {
        replacedWord.replace(2, 2, "-- $ --");
    }
    cout << "Replace word:           " << replacedWord << endl;

    // Remove last 3 characters
    string removedWord = word;
    if (removedWord.length() >= 3) {
        removedWord.erase(removedWord.length() - 3, 3);
    }
    cout << "Remove end characters:  " << removedWord << endl;

    return 0;
}

// --- AI Assistant Used: Copilot ---
// Q1) Was the code correct? (Yes/No and explain your answer)
// The code was correct as it provided working code for all the exercises in lab 4.

// Q2) Was it readable and properly commented? explain your answer
// While it used more lines and if else statements, the code was still readable. The code also comments where needed.

// Q3) Were you able to explain each line of code? explain your answer
// Since the code is readable to me I would also be able to explain it.

// Q4) Did it use the same programming concepts we learned in class? Explain which concepts were used and which ones were unfamiliar. 
// It used some similar concepts such as "\n" and indexing strings. Unfamiliar concepts used were "if else" statements in C++.

// Q5) Terminal Output: (Paste the output of your program here)
// Type a word: Superpowers
//
// 2nd character:          u
// word has:               11 characters
// Replace word:           Su-- $ --rpowers
// Remove end characters:  Superpow