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

    cout<<"\n----- EXERCISE -----"<<endl;
    createfile("data_user.txt");

    string first, last;
    cout<<"\nEnter your first name: ";
    cin>>first;
    cout<<"Enter your last name: ";
    cin>>last;

    first.append(" ");
    first.append(last);
    append_newmsg("data_user.txt", first);

    read_newfile("data_user.txt");

    return 0;
}