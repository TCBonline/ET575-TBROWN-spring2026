/*
Tristan Brown
lab 12, nested loop
March 11, 2026
*/

#include <iostream>

using namespace std;

int main(){
    cout<<"\n ----- example 1: algorithm of a loop -----"<<endl;
    int count = 0;
    int i = 10;

    while(i > 5){
        i--;
        if(i % 2 == 0){
            count += i;
            continue;
        }
        count -= 3;
    }

    cout<<"Final count is "<<count<<endl;

    /* TABLE ANALYSIS
    loop
    iteration   |   i--             |   if(i % 2 == 0)  |   count
    -----------------------------------------------------------------
        1       | i = 10 - 1 = 9    |   false           |   count -= 3 --> = 0 - 3 = -3
    -----------------------------------------------------------------
        2       | i = 9 - 1 = 8     |   true            |   count += i --> = -3 + 8 = 5
    -----------------------------------------------------------------
        3       | i = 8 - 1 = 7     |   false           |   count -= 3 --> = 5 - 3 = 2
    -----------------------------------------------------------------
        4       | i = 7 - 1 = 6     |   true            |   count += i --> = 2 + 6 = 8
    -----------------------------------------------------------------
        5       | i = 6 - 1 = 5     |   false           |   count -= 3 --> = 8 - 3 = 5
    -----------------------------------------------------------------
        6       | i = 5     (STOP)

    cout --> Final count is 5
    */

    cout<<"\n ----- example 2: nested loop -----"<<endl;
    // a loop inside another loop
    // one iteration of the outer loop, one complete cycle of the inner loop will run
    int outer = 0;
    // outer loop
    while(outer++ < 3){
        cout<<"OUTER LOOP "<<outer<<endl;

        // inner loop
        int inner = 0;
        while(inner++ <= 5){
            cout<<inner<<"\t";
        }
        cout<<endl;
    }

    cout<<"\n ----- example 3: nested loop -----"<<endl;
    // simulate a cinema seat arrangement
    // seats per row. rows = outer loop, seats = inner loop
    int rows, seats_row;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    cout<<"Enter the number of seats per row: ";
    cin>>seats_row;

    cout<<"Seating Arrangemt:"<<endl;
    for(int r = 1; r <= rows; r++){
        for(int s = 1; s <= seats_row; s++){
            cout<<"Row "<<r<<" Seat = "<<s<<"\t";
        }
        cout<<endl;
    }

    cout<<"\n ----- example 4: 2D graph -----"<<endl;
    // 9 by 9 graph
    const int GRIDSIZE = 9;
    for(int row = 1; row <= GRIDSIZE; row++){
        for(int col = 1; col <= GRIDSIZE; col++){
            if(col == 5 || row == 5)
                cout<<" x ";
            else
                cout<<" . ";
        }
        cout<<endl;
    }

    cout<<"\n ----- example 5: 2D graph -----"<<endl;
    // 10-by-10 graph. plot letter H
    const int GRID = 10;
    for(int rows2 = 1; rows2 <= GRID; rows2++){
        for(int col2 = 1; col2 <= GRID; col2++){
            if((col2 >= 3 && col2 <= 4 && rows2 >= 2 && rows2 <= 9) || (col2 >= 5 && col2 <= 6 && rows2 >= 5 && rows2 <= 6) || (col2 >= 7 && col2 <= 8 && rows2 >= 2 && rows2 <= 9))
                cout<<" % ";
            else
                cout<<" . ";
        }
        cout<<endl;
    }

    cout<<"\n ----- EXCERCISE -----"<<endl;
    // Write the output of the following code (Do not use any software, including Visual Studio code, to run the code yet. You will test the code later in step 3):
    // a)
    int sum = 0, count3 = 0;
        for (int n = 20; n > 0; n -= 2){
            if (n % 3 == 0){
                count3++;
                continue;
            }
        sum += n;
        }
        cout<<"The sum is: "<<sum<<endl<<"The count is: "<<count3<<endl;


    // Written Output
    /*
        Loop       |    n   |   if (n % 3 == 0) |   count    |  sum
      Iteration    |        |   True or False   |            |
    ---------------------------------------------------------------------------------
    1              | 20     | false             |   0        | 0 + 20 = 20
    ---------------------------------------------------------------------------------
    2              | 18     | true              |  0 + 1 = 1 | 20
    ---------------------------------------------------------------------------------
    3              | 16     | false             |   1        | 20 + 16 = 36
    ---------------------------------------------------------------------------------
    4              | 14     | false             |   1        | 36 + 14 = 50
    ---------------------------------------------------------------------------------
    5              | 12     | true              |  1 + 1 = 2 | 50
    ---------------------------------------------------------------------------------
    6              | 10     | false             |   2        | 50 + 10 = 60
    ---------------------------------------------------------------------------------
    7              | 8      | false             |   2        | 60 + 8 = 68
    ---------------------------------------------------------------------------------
    8              | 6      | true              |  2 + 1 = 3 | 68
    ---------------------------------------------------------------------------------
    9              | 4      | false             |   3        | 68 + 4 = 72
    ---------------------------------------------------------------------------------
    10             | 2      | false             |   3        | 72 + 2 = 74
    ---------------------------------------------------------------------------------
    11             | 0      (STOP)
    
    cout --> The sum is: 74
             The count is: 3
    */

    // b)
    cout<<endl;
    int y = 0, add = 0;
        while(y <= 10){
            y++;
            if(y < 5 && y != 2){
                cout<<"y = "<<i<<endl;
            }
            else{continue;}
            add += y;
        }
        cout<<"y = "<<y<<" and add = "<<add<<endl;
    // Written Output
    /*
        Loop       |    y   |   if(y < 5 && y != 2) |     else      |  add
      Iteration    |        |    True or False      | True or False |
    ---------------------------------------------------------------------------------
    1              | 1      |        true           |   false       | 0 + 1 = 1
    ---------------------------------------------------------------------------------
    2              | 2      |        false          |   true        | 1
    ---------------------------------------------------------------------------------
    3              | 3      |        true           |   false       | 1 + 3 = 4
    ---------------------------------------------------------------------------------
    4              | 4      |        true           |   false       | 4 + 4 = 8
    ---------------------------------------------------------------------------------
    5              | 5      |        false          |   true        | 8
    ---------------------------------------------------------------------------------
    6              | 6      |        false          |   true        | 8
    ---------------------------------------------------------------------------------
    7              | 7      |        false          |   true        | 8
    ---------------------------------------------------------------------------------
    8              | 8      |        false          |   true        | 8
    ---------------------------------------------------------------------------------
    9              | 9      |        false          |   true        | 8
    ---------------------------------------------------------------------------------
    10             | 10     |        false          |   true        | 8
    ---------------------------------------------------------------------------------
    11             | 11     |        false          |   true        | 8
    ---------------------------------------------------------------------------------
    12      (STOP)
    */

    return 0;
}