/*
Tristan Brown
Homework 4 - loops
*/

#include <iostream>

using namespace std;

int main(){
    cout<<"\n----- Program 1 -----"<<endl;
    /*
    Write a C++ program that will ask the user to enter a number greater than or equal to 10. If the
    user enters a number that is less than 10, the program will display the same message asking the
    user to enter a number again. For this question, apply do-while loop. Once a right number is
    entered, the program will print the number as:

    ____ is a valid number!

    Hint: you might use if statement nested in the do-while loop. 
    */
   int Q1numb;
       cout<<"Enter a number greater than or equal to 10: ";
       cin>>Q1numb;

   do{
        if(Q1numb < 10){
            cout<<Q1numb<<" is invalid. Please enter a number greater than 10: ";
            cin>>Q1numb;
            if(Q1numb < 10){
                continue;
            }
            else{
                cout<<Q1numb<<" is a valid number!"<<endl;
                break;  
            }
        }

        else{
            cout<<Q1numb<<" is a valid number!"<<endl;
            break;
        }
   }while(Q1numb < 10);

    cout<<"\n----- Program 2 -----"<<endl;
   /*
   Ask the user to enter two numbers and then print all numbers from the minimum to the
   maximum number. You must while loop for this program. Hint: you can use a if-else statement
   to control the minimum and the maximum number.
   */
    int num1, num2, min, max;

    cout<<"Enter number 1: ";
    cin>>num1;
    cout<<"Enter number 2: ";
    cin>>num2;

    if(num1 > num2){
        max = num1;
        min = num2;
    }
    else{
        max = num2;
        min = num1;
    }

    cout<<"RESULT = ";
    while(min <= max){
        cout<<min++<<"\t";
    }
    cout<<endl;

    cout<<"\n----- Program 3 -----"<<endl;
    /*
    Create a C++ program that will print the letter r with # sign:
    */

    const int GRID = 11;
    for(int rows2 = 1; rows2 <= GRID; rows2++){
        for(int col2 = 1; col2 <= GRID; col2++){
            if((col2 >= 4 && col2 <= 5 && rows2 >= 3 && rows2 <= 10) || (col2 >= 5 && col2 <= 8 && rows2 >= 4 && rows2 <= 5))
                cout<<" # ";
            else
                cout<<" . ";
        }
        cout<<endl;
    }



    return 0;
}