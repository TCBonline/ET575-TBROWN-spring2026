/*
Tristan Brown
March 2, 2026
lab 9
*/

#include<iostream>

using namespace std;

int main(){
    cout<<"\n----- example 1: for loop basics -----"<<endl;

    for(int action = 0; action < 5; action++){
        cout<<"Hello "<<action<<endl;
    }

    /* loop analysis table
    loop iteration | action | action<5 | cout<<"Hello "<<action | action++
    -------------------------------------------------------------------------------------------
    |   1          |  0     |  true    |  Hello 0               | action = 0 + 1 = 1
    |   2          |  1     |  true    |  Hello 1               | action = 1 + 1 = 2
    |   3          |  2     |  true    |  Hello 2               | action = 2 + 1 = 3
    |   4          |  3     |  true    |  Hello 3               | action = 3 + 1 = 4
    |   5          |  4     |  true    |  Hello 4               | action = 4 + 1 = 5
    |   6          |  5     |  false (stop the loop) 
    */

    cout<<"\n----- example 2: for loop as in incremental counter -----"<<endl;
    // counter from 1 to 10 (inclusive) with step of 1 --> 1,2,3,4,5,6,7,8,9,10
    for(int x = 1; x <= 10; x++){
        cout<<x<<" \t ";
    }

    cout<<"\n----- example 3: for loop as in decremental counter -----"<<endl;
    // counter from 2 to -5 (inclusive) with step of 1 --> 2,1,0,-1,-2,-3,-4,-5
    for(int n = 2; n >= -5; n--){
        cout<<n<<" \t ";
    }

    cout<<"\n----- example 4: for loop as in incremental counter with different steps -----"<<endl;
    // counter from 1 to 20 (exclusive) in a step of 3 --> 1,4,7,10,13,16,19
    for(int m = 1; m < 20; m += 3){
        cout<<m<<" \t ";
    }
    cout<<endl;

    cout<<"\n----- example 4: nested conditional statement within the loop -----"<<endl;
    // counter from -10 to 10, step of 3, count how many numbers are multiplied of 5 within the counter
    int counter_5 = 0;
    for(int x = -10; x <= 10; x += 3){
        cout<<x<<" \t ";
        if(x % 5 == 0 && x != 0){
            counter_5++;
        }
    }
    cout<<endl;
    cout<<"There is/are "<<counter_5<<" number/s multiplied by 5"<<endl;
    
    cout<<"\n----- EXERCISE 1 -----"<<endl;
    /*
    Exercise 1) create a for loop that decrement from 21 to -21, inclusive, with a decrement step of 5 at each iteration.
    Also count the number of times that the loop counter is multiplied of 2 
    */
    int counter_2;
    for(int ex1 = 21; ex1 >= -21; ex1 -= 5){
        cout<<ex1<<" \t ";
        if(ex1 % 2 == 0 && ex1 != 0){
            counter_2++;
        }
    }
    cout<<endl;
    cout<<"There is/are "<<counter_2<<" number/s multiplied by 2"<<endl;

    cout<<"\n----- EXERCISE 2 -----"<<endl;
    /*
    Exercise 2) create a program that will ask the user to input the start (initial value of the counter).
    After it, create a for loop that starts with the number entered by the user and counts up to 30 with
    an increment of 4 at each iteration. 
    */
   int ex2;
   cout<<"Enter an initial number: ";
   cin>>ex2;
   if(ex2 >= 30){
    cout<<"This number is large enough!!"<<endl;
   }
   else{
        for(ex2; ex2 <= 30; ex2 += 4){
        cout<<ex2<<" \t ";
    }
   }
   
    return 0;
}
