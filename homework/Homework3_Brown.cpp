/*
Tristan Brown
Homework 3 - for loop
*/

#include <iostream>

using namespace std;

int main(){
    cout<<"\n----- Program 1 -----"<<endl;
    /*
    Program 1: write a C++ code that will ask the user to enter 10 numbers and check how many of the numbers are negative, positive, and zero.
    Use a for loop a read each entered number. After the for loop, the program displays the result as:
    Total positive numbers =        
    Total negative numbers =        
    Total zeros  =                 
    */
    int pos = 0, neg = 0, zzip = 0;
    int collect;

    for(int e = 1; e <= 10; e++){
        cout<<"Enter number "<<e<<": ";
        cin>>collect;
        if(collect > 0){
            pos++;
        }

        else if(collect < 0){
            neg++;
        }

        else{
            zzip++;
        }
    }
    
    cout<<"\nTotal positive numbers = "<<pos<<endl;
    cout<<"Total negative numbers = "<<neg<<endl;
    cout<<"Total zeros = "<<zzip<<endl;

    cout<<"\n----- Program 2 -----"<<endl;
    /*
    Program 2: write a C++ code that takes daily sales figures over a period of time and calculates their total.
    It then uses this total to compute the average daily sales. The program:
        Ask the user to enter the number of days.
        Loop through the number of days, prompting the user to enter the sales figure for each day.
        Calculate the total sales by accumulating the daily sales values.
        Compute the average daily sales as average sales = total sales / number of days.
        Display the total sales, number of sales days, and the average daily sales as shown below: 
    Total sales $ _____ for _____ days.  Average daily sales $ ______

    Where the first blank is to display the total sales, the second blank is to display the number of sales days, which was entered by the user, and the third blank is the calculate average sales.
    */
   int days = 0, loopcount2 = 0;
   double sales_fig, total_sales;

    cout<<"Enter number of days: "<<endl;
    cin>>days;

    for(int i = 1; i <= days; i++){
        cout<<"Enter sales sales figure for day "<<i<<": ";
        cin>>sales_fig;

        total_sales += sales_fig;
    }

    double avg_sale = total_sales / days;
    cout<<"Total sales $"<<total_sales<<" for "<<days<<" days. Average daily sales $"<<avg_sale<<endl;
    
    return 0;
}