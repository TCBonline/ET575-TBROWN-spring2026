/*

Homework 1: strings, string methods, and numerical variables

Tristan Brown:

*/

#include<iostream>
#include <cmath>

using namespace std;

int main(){
    cout<<"----- Activity 1: -----"<<endl; 
    // Procedure: Create a C++ program that:

    // Step 1) Has a string variable with an initial value of “Welcome to ” and another string with initial value “New York City”
    string mesg;
    string city;

    mesg = "Welcome to ";
    city = "New York City ";

    // Step 2) Has a string variable that will collect a name from computer keyboard.
    string username;
    cout<<"Enter a name: "<<endl;
    cin>>username;

    // Step 3) has a string variable that will concatenate the variables from step1 and step 2 using the + operator. The concatenated string should have the following order:
    // Welcome to New York City _____
    string concat3 = mesg + city + username;
    string concat4 = concat3;

    // Step 4) prompts the concatenated string from Step 3
    cout<<concat3<<endl;

    // Step 5) uses string method to find the length of string variable from step 3. Store the return value in an integer variable
    int length = concat3.length();
    int cat3_length = length;

    // Step 6) uses string method to find word “ma” in the string variable from step 3. Store the result index in an integer variable.
    int index = concat3.find("me");
    int index_cat3 = index;

    // Step 7) uses the string variable from step 3 and replace the word “ma” with the character  "%---%". Hint: use the index found in step 6
    string replace = concat3.replace(5, 2, "%---%");
    string cat3_replace = replace;

    // Step 8) prompts result from step 4, 5, 6, and 7, you must use \t to align the result, as:
    cout<<"\n------------------------------ RESULT ACTIVITY 1 ----------------------------"<<endl;
    cout<<"Concatenated message:\t"<<concat4<<endl;
    cout<<"Message length: \t"<<cat3_length<<endl;
    cout<<"Index of character 'me':\t"<<index_cat3<<endl;
    cout<<"Replace 'me' with %---%:\t"<<cat3_replace<<endl;

    cout<<"\n----- Activity 2: -----"<<endl;
    // Procedure: Create a C++ program that:

    // Step 1) sets variable pi as a constant with initial value of 3.14159
    const float pi = 3.14159;

    // Step 2) Asks the user to enter a radius and a height from the keyboard. Store the values as float variable.
    float radius, height;
    cout<<"Enter a radius and height: \n";
    cin>>radius>>height;
    float radSAV = radius;
    float heiSAV = height;

    // Step 3) Checks if the radius is greater than the height. Store the result in a bool variable
    bool check_rh = radius > height;

    // Step 4) Checks if the radius is equal to the height. Store the result in a bool variable
    bool check_rh2 = radius == height;

    // Step 5) Triple the height and increase the radius by 5 using assignment operators.
    height *= 3;
    radius += 5;

    // Step 6) uses logical and comparison operators to check if the radius is not equal to the height and greater than the height. Store the result in a bool variable.
    bool logic_checkrh = check_rh2 && check_rh;

    // Step 7) uses the radius and height from step 5 to calculate the volume of the right cylinder. The formula to calculate the volume of the right cylinder is:
    // Volume = PI*radius^2*height
    float radSAV2 = pow(radSAV, 2);
    float volume = pi * radSAV2 * heiSAV;

    // Step 8) Prompt result from step 3, 4, 5, 6, and 7 (you must use \t to align the result). The prompt should look as:
    cout<<"\n------------------------------ RESULT ACTIVITY 2 ----------------------------"<<endl;
    cout<<"Is the radius greater than height?\t"<<check_rh<<endl;
    cout<<"Is the radius equal to height?  \t"<<check_rh2<<endl;
    cout<<"Triple height = \t"<<height<<endl;
    cout<<"Increased radius by 5 = \t"<<radius<<endl;
    cout<<"Is the radius not equal to and greater than height?\t"<<logic_checkrh<<endl;
    cout<<"The volume of a right cylinder with radius "<<radSAV<<"cm"<<" and height "<<heiSAV<<"cm is =\t"<<volume<<endl;

    return 0;
}