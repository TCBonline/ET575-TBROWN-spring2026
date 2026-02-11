/*
Tristan Brown
lab 7, 
Feb 9, 2026
*/

#include <iostream>

using namespace std;

int main(){
    cout<<"\n---- example 1: nested conditional ----"<<endl;
    // use nested conditional statement to check if number  is positive (even or odd), or negative (even or odd)
    int number = 9;

    if(number > 0){
        if(number % 2 == 0)
        cout<<number<<" is positive and even"<<endl;
        else
            cout<<number<<" is positive and odd"<<endl;
    }
    else if(number < 0){
        if(number % 2 == 0)
            cout<<number<<" is negative and even"<<endl;
        else
            cout<<number<<" is negative and odd"<<endl;

    }

    cout<<"\n---- example 2: nested conditional ----"<<endl;
    // sort three numbers from the highest to lowest number
    // declare variables
    int num1, num2, num3;
    //collect values
    cout<<"Enter three numbers: "<<endl;
    cin>>num1>>num2>>num3;
    // conditional statement
    if(num1 > num2 && num1 > num3){
        cout<<num1<<" is the highest number"<<endl;
        if(num2 > num3)
            cout<<num1<<"\t"<<num2<<"\t"<<num3<<endl;
        else
            cout<<num1<<"\t"<<num3<<"\t"<<num2<<endl;
    }
    else if(num2 > num1 && num2 > num3){
        cout<<num2<<" is the highest number"<<endl;
        if(num1 > num3)
            cout<<num2<<"\t"<<num1<<"\t"<<num3<<endl;
        else
            cout<<num2<<"\t"<<num3<<"\t"<<num1<<endl;
    }
    else{
        cout<<num3<<" is the highest number"<<endl;
        if(num1 > num2)
            cout<<num3<<"\t"<<num1<<"\t"<<num2<<endl;
        else
            cout<<num3<<"\t"<<num2<<"\t"<<num1<<endl;
    }

    cout<<"\n---- example 3: nested conditional ----"<<endl;
    // use operands to check if a number is even or odd
    /*
    if(x % 2 == 0)
        cout<<"Even"<<endl;
    else
        cout<<"Odd"<<endl;
    */

    int x = 5;
    cout<<"The number is "<<(x % 2 == 0 ? "Even" : "Odd")<<endl;

        

    return 0;
}