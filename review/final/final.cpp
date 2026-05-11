#include<iostream>
#include "final_functions.cpp"

using namespace std;

int main(){
    cout<<"----- exercise 1 -----"<<endl;
    result(6, 20, 7);

    cout<<"\n----- exercise 2 -----"<<endl;
    cout<<"Result = "<<character(9,"TRIANGLE")<<endl;

    cout<<"\n----- exercise 3 -----"<<endl;
    cout<<"The final number is = "<<number(4)<<endl;

    cout<<"\n----- exercise 4 -----"<<endl;
    const int x = 5;
    int grades[x] = {50,80,92,70,65};
    int a = avg_grade(grades,x);
    cout<<"The average grade is = "<<a<<endl;

    cout<<"\n----- exercise 5 -----"<<endl;
    number2(3.2);



    return 0;
}