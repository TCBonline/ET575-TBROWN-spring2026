/*
Tristan Brown
lab 8, 
Feb 11, 2026
*/

#include <iostream>

using namespace std;

int main(){
    cout<<"------ example 1: switch-case ------"<<endl;
    // use switch-case statement to ask ther user to select a dayoff
    // declare variables
    int day;
    string dayoff = " ";
    // prompt message
    cout<<"Select a dayoff"<<endl;
    cout<<"1 for Monday"<<endl;
    cout<<"2 for Tuesday"<<endl;
    cout<<"3 for Wednesday"<<endl;
    cout<<"4 for Thursday"<<endl;
    cout<<"5 for Friday"<<endl;
    // collect the dayoff
    cin>>day;

    // switch-case statement
    switch(day)
    {
    case 1:
        dayoff = "Monday";
        break;
    case 2:
        dayoff = "Tuesday";
        break;
    case 3:
        dayoff = "Wednesday";
        break;
    case 4:
        dayoff = "Thrusday";
        break;
    case 5:
        dayoff = "Friday";
        break;
    default:
        dayoff = "Invalid";
        break;
    }

    // prompt result
    cout<<"Your dayoff is "<<dayoff<<endl;

    cout<<"\n------ example 2: switch-case ------"<<endl;
    // use switch-case statement to pick a gender
    // declare variables
    char gender;
    // prompt message
    cout<<"Select gender: "<<endl;
    cout<<"f for female"<<endl;
    cout<<"m for male"<<endl;
    cout<<"o for other"<<endl;
    // collect gender
    cin>>gender;

    // switch-case statement
    switch(gender)
    {
        case'f':
        case'F':
            cout<<"Gender = Female"<<endl; 
            break;
        case'm':
        case'M':
            cout<<"Gender = Male"<<endl;
            break;
        case'o':
        case'O':
            cout<<"Gender = Other"<<endl;
            break;
        default:
            cout<<"Gender = Undefined"<<endl;
            break;
    }

    cout<<"\n----- EXERCISE -----"<<endl;
    // Prompt the user to enter the first number.
    // Prompt the user to enter the second number.
    int num1;
    int num2;

    cout<<"Enter two numbers."<<endl;
    cin>>num1>>num2;

    // Ask the user to choose an operation by entering one of the following characters:
    // + for addition
    // - for subtraction
    // * for multiplication
    // / for division
    // % for modulus, which returns the remainder of the division
    // q to quit the program
    char op_op;

    cout<<"Choose an operation (+, -, *, /, %, q to quit)"<<endl;
    cin>>op_op;

    // Use a switch-case statement to perform the corresponding operation:
    // If + is selected, add the two numbers.
    // If - is selected, subtract the second number from the first.
    // If * is selected, multiply the two numbers.
    // If / is selected, divide the first number by the second (ensure the second number is not zero).
    // If q is selected, exit the program.
    // If % for modulus, which returns the remainder of the division.

    switch(op_op)
    {
        case'+':
            cout<<"Result: "<<num1<<" + "<<num2<<" = "<<num1 + num2<<endl;
            break;
        case'-':
            cout<<"Result: "<<num1<<" - "<<num2<<" = "<<num1 - num2<<endl;
            break;
        case'*':
            cout<<"Result: "<<num1<<" * "<<num2<<" = "<<num1 * num2<<endl;
            break;
        case'/':
            if(num2 == 0){
                cout<<"Divsion by zero is unidentified."<<endl;
            }
            else{
                cout<<"Result: "<<num1<<" * "<<num2<<" = "<<num1 / num2<<endl;
            }
            break;
        case'%':
            cout<<"Result: "<<num1<<" % "<<num2<<" = "<<num1 % num2<<endl;
            break;
        case'q':
        case'Q':
            cout<<"Quit"<<endl;
            break;
        default:
            cout<<"Invalid Character"<<endl;
            break;
         
    }

    return 0;
}

