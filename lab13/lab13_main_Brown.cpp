/*
Tristan Brown
March 16, 2025
lab, 13 introducton to function
*/

#include <iostream>
#include "lab_13_function_Brown.cpp"

using namespace std;

int main(){
    cout<<"\n----- example 1: void function -----"<<endl;
    printHello();  
    printHello(); 

    cout<<"\n----- example 2: passes values -----"<<endl;
    greeting("Peter");
    greeting("Annie");

    cout<<"\n----- example 3: triple a number -----"<<endl;
    int n = triplenumber(3);
    cout<<n<<endl;
    cout<<triplenumber(5)<<endl;

    cout<<"\n----- example 4: check a number -----"<<endl;
    cout<<checknumber(-10)<<endl;
    cout<<checknumber(0)<<endl;
    cout<<checknumber(5)<<endl;

    cout<<"\n----- example 5: function composition -----"<<endl;
    // int num = validatepositive();
    // cout<<num;

    int length = validatepositive();
    int width = validatepositive();

    int area_rec = arearectangle(length, width);
    cout<<area_rec;


    return 0;
}