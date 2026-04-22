/*
Tristan Brown
Homework 7 - loop in an array
*/
#include <iostream> 

#include <cstdlib> 

#include <time.h> 

using namespace std;

// EXERCISE
// function to collect the size of an array 
// int collect_size(){
    

// }

//function to populate an array 
void populate_numbers(int *ar, int s){ 

// use loop to RANDOMLY generates number between 1 and 99
    for(int index = 0; index < s; index++){
     ar[index] = 1 + rand()%99;
    }
}

//function to print all numbers in an array 

void print_numbers(int *ar, int s){ 

// use loop to print all numbers in an array 
    for(int index = 0; index < s; index++){
        cout<<ar[index]<<"\t";
    }
}


//function to find the minimum number in an array 

int array_min(int *ar, int s){ 
    int minvalue = ar[0];

    for(int index2 = 0; index2 < s; index2++){
        if(ar[index2] < minvalue){
            minvalue = ar[index2];
        }
    }
    return minvalue;
} 

 

//function to return the average of all numbers in an array 

float array_avg(int *ar, int s){
    int new_num = 0;

    for(int index2 = 0; index2 < s; index2++){
            new_num += ar[index2];        
    }
    return new_num /= s;

} 