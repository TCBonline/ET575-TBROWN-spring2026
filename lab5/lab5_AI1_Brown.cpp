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

    // 1. Ask the user for a word
    cout << "Enter a word: ";
    cin >> word;

    // 2. Print the 2nd character (Index 1, since strings start at 0)
    cout << "2nd character:         " << word.at(1) << endl;

    // 3. Find and print the length
    cout << "word has:              " << word.length() << " characters" << endl;

    // 4. Replace 2 characters starting from the 3rd character (Index 2)
    // We create a copy so we don't mess up the next step
    string replacedWord = word;
    if (replacedWord.length() >= 4) {
        replacedWord.replace(2, 2, "-- $ --");
    }
    cout << "Replace word:          " << replacedWord << endl;

    // 5. Remove 3 characters from the end
    string shortenedWord = word;
    if (shortenedWord.length() >= 3) {
        shortenedWord.erase(shortenedWord.length() - 3);
    } else {
        shortenedWord = ""; // Clear if word is shorter than 3
    }
    cout << "Remove end characters: " << shortenedWord << endl;

    return 0;
}

// --- AI Assistant Used: Google Gemini ---
// Q1) Was the code correct? (Yes/No and explain your answer)
// The code was correct as it provided working code for all the exercises in lab 4.

// Q2) Was it readable and properly commented? explain your answer
// While it used more lines and if else statements, the code was still readable. The code also comments where needed.

// Q3) Were you able to explain each line of code? explain your answer
// Since the code is readable to me I would also be able to explain it.

// Q4) Did it use the same programming concepts we learned in class? Explain which concepts were used and which ones were unfamiliar.
// It used some similar concepts such as "cout" and "cin" statements. Unfamiliar concepts used were "if else" statements in C++.

// Q5) Terminal Output: (Paste the output of your program here)
// Enter a word: Million
// 2nd character:         i
// word has:              7 characters
// Replace word:          Mi-- $ --ion
// Remove end characters: Mill