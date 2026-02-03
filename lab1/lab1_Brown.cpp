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

    cout<<"\nLab assignment 1: introduction to iostream and numerical variables"<<endl;
    // Declare 4 variables
    string country;
    char gender;
    int zipcode;
    float rate;

    cout<<"Type a country = "<<endl;
    cin>>country;
    cout<<"Type a gender (f for female, m for male, and o for other) = "<<endl;
    cin>>gender;
    cout<<"Type a zip code = "<<endl;
    cin>>zipcode;
    cout<<"Type a tax rate = "<<endl;
    cin>>rate;

    // print results
    cout<<"Entered Country: "<<"\t"<<country<<endl;
    cout<<"Selected Gender: "<<"\t"<<gender<<endl;
    cout<<"Zip Code: "<<"\t"<<zipcode<<endl;
    cout<<"Tax Rate: "<<"\t"<<rate<<endl;

    return 0;
}

