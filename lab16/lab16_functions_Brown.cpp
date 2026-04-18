/*
Tristan Brown
April 13, 2026
lab 15, random numbers
*/

#include <iostream>

using namespace std;

void pointerreference(){
    int num = 12;
    char syn = 'T';
    string n = "Peter";

    // declare the pointers
    int* pointerint;
    char* pointerchar;
    string* pointerstring = &n; // declare and initialize a pointer

    // check a pointer ==> show memory address
    cout<<"int pointer "<<pointerint<<endl;

    // assign value to a pointer
    pointerint = &num;
    pointerchar = &syn;

    // check pointer's value
    cout<<"int pointer = "<<pointerint<<endl;
    cout<<"char pointer = "<<pointerchar<<endl;
    cout<<"string pointer = "<<pointerstring<<endl;

    // use dereference operator to obtain the value of the pointer memory address
    cout<<"value of the int pointer = "<<*pointerint<<endl;
    cout<<"value of the char pointer = "<<*pointerchar<<endl;
    cout<<"value of the string pointer = "<<*pointerstring<<endl;
}

// example 2: pass pointer into a function
// pass a value
void printvalue(string n){
    cout<<"Value = "<<n<<endl;
}

void printaddress(string* n){
    cout<<"Pointer = "<<n<<endl;
}

void printreference(string& n){
    cout<<"Pointer Value = "<<n<<endl;
}

// example 3: array
void introarray(){
    // declare an array of size 5
    int scores[5];

    // assign values to an array. use indexing to access to each cell in an array. indexing starts from 0
    scores[0] = 90; // accessing the first (most-left) cell in array scores
    scores[1] = 70;
    scores[2] = 86;
    scores[3] = 92;
    scores[4] = 60;

    // find the average of the scores
    float average = (scores[0] + scores[1] + scores[2] + scores[3] + scores[4])/5.0;
    cout<<"The average is "<<average<<endl;

    // initialize an array
    char symbols[3] = {'%', '$', '#'};
    cout<<"The second symbol is = "<<symbols[1]<<endl;

    // initialize an array without an array's size
    string names[] = {"Peter", "Annie"};
    cout<<"The first name is = "<<names[0]<<endl;
}

// example 4: length of an array
void lengtharray(){
    // size of function returns the number of bytes of value
    cout<<"character = "<<sizeof(char)<<endl;
    cout<<"string = "<<sizeof(string)<<endl;
    cout<<"integer = "<<sizeof(int)<<endl;
    cout<<"float = "<<sizeof(float)<<endl;
    cout<<"double = "<<sizeof(double)<<endl;

    // array
    int numbers[] = {2,7,9,-10,3};

    cout<<"length of array numbers = "<<sizeof(numbers)<<endl;
    // to find the number of values in an array = total size of an array / size of the data type
    cout<<"There is "<<(sizeof(numbers)/sizeof(int))<<" values in an array"<<endl;
}

// example 5: loop through an array
void looparray(){
    int s = 5;
    int arr[s] = {1,2,3,4,5};
    
    // create a pointer to arr
    int *ptr_array = arr;

    // loop through an array
    for(int index = 0; index < s; index++){
        cout<<"index = "<<index<<" has value = "<<arr[index]<<endl;
    }
}

// example 6: pass an array to a function
// function to populate data into an array
void fillup(int arraysize, int *arrnumbers){
    for(int index = 0; index < arraysize; index++){
        cout<<"Enter a number: ";
        cin>>arrnumbers[index];
    }
}

// function to print all data in an array
void printarray(int arraysize, int *arrnumbers){
    for(int index = 0; index < arraysize; index++){
        cout<<arrnumbers[index]<<"\t";
    }
    cout<<endl;
}

// function to find the maximum number in an array
int maxnumber(int arraysize, int *arrnumbers){
    int maxvalue = arrnumbers[0];
    for(int index = 0; index < arraysize; index++){
        if(arrnumbers[index] > maxvalue){
            maxvalue = arrnumbers[index];
        }
    }
    return maxvalue;
}

/*
EXERCISE
Given the following array:

    // declare an array with 6 values ==> fixed length array
    int scores[5];

    // assign value to each item in array 'scores'
    scores[0] = 60;
    scores[1] = 90;
    scores[2] = 75;
    scores[3] = 88;
    scores[4] = 100;

write a code, using loop, to find the LOWEST score of array 'scores', and prompt the result message as 'The lowest score is ___ ' where the blank is the lowest score of array 'scores'.
*/
void min_number(){
    int scores[5];
    scores[0] = 60;
    scores[1] = 90;
    scores[2] = 75;
    scores[3] = 88;
    scores[4] = 100;

    int minvalue = scores[0];
    
    for(int index2 = 0; index2 < 5; index2++){
        if(scores[index2] < minvalue){
            minvalue = scores[index2];
        }
    }
    cout<<"The lowest score is "<<minvalue<<endl;
}