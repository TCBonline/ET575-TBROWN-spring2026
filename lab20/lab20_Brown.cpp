/*
Tristan Brown
April 27, 2026
lab 20, parsing and file handeling
*/

#include <iostream>
#include "lab20_functions_Brown.cpp"

using namespace std;

int main(){
    cout<<"----- Example 1: collect a number -----"<<endl;
    int n = collectnum();
    cout<<"Collected number = "<<n<<endl;

    cout<<"\n----- Example 2: reading file -----"<<endl;
    readfile();

    cout<<"\n----- Example 3: writing file -----"<<endl;
    writefile("intro.txt");

    cout<<"\n----- Example 4: append data -----"<<endl;
    appendmsg("samplefile.txt", "Tristan Brown");


    return 0;
}