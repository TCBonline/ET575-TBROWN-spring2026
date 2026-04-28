/*
Tristan Brown
April 22, 2026
lab 19, 2D arrays
*/
#include <iostream>
#include <time.h>

using namespace std;

// example 1: function to print the elements in a 2D array
void print2D(int arr[][COLSIZE], int rowsize){
    for(int row = 0; row < rowsize; row++){
        for(int col = 0; col < 5; col++){
            cout<<arr[row][col]<<"\t";
        }
        cout<<endl;
    }
}

// example 2: function to sum all even positive numbers in a 2D array
int sumevenpositive(int arr[][COLSIZE], int rowsize){
    int sumallevenpositive = 0;
    for(int row = 0; row < rowsize; row++){
        for(int col = 0; col < 5; col++){
            if(arr[row][col] > 0 && arr[row][col]% 2 == 0){
                sumallevenpositive += arr[row][col];
            }
        }
    }
    return sumallevenpositive;
}

void printsum(int sumallevenpositive){
    cout<<"The result is "<<sumallevenpositive<<endl;
}

// EXERCISE
// Create a multidimensional, 2D, array with 3 rows and 4 columns and use a function, populate() , to populate each cell of the array with numbers. The numbers will be randomly generated between 0 and 100.

void populate(int arr[][COLSIZE2], int rowsize){
    srand(time(0));
    for(int row = 0; row < rowsize; row++){
        for(int col = 0; col < COLSIZE2; col++){
            arr[row][col] = 1 + rand()%100;
        }
    }
}

// Define a function named printvaluearray(), to print each element in the 2D array.
void printvaluearray(int arr[][COLSIZE2], int rowsize){
    cout<<"-------  // -------  // -------  // -------"<<endl;
    for(int row = 0; row < rowsize; row++){
        for(int col = 0; col < COLSIZE2; col++){
            cout<<arr[row][col]<<"\t";
        }
        cout<<endl;
    }
}

// Define another function, average(), that will calculate and return the average of all numbers within the array.
float average(int arr[][COLSIZE2], int rowsize){
    float new_num = 0;

    for(int row = 0; row < rowsize; row++){
        for(int col = 0; col < COLSIZE2; col++){
            new_num += arr[row][col];
        }
    }
    return new_num /= (rowsize * COLSIZE2);
}