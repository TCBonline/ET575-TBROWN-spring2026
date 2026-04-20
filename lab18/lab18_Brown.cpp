/*
Tristan Brown
April 20, 2026
lab 18, array application
*/

#include <iostream>
#include "lab18_functions_Brown.cpp"

using namespace std;

int main(){
    cout<<"----- Example 1: search function -----"<<endl;
    // declare the array size
    const int ARRAYSIZE = 5;

    // declare the array
    int a[ARRAYSIZE];

    // declare the variable to save array size if there is less than five consecutive positive numbers
    int listsize;

    // declare the variable to save target
    int searchnumber = 20;

    // call function fillaray
    fillarray(a, listsize, ARRAYSIZE);

    // testing listsize
    cout<<listsize<<endl;

    // call function 2
    printelement(a, listsize);

    // call function 3
    int foundindex = search(a, listsize, searchnumber);
    cout<<"Test search index    "<<foundindex<<endl;


    return 0;
}