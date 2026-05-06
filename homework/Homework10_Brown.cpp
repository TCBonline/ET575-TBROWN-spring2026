/*
Tristan Brown
Homework 10 - file streaming
*/
#include <iostream>
#include "Homework10_functions_Brown.cpp" 

using namespace std;

int main(){
    // 1.
    readcontents("Remembering_Earth.txt");

    // 2.
    count("wordcounts.txt", "Remembering_Earth.txt", "Tristan Brown");

    // 3.
    countEarth("wordcounts.txt", "Remembering_Earth.txt");

    return 0;
}