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

    cout<<"\nDescription lab exercise 1: nested conditional statement";
    // Prompt the user to enter their car budget.
    int budget;
    cout<<"\nEnter car budget: "<<endl;
    cin>>budget;

    // Classify the car category according to the Car Price column.
    if(budget < 0){
        cout<<"Invalid budget!"<<endl;
    }
    else if(budget > 0 && budget < 10000){
        cout<<"Keep saving!"<<endl;
    }
    else if(budget >= 10000 && budget < 150000){
        cout<<"Congratulations"<<endl;
        if(budget >= 10000 && budget < 20000)
            cout<<"You can afford an Economic Car = Compact Car"<<endl;
        else if(budget >= 20000 && budget < 30000)
            cout<<"You can afford an Economic Car = Mid-size Car"<<endl;
        else if(budget >= 30000 && budget < 50000)
            cout<<"You can afford a Standard Car = Sudan"<<endl;
        else if(budget >= 50000 && budget < 70000)
            cout<<"You can afford a Standard Car = Luxury Sudan"<<endl;
        else if(budget >= 70000 && budget < 100000)
            cout<<"You can afford a Performance-oriented Car = Sports Car"<<endl;
        else if(budget >= 100000 && budget < 150000)
            cout<<"You can afford a Performance-oriented Car = Supercar"<<endl;   
    }
    else if(budget > 150000){
        cout<<"Congratulations"<<endl;
        cout<<"You can afford High-end luxury cars = Maserati or Rolls-Royce?"<<endl;   
    }

    return 0;
}