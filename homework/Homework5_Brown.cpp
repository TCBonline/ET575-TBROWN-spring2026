/*

Homework 5: functions

Tristan Brown:

*/

#include<iostream>
#include <cmath>

using namespace std;


// Program 1: Wind chill calculation
// This program you will define four function speed(), temp(), windspeed(). and prompt_result().


// The speed() function will ask the user to enter a wind speed and return the speed as an integer.
// Before returning the speed, the function code should check that the speed is a positive number less than 100. 
int speed(){
    int spdEX;
    while(true){
        cout<<"Enter a wind speed (0 - 100): ";
        cin>>spdEX;
        if(spdEX < 0 || spdEX > 100){
            continue;
        }
        else{
            return spdEX;
        }    
    }
}

// The temp() function will ask the user to enter a temperature and return the temperature as an integer.
// Before returning the temperature, the function code should check that the temperature must be less or equal to 10 and greater than -90
int temp(){
    int temEX;
    while(true){
        cout<<"Enter a temperature (-90 < temp <= 10): ";
        cin>>temEX;
        if(temEX <= 10 && temEX > -90){
            return temEX;
        }
        else{
            continue;
        }    
    }
}


/*
The windspeed() function calculates the wind chill index using the return the wind chill index as an float or double number.
The temperature and wind speed are passed to the function as arguments, and they are used to calculate the wind chill index using the following formula:
Wind Chill index = 
    33 - (10(sqrt v) - v + 10.5) * (33 - tem)

where, 
v = wind speed in m/s 
tem = temperature in degrees Celsius. It must be less or equal to 10. 
*/
double windspeed(int speed, int temp){
    return 33 - (10 * sqrt(speed) - speed + 10.5) * (33 - temp);
}

void prompt_result(double windspeed){
    cout<<"The wind index is: "<<windspeed<<endl;
}

// Program 2: Descending order entries
// Complete a program that checks if three numbers are entered in descending order. The program should be divided into the following functions:

// collectNumber: This function prompts the user to enter a number and returns the input.
int collectNumber(){
    int numEX;
    cout<<"Enter a number: ";
    cin>>numEX;

    return numEX;
}

bool inOrder(int num1, int num2, int num3){
    return num1 > num2 && num2 > num3;
}

void runProgram(int num1, int num2, int num3, bool result){
    char enter = ' ';
    while(true){
        cout<<"Where the 3 numbers entered in a descending order? "<<result<<endl;
        cout<<"Reset Program? Enter any key or Q to exit. ";
        cin>>enter;

        if(enter == 'q' || enter == 'Q'){
            break;
        }
        int n1 = collectNumber();
        int n2 = collectNumber();
        int n3 = collectNumber();
        bool desc_order = inOrder(n1, n2, n3);
    }
}

bool order_result(int num1, int num2, int num3){
    return inOrder(num1, num2, num3);
}

// inOrder: This function accepts three numbers as parameters and checks whether they are in descending order.
// It returns true (or 1) if they are in descending order; otherwise, it returns false (or 0).

int main(){
    cout<<"----- Program 1: Wind chill calculation -----"<<endl; 
    int s = speed(); 
    float t = temp();

    prompt_result(windspeed(s,t));

    cout<<"\n----- Program 2: Descending order entries -----"<<endl;
    int num1 = collectNumber();
    int num2 = collectNumber();
    int num3 = collectNumber();
    bool desc_order = order_result(num1,num2,num3);

    runProgram(num1,num2,num3,desc_order); 

    return 0;
}