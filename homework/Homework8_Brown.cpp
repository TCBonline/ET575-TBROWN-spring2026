/*
Tristan Brown
Homework 8 - 2D array
*/
#include <iostream> 

using namespace std;

const int ROWCOL_ARRAY = 4;

// define a function to search for a value in a 2D array
void findvalue(int arr[][ROWCOL_ARRAY], int rowsize, int search, int &r, int &c){
    for(int row = 0; row < rowsize; row++){
        for(int col = 0; col < ROWCOL_ARRAY; col++){
            if(search == arr[row][col]){
                r = row;
                c = col;
                return;
            }
        }
    }
}

// define a function to display a message
void printmsg(int search, int r, int c){
    if(r == -1 && c == -1){
        cout<<"Number "<<search<<" was not found"<<endl;
    }
    else{
        cout<<"Number "<<search<<" was found in row "<<r<<" and column "<<c<<endl;
    }
}

int main(){
    int ar[ROWCOL_ARRAY][ROWCOL_ARRAY] ={ 
        {1,2,3,4}, 
        {5,6,7,8}, 
        {9,10,11,12},
        {13,14,15,16} 
    };

// call function to search for a value in a 2D array
    int search;
    int row_pos = -1, col_pos = -1;
    cout<<"Enter a number for the array to search for: ";
    cin>>search;

    findvalue(ar,ROWCOL_ARRAY,search,row_pos,col_pos);

// call function to display a message
    printmsg(search,row_pos,col_pos);

    return 0;
}