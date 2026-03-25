/*
Tristan Brown
March 16, 2026
lab 13, introducton to function
*/

#include <iostream>
using namespace std;

//example 1: void function. void functions are functions that don't return any value
void printHello(){
    cout<<"Hello World"<<endl;
    return; //the return function line is optional for a void function
}

// example 2: function that passes values
void greeting(string username){
    cout<<"Welcome to function "<<username<<endl;
}

// example 3: function that passes and returns a value
// function that passes a number and return the triple of the number
int triplenumber(int number){
    return number * 3;
}

// exmaple 4: function to check if a number is positive, negative, or zero
// this function returns a string
string checknumber(int number){
    if(number > 0){
        return "positive";
    }
    else if(number < 0){
        return "negative";
    }
    else{
        return "zero";
    }
}

// example 5: composition function
// function 1: to validate that a number is positive
// function only returns a positive number
int validatepositive(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    // recollect the number if the number is not positive
    while(n <= 0){
        cout<<"Enter a positive number: ";
        cin>>n;
    }

    return n;
}

// function 2: function to calculate and return
int arearectangle(int length, int width){
    return length * width;
}

// function 3: print results
void printarea(int length, int width, int area){
    cout<<"The area of a rectangle with "<<length<<" and "<<width<<" is "<<area<<endl;
}
