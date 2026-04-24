/*
Tristan Brown
April 22, 2026
lab 19, 2D arrays
*/

const int COLSIZE = 5;
const int COLSIZE2 = 4;
#include <iostream>
#include "lab19_functions_Brown.cpp"

using namespace std;

int main(){
    cout<<"----- Example 1: 2D array -----"<<endl;
    int rowsize = 4;
    int a[rowsize][COLSIZE] = {
        {4, 8, 12},
        {1, -8, 3, 5, 7},
        {-6, 2, 9}
    };

    print2D(a, rowsize);

    cout<<"\n----- Example 2: sum of all positive even numbers -----"<<endl;
    cout<<(sumevenpositive(a,rowsize))<<endl;

    cout<<"\n----- EXERCISE -----"<<endl;
    int rowEX = 3;
    int b[rowEX][COLSIZE2];
    char choice = 'y';
    do{
        populate(b, rowEX);
        printvaluearray(b, rowEX);
        cout<<endl;
        cout<<"Average = "<<average(b, rowEX)<<endl;

    // At the end, the program will ask if the user wants another run. For each run, there will be a new set of random numbers.
        cout<<"Another run? (y/n) ";
        cin>>choice;
        cout<<endl;
    }while(choice == 'y' || choice == 'Y');

    return 0;
}