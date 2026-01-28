/*
student's name
Jan 26, 2026
lab 1 isstream
*/

// header library
#include<iostream>

using namespace std;

// main function is the executale part of your c++ file
int main(){
    cout<<"\nExample 1: output stream, cout "<<endl<<endl;
    cout<<"\tWelcome to C++"<<endl;

    cout<<"\nExample 2: declaring variables"<<endl;
    // declaring variables
    int number;
    string username;
    char symbol;

    // assign value to a variable
    username = "peterpan123";
    symbol = '%';
    number = 9;

    // print values in a variable
    cout<<"Given username = "<<username<<endl;
    cout<<"Given number = "<<number<<endl;
    cout<<"Given symbol = "<<symbol<<endl;

    cout<<"\nExample 3: console in, cin"<<endl;
    // declare variables
    float n = 3.5;
    string lastname;
    
    // collect lastname from user (Terminal)
    cout<<"Enter a last name: ";
    cin>>lastname;

    // print results
    cout<<"Welcome to C++ "<<lastname<<" Your rate is "<<n<<endl;
    return 0;
}