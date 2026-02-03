/*
Tristan Brown
Jan 28, 2026
lab 3, numerical variables
*/

#include<iostream>

using namespace std;

int main(){

    cout<<"----- Example 1: -----"<<endl;
    // Declare integers
    int number = 10.9;
    float n = 7.8;

    cout<<"number = "<<number<<endl;
    cout<<"n = "<<n<<endl;

    cout<<"\n----- Example 2: numerical operators -----"<<endl;
    // numerical operator, + - * /
    // % (modulus) returns the remainder of a division
    number = 5;
    int number2 = 2;
    cout<<"sum = "<<number + n<<endl;
    cout<<"without casting, division = "<<number + number2<<endl;
    // casting convert from one data type into another data type
    cout<<"division = "<< number /static_cast<float>(number2)<<endl;

    // % modulus
    cout<<"mod of two numbers = "<<number%number2<<endl;

    cout<<"\n----- Example 3: assignment operators -----"<<endl;
    // assignment operators assign a value to a variable itself
    // ++ increment by 1
    cout<<"original number = "<<number<<endl;
    number++;
    cout<<"updated number = "<<number<<endl;
    // -- decrement by 1
    cout<<"\noriginal number2 = "<<number2<<endl;
    number2--;
    cout<<"updated number2 = "<<number2<<endl;

    // +=
    number = 10;
    cout<<"\noriginal number = "<<number<<endl;
    number+= 5; // increase by 5
    cout<<"updated number = "<<number<<endl;

    // -=
    number-= 8; // decrease by 8
    cout<<"updated number with -= 8 --> "<<number<<endl;

    cout<<"\n----- Example 4: comparison operators -----"<<endl;
    // == compare if numbers are equal
    // != compare is numbers are not equal
    // > greater than
    // < less than
    // >= greater than or equal to
    // <= less than or equal to
    // C++ returns 1 for true and 0 for false

    number = 3;
    number2 = 8;

    cout<<"\nAre number and number2 equal? "<<(number == number2)<<endl;

    bool check1 = number != number2;
    bool check2 = number > number2;

    // print result
    cout<<"Are number and number2 differernt? "<<check1<<endl;
    cout<<"Is number greater than number2? "<<check2<<endl;

    cout<<"\n----- Example 5: logical operators -----"<<endl;
    // determine the logic between values
    // && AND logic. returns TRUE if all statements are TRUE
    // || OR logic. returns TRUE if at least one statement is TRUE
    // ! NOT(inverter) logic. returns TRUE from a FALSE or vice versa
    number = 3;
    number2 = 5;

    bool check3 = number < number2; // check3 = true(1)
    bool check4 = number >= number2; // check4 = false(0)
    bool check5 = number2 != 10; // check5 = true(1)
    bool check6 = number == 3; // check6 = true(1)

    bool logicalcomp = check3 && check5 && check6; // true && true && true = true(1)
    bool logicalcomp2 = check4 && check5 && check6; // false && true && true = false(0)
    bool logicalcomp3 = check4 || check5 || check6; // false || true || true = true(1)
    bool logicalcomp4 = !logicalcomp; // !true = false

    // print result
    cout<<"\nlogical comparison 1 = "<<logicalcomp<<endl;
    cout<<"logical comparison 2 = "<<logicalcomp2<<endl;
    cout<<"logical comparison 3 = "<<logicalcomp3<<endl;
    cout<<"logical comparison 4 = "<<logicalcomp4<<endl;

    cout<<"\n----- Lab assignment 3, numerical variables -----"<<endl;
    int a = 0;
    int b = 0;

    cout<<"\nEnter the first number (a): "<<endl;
    cin>>a;
    cout<<"Enter the second number (b)"<<endl;
    cin>>b;

    cout<<"\nArithmetic Operations:"<<endl;
    cout<<"a + b = "<<a + b<<endl;
    cout<<"a - b = "<<a - b<<endl;
    cout<<"a * b = "<<a * b<<endl;
    cout<<"a / b = "<<a / b<<endl;
    cout<<"a % b = "<<a % b<<endl;

    cout<<"\nAssignment Operations:"<<endl;
    a += 10;
    b -= 5;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;

    cout<<"\nBoolean Operations:"<<endl;
    bool check_ab = a > b;
    bool check_ab2 = a == b;
    bool check_ab3 = a != b;

    bool ablogic = a > 0 && b > 0;
    bool ablogic2 = a < 0 || b < 0;
    bool ablogic3 = !check_ab;

    cout<<"Is a greater than b? "<<check_ab<<endl;
    cout<<"Is a equal to b? "<<check_ab2<<endl;
    cout<<"Is a not equal to b? "<<check_ab3<<endl;
    cout<<"Are both a and b positive? "<<ablogic<<endl;
    cout<<"Is either a or b negative? "<<ablogic2<<endl;
    cout<<"Is a not greater than b? "<<ablogic3<<endl;
    return 0;
}
