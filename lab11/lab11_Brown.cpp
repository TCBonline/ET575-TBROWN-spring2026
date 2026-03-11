/*
Tristan Brown
lab 11, while loop
March 9, 2026
*/

#include <iostream>

using namespace std;

int main(){
    cout<<"\n ----- example 1: while loop as a counter -----"<<endl;
    // while loop to print 1 to 5, step of 1 ---> 1,2,3,4,5
    // step 1) initial value for the loop
    int i = 1;
    // step 2) loop condition i<=5
    while(i<=5){
        cout<<i<<"\t";
    // step 3) update loop value
        i++;
    }

    cout<<"\n ----- example 2: while loop as decrement a counter -----"<<endl;
    // print from 3 to 0,step of -1 ---> 3,2,1,0
    int m = 3;
    while(m>=0){
        cout<<m<<"\t";
        m--;
    }

    cout<<"\n ----- example 3: while loop as decrement a counter -----"<<endl;
    m = 3;
    while(m-- >=0){
        cout<<m<<"\t";
    }

    cout<<"\n ----- example 4: while loop as decrement a counter -----"<<endl;
    m = 3;
    while(--m >=0){
        cout<<m<<"\t";
    }

    cout<<"\n ----- example 5: while loop as decrement a counter -----"<<endl;
    // while loop to validate if a number is not between 10 and 20
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    // while loop to recollect the number again
    while(!(n > 10 && n <= 20)){
        cout<<"Enter a number between 10 and 20: ";
        cin>>n;
    }

    // printed result
    cout<<"Entered number = "<<n<<endl;

    cout<<"\n ----- example 6: do-while loop to validate an input -----"<<endl;
    // check if a number is even or odd
    // use loop to check if the user wants to check another number
    char choice = 'y';
    do{
        cout<<"Enter a number: ";
        cin>>n;
        if(n % 2 == 0){
            cout<<n<<" is EVEN!"<<endl;
        }

        else{
            cout<<n<<" is ODD!"<<endl;
        }
        cout<<"Do you want another run? ";
        cin>>choice;
    }while(choice == 'y' || choice == 'Y');

    cout<<"\n ----- example 7: do-while loop to validate an input -----"<<endl;
    int number;
    do{
        cout<<"Enter a postive number: ";
        cin>>number;
    }while(number <= 0);

    cout<<"\n ----- example 8: break statement -----"<<endl;
    // run a program to collect and add four consecutive negative numbers. The program will stop if a positive number or a zero is entered.
    int loopcounter = 1;
    int sumnegative = 0;
    int num;

    do{
        cout<<"Enter a negative number: ";
        cin>>num;
        if(num < 0){
            sumnegative += num;
            loopcounter ++;
        }
        else{
            cout<<"A non-negative number was entered! Loop will be terminated!"<<endl;
            break;
        }
    }while(loopcounter <= 4);

    // print result
    cout<<"The total sum is = "<<sumnegative<<endl;

    cout<<"\n ----- example 9: break statement -----"<<endl;
    // withdraw from and account. Original balance $1000
    // if the amount is greater than the balance or negative, the program will recollect another amount
    int balance = 1000;
    int w = 0;

    while(true){
        cout<<"How much do you want to withdraw? ";
        cin>>w;
        if(w < 0 || w > balance){
            cout<<"Can't withdraw $"<<w<<". Enter another amount or press 0 to exit. ";
            cin>>w;
            if(w == 0){
                break;
            }
        }
        else{
            balance -= w;
            break;
        }
    }
    // print result
    cout<<"The balance is $"<<balance<<endl;

    cout<<"\n ----- EXCERCISE -----"<<endl;
    /*
    Write a program that repeatedly asks the user to enter a number. The program should calculate the sum of the digits of that integer and display the result.
    It should continue asking for input until the user enters 0, zero, to stop the program.

    Requirements:

    Must use ‘while’ or ‘do-while’ loop.
    The program prompts the user to enter a number.
    Inside the loop block, it calculates the sum of the numbers by adding each number entered by the user.
    The loop will stop if the user enters 0, zero.
    Print the result after the loop. The result message should be as ‘The total sum is ____’
    */
   int enter;
   int sum_digits = 0;

    while(true){
        cout<<"Enter a number or press 0 to quit: ";
        cin>>enter;
        if(enter == 0){
            break;
        }
        else{
            sum_digits += enter;
        }
    }
    cout<<"The total sum is "<<sum_digits<<endl;


    return 0;
}