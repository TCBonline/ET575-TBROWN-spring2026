/* Homework 2: Branching 

Tristan Brown

*/ 

#include<iostream>
#include <cmath>

using namespace std;

int main(){
    cout<<"Program 1: age eligibility"<<endl;
    // Write a C++ program that prompts the user to enter their age and determines their eligibility for various activities based on the following criteria: 
    // Under 13 years: Not eligible for any activities. 
    // Ages 13 to 17: Eligible for youth activities. 
    // Ages 18 to 64: Eligible for adult activities. 
    // 65 years and older: Eligible for senior activities. 
    // Additionally, your program should: 
    // Check if the user’s age is negative or unrealistic (greater than 120). If so, print "Invalid age. Please enter a valid age."

    int age;
    cout<<"Enter your age: "<<endl;
    cin>>age;

    if(age <= 0){
        cout<<"Invalid age. Please enter a valid age."<<endl;
    }
    else if(age > 0 && age <= 120){
        if(age < 13)
            cout<<"Not eligible for any activities."<<endl;
        else if(age >= 13 && age < 18)
            cout<<"Eligible for youth activities."<<endl;
        else if(age >= 18 && age < 65)
            cout<<"Eligible for adult activities."<<endl;
        else if(age >= 65 && age <= 120)
            cout<<"Eligible for senior activities."<<endl;
    }
    else if(age > 120){
        cout<<"Invalid age. Please enter a valid age."<<endl;
    }

    cout<<"\nProgram 2: nested conditional statement"<<endl;
    int num1;
    int num2;
    cout<<"Enter two numbers."<<endl;
    cin>>num1>>num2;

    int sum1 = num1 + num2;

    if(sum1 == 0){
        cout<<"False alarm! The sum is "<<sum1<<endl;
    }
    else if(sum1 >= 1 && sum1 <= 100){
        if(sum1 % 5 == 0)
            cout<<sum1<<" is a pentagon."<<endl;
        else if(sum1 % 2 != 0)
            cout<<sum1<<" is an odd guess"<<endl;
    }
    else if(sum1 >= 101 && sum1 <= 200){
        cout<<"The new lucky number is "<<sum1<<endl;
    }
    else if(sum1 >= 201 && sum1 <= 999){
        cout<<sum1<<" is a dreaming number"<<endl;
    }
    else if(sum1 >= 1000){
        if(sum1 % 2 == 0 && sum1 < 2000)
            cout<<sum1<<" approaches to the infinite evenly!"<<endl;
        else if(sum1 >= 2000)
            cout<<sum1<<" approaches to the infinite and beyond!"<<endl;
    }

    cout<<"\nProgram 3: temperature converter"<<endl;
    // Display a menu with the following options: 
    // Celsius to Fahrenheit
    // Fahrenheit to Celsius
    // Kelvin to Celsius
    // Kelvin to Fahrenheit
    // Exit
    cout<<"1. Celsius to Fahrenheit"<<endl;
    cout<<"2. Fahrenheit to Celsius"<<endl;
    cout<<"3. Kelvin to Celsius"<<endl;
    cout<<"4. Kelvin to Fahrenheit"<<endl;
    cout<<"5. Exit"<<endl;
    
    // Prompt the user to select an option from 1 to 5 with the above description.
    int op_op;
    cout<<"\nSelect an option from 1 to 5: ";
    cin>>op_op;

    // If the user selects a conversion, prompt a next message asking to enter the temperature to be converted.
    // Must use 'switch-case’ statements to implement the logic for the conversion option from 1 to 5.
    // Perform the conversion and display the result.  
    // A template to display the result message, for example from Celsius to Fahrenheit, should be as:
    // ___ Celsius is equal to ____ Fahrenheit 
    // Handle invalid input appropriately. 

    // The conversion formulas are: 
    // From Celsius to Fahrenheit = Celsius *(9/5) + 32 
    // From Fahrenheit to Celsius = (Fahrenheit – 32) *(5/9) 
    // From Kelvin to Celsius = Kelvin – 273.15 
    // From Kelvin to Fahrenheit = (Kelvin – 273.15)* (9/5) + 32 
    float conv;

    switch(op_op)
    {
    case 1:{
        cout<<"Enter the temperature to be converted:"<<endl;
        cin>>conv;
        float conv1 = conv * (1.8) + 32;
        cout<<conv<<" Celsius is equal to "<<conv1<<" Fahrenheit"<<endl;
        break;
    }
    case 2:{
        cout<<"Enter the temperature to be converted:"<<endl;
        cin>>conv;
        float conv2 = (conv - 32) * (0.55555555555);
        cout<<conv<<" Fahrenheit is equal to "<<conv2<<" Celsius"<<endl;
        break;
    }
    case 3:{
        cout<<"Enter the temperature to be converted:"<<endl;
        cin>>conv;
        float conv3 = conv - 273.15;
        cout<<conv<<" Kelvin is equal to "<<conv3<<" Celsius"<<endl;
        break;
    }
    case 4:{
        cout<<"Enter the temperature to be converted:"<<endl;
        cin>>conv;
        float conv4 = (conv - 273.15) * (1.8) + 32;
        cout<<conv<<" Kelvin is equal to "<<conv4<<" Fahrenheit"<<endl;
        break;
    }
    case 5:
        cout<<"Exit"<<endl;
        break;
    default:
        cout<<"Invalid input!!"<<endl;
        break;
    }

    return 0;
}