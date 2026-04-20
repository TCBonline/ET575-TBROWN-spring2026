/*
Tristan Brown
April 19, 2026
lab 17, passing array in a function
*/

#include <iostream>

using namespace std;

/*
EXERCISE
Define two functions:

One function that sums all even numbers in an array and returns the sum.
One function that counts all negative numbers and returns the number of negative numbers in an array.
*/
void even_num(){
    int even_arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int even_sum = (even_arr[1] + even_arr[3] + even_arr[5] + even_arr[7] + even_arr[9]);

    cout<<"The sum of the even numbers is "<<even_sum<<endl;
}

void neg_num(){
    int neg_arr[10] = {1,2,3,-4,-5,6,7,-8,9,-10};
    int total = 0;

    for(int i = 0; i < 10; i++){
        if(neg_arr[i] < 0){
            total++;
        }
    }

    cout<<"The amount of negative numbers is "<<total<<endl;
}