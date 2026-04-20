/*
Tristan Brown
April 13, 2026
lab 15, random numbers
*/

#include <iostream>
#include "lab16_functions_Brown.cpp"

using namespace std;

int main(){
    cout<<"----- Example 1: pointer and reference -----"<<endl;
    pointerreference();

    cout<<"\n----- Example 2: passing pointer and reference to a function -----"<<endl;
    string something = "Hello World!";
    printvalue(something);
    printaddress(&something);
    printreference(something);

    cout<<"\n----- Example 3: intro to array -----"<<endl;
    introarray();

    cout<<"\n----- Example 4: length of an array -----"<<endl;
    lengtharray();

    cout<<"\n----- Example 5: loop through an array -----"<<endl;
    looparray();

    cout<<"\n----- Example 6: pass an array to a function -----"<<endl;
    const int s = 3;
    int numbers[s];

    // fill up the array with data
    fillup(s, numbers);

    // print the values in an array
    printarray(s, numbers);

    // print the max value
    int m = maxnumber(s, numbers);
    cout<<"The maximum number is "<<m<<endl;

    cout<<"\n----- EXERCISE -----"<<endl;
    min_number();
    return 0;
}