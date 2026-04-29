/*
Tristan Brown
Homework 9 - Arrays application
*/
#include <iostream> 

using namespace std;

// In this exercise, you will implement a program that reverses the values of a one-dimensional array named noise[]. The require functions for the program are:

// arraysize() function:
    /*
    This function will ask the user to enter an array size, which must be between 1 and 100 (inclusive). If the input is invalid (i.e., not in the range [1, 100]), the function will continue prompting the user until a valid number is entered. The function will then return this valid size.

    Array Initialization: Once the valid size is obtained from arraysize(), a one-dimensional array noise[] will be created with the specified size. 
    */
int arraysize(){
    int size;
    do{
        cout<<"Enter an array size between 1 and 100: ";
        cin>>size;
        if(size < 1 || size > 100){
            cout<<"Invalid input. Please enter a number between 1 and 100."<<endl;
        }
    }while(size < 1 || size > 100);
    return size;
}

// randPopulate() function:
    /*
    This function will randomly generate numbers between 10 and 30 (inclusive) and fill them into the noise[] array.
    */
void randPopulate(int arr[], int size){
    srand(time(0));
    for(int i = 0; i < size; i++){
        arr[i] = 10 + rand()%21;
    }
}

// print() function:
    /*
    This function will print the values in each cell of the noise[] array.
    */
void print(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}

// reverse() function:
    /*
    This function will reverse the order of the values in the noise[] array by swapping the values at corresponding positions.

    Second Call to print() function:  After the reversal, print() will be called again to display the reversed array.
    */
void reverse(int arr[], int size){
    for(int i = 0; i < size/2; i++){
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

