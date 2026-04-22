/*
Tristan Brown
April 20, 2026
lab 18, array application
*/

#include <iostream>

using namespace std;

// example 1: search program
// function 1: function to collect up to 6 consecutive  positive integers
// the collection will stop if a negative number is entered.
// If there is less than five numbers collected, the function will reference to the array
void fillarray(int *arr, int &numberuserindex, int arraysize){
    int number = 0, index = 0;

    do{
        cout<<"Enter a positive number: ";
        cin>>number;

        if(number > 0){
            arr[index] = number;
            index++;
        }

    }while(number > 0 && index < arraysize);

    // update the index of the last consecutive positive number
    numberuserindex = index;
}

// function 2: print each element in an array
void printelement(int *arr, int sizearray){
    for(int i = 0; i < sizearray; i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}

// function 3: search function
int search(int *arr, int numberuserindex, int target){
    int index = 0;
    bool found = false;

    while(!found && index < numberuserindex){
        if(target == arr[index]){
            found = true; // stops while loop because !found will make this false at the start of next loop
        }
        else{
            index++;
        }
    }

    if(found)
            return index;
                else
                        return -1;
}

// EXERCISE
/*
In this exercise, you will practice using 1D arrays and functions in C++.
You will write a program that collects up to five non-zero integers from the user.
The input process ends when the user enters a sentinel value of 0 or when the array reaches five numbers.
After collecting the values, the program will calculate the average of the entered numbers, determine which number in the array is closest to that average, and display the results.

Your program will include the following functions:
*/

// collectnumber()
// Collects user-entered non-zero integers and stores them in a 1D array. Input stops when the user enters 0 or when five numbers have been entered.
void collectnumber(int *arr, int &sizeSAV, int s){
    int number = 0, index = 0;

    do{
        cout<<"Enter a non-zero integer: ";
        cin>>number;

        if(number != 0){
            arr[index] = number;
            index++;
        }

    }while(number != 0 && index < s);

    sizeSAV = index;
}

// Averagenumber()
// Computes and returns the average of all numbers stored in the array. Formula to calculate the
//      average number = sum of all numbers in the array / array-list size
float Averagenumber(int *arr, int s){
    int new_num = 0;

    for(int index2 = 0; index2 < s; index2++){
            new_num += arr[index2];
                
    }
    return new_num /= s;
}

// Closestmean()
// Compares each value in the array and returns the number that is closest to the average. We use the following formula to find a number closest to the average = absolute value(number - average).
#include <cmath>

double Closestmean(int *arr, int avg, int s){
    int closest = arr[0];
    double mean = abs(arr[0] - avg);

    for(int index2 = 0; index2 < s; index2++){
        double mean2 = abs(arr[index2] - avg);
        
        if(mean2 < mean){
            mean = mean2;
            closest = arr[index2];
        }
    }
    return closest;
}

// Printresult()
/*
Displays the message:
"The closest number to average ___ is ___."
The first blank is filled with the calculated average, and the second blank is filled with the number closest to the average.
*/
void Printresult(int avg, int close){
    cout<<"The closest number to average "<<avg<<" is "<<close<<endl;
}
