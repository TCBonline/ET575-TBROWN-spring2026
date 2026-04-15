/*
Tristan Brown
lab 14, functions
March 9, 2026
*/

#include <iostream>

using namespace std;

// example 1: function calling a function
int multiply(int a, int b){
    return a * b;
}

int calculatedb(int x, int y){
    // functions calling functions
    return 2 * multiply(x, y);
}

// example 2: recursive functions
void cheers(int n){
    // base case
    if (n == 1){
        cout<<"STOP"<<endl;
    }
    // recursive case
    else{
        cout<<(n * 2)<<endl;
        cheers(n - 1);
    }
}
/*  TABLE OF ANALYSIS
function    |           |               |   else
iteration   |   int n   |   if(n == 1)  |   cout<<(n * 2)   |   cheer(n - 1)
-------------------------------------------------------------------------------------------
    1       |   n = 4   |   false       |   cout(4 * 2) = 8 |   cheer(4 - 1) = 3
    2       |   n = 3   |   false       |   cout(3 * 2) = 6 |   cheer(3 - 1) = 2
    3       |   n = 2   |   false       |   cout(2 * 2) = 4 |   cheer(2 - 1) = 1
    4       |   n = 1   |   true,    cout<<STOP
*/

// example 3: linear recursive function
int linearfunction(int m){
    if (m > 10){
        return -6;
    }
    else{
        return (linearfunction(m + 2) * (m - 4));
    }
}

/*
function
iteration   |   int m   |   if(m > 10)  |   else(return (linearfunction(m + 2) * (m - 4));)
-------------------------------------------------------------------------------------------------
    1       |   m = 3   |   false       |   return (linearfunction(3 + 2 =5) * (3 - 4 = -1)
    2       |   m = 5   |   false       |   return (linearfunction(5 + 2 = 7) * (5 - 4 = 1) * -1
    3       |   m = 7   |   false       |   return (linearfunction(7 + 2 = 9) * (7 - 4 = 3) * 1 * -1
    4       |   m = 9   |   false       |   return (linearfunction(9 + 2 = 11) * (9 - 4 = 5) 3 * 1 * -1
    5       |   m = 11  |   true,    return -6

    final result = -6 * 5 * 3 * 1 * -1 = 90

*/

// example 4: built-in functions
// program to calculate the hypotenuse of a right triangle
// function collects a number and returns the number if it's positive
int collectnumber(){
    int n;
    cout<<"Enter a positive number: ";
    cin>>n;

    // recursive function to validate if n is positive
    if (n <= 0){
        cout<<"Error! ";
        return collectnumber();
    }
    else{
        return n;
    }
}
#include <cmath>

// calculate and return the hypotenuse
float hypotenuse(int side1, int side2){
    return sqrt(pow(side1, 2) + pow(side2, 2));
}

// print result
void printresult(int side1, int side2, float h){
    cout<<"The hypotenuse of triangle with sides "<<side1<<" and "<<side2<<" is = "<<h<<endl;
}

// exercise functions
/*
one function to collect and return a number greater than zero. This function must use loop to validate the number.
one function to calculate and return the distance of two points. The formula to calculate the distance of two points is:
distance
= sqrt((x2 − x1)^2 + (y2 - y1)^2)

one function to print the result as 'The distance of points(___ ___) and (___, ___) is _____ __, where the first blank is x1 value, second blank is y1, the third blank is x2, the fourth blank is y2, and the fifth blank is the calculated distance.
*/

int collectnumber2(){
    int m;
    cout<<"Enter a positive number: ";
    cin>>m;

    // recursive function to validate if n is positive
    if (m <= 0){
        cout<<"Error! ";
        return collectnumber2();
    }
    else{
        return m;
    }
}

float distance(int x1, int y1, int x2, int y2){
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

void print_dist(int x1, int y1, int x2, int y2, float d){
    cout<<"The distance of points ("<<x1<<","<<y1<<") and ("<<x2<<","<<y2<<") is "<<d<<endl;
}