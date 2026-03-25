/*
Tristan Brown
March 23, 2026
lab 15, random numbers
*/

#include <iostream>
#include "lab15_function_Brown.cpp"

using namespace std;

int main(){
    srand(time(0));

    cout<<"----- example 1: random number -----"<<endl;
    cout<<randomnumber()<<endl;

    cout<<"\n----- example 2: random number between 0 and 9 -----"<<endl;
    cout<<random0_9()<<endl;

    cout<<"\n----- example 3: random number between 5 and 12 -----"<<endl;
    cout<<random5_12()<<endl;

    cout<<"\n----- example 4: matching numbers -----"<<endl;
    int roll1 = rolldice();
    int roll2 = rolldice();
    bool resultmatch = matchdices(roll1, roll2);
    
    printdices(roll1, roll2, resultmatch);

    cout<<"\n----- EXERCISE -----"<<endl;
    // write three functions to simulate the classic “snake eyes” game using a pair of dice. The goal is to roll two dice, and if both dice land on 1, it is called “snake eyes”.

    // Function 1: write a function that randomly generated and returns a number between 1 and 6 (simulating the roll of a die). The function should generate and return a random integer from 1 to 6.

    // Function 2: write a function that takes two integers (representing two dice rolls) as arguments and checks if both numbers are 1 (snake eyes). If both numbers are 1, the function should return ‘true’. Otherwise, it should return ‘false’.
    int ex1 = rolldice();
    int ex2 = rolldice();
    bool snakes = snake_eyes(ex1, ex2);

    // Function 3: write a function that prints the result based on the outcome of the game. If the result is ‘true’, print “congrats! You got a snake eyes”. Otherwise, it prints “Better luck next time”
    cout<<"Roll 1 = "<<ex1<<endl;
    cout<<"Roll 2 = "<<ex2<<endl;
    printsnake(ex1, ex2, snakes);

    return 0;
}