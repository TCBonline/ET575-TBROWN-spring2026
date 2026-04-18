/*
Tristan Brown
lab 14, functions
March 9, 2026
*/

#include <iostream>
#include "lab14_functions_Brown.cpp"

using namespace std;

int main(){
    cout<<"\n----- example 1: functions calling functions -----"<<endl;
    int calculate = calculatedb(2, 3);
    cout<<calculate<<endl;

    cout<<"\n----- example 2: recursive functions -----"<<endl;
    cheers(4);

    cout<<"\n----- example 3: recursive functions -----"<<endl;
    int n = linearfunction(3);
    cout<<"Final Result is = "<<n<<endl;

    cout<<"\n----- example 4: built-in functions -----"<<endl;
    int side1 = collectnumber();
    int side2 = collectnumber();
    float h = hypotenuse(side1, side2);
    printresult(side1, side2, h);

    cout<<"\n----- EXERCISE -----"<<endl;
    int numX1 = collectnumber();
    int numY1 = collectnumber();
    int numX2 = collectnumber();
    int numY2 = collectnumber();
    float d = distance(numX1, numY1, numX2, numY2);
    print_dist(numX1, numY1, numX2, numY2, d);
    
    return 0;
}