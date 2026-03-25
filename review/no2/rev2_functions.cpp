#include <iostream>
#include <cstdlib>
#include <time.h>
#include <cmath>
#include <iomanip>

using namespace std;

// exercise 1
char mystery(int first, int second){
    if (first >= second){			
        return 'W';			
    }
    else{ 						
        return 'H';					
    }
}

// exercise 2
int sum2=0, count=0;
void testing(){
    for (int n = -10; n < 10; n += 3){
        if (n % 4 == 0){
            count++;
            continue;
        }
        sum2 += n;
    }
}

// exercise 3
int series(int m)
{
    if (m >= 10)
        return m;

    else
        return series(m + 2) - 6;
}


// exercise 4
void printvalue(string v){
    
    cout<<"Pass value = "<<v<<endl;
}
void passref(string& v){
    cout<<"Pass refernce = "<<v<<endl;
    v = "Good Morning";
}
void passmemory(string* v){
    cout<<"Pass refernce = "<<v<<endl;
}

// exersice 5
int num = 5;

int add(int n1, int n2){
    int sum = n1+n2; 
    return sum;
}

void printresult(int sum){
    cout<<"The total sum is: "<<sum<<endl;
}

void db_print_num(){
    num *= 2; // num = num*2
    cout<<"Double = "<<num<<endl;
}
void tr_print_num(){
    num *=3;
    cout<<"Triple = "<<num<<endl;
}

// exercise 6
int rand_side(){
    return 1 + rand()%21;
}

double hyp(int side1, int side2){
    return sqrt(pow(side1, 2) + pow(side2, 2));
}

void print_result(int side1, int side2, double hypotenuse){
    cout<<"The hypotenuse of a right angle with side "<<side1
    <<" and "<<side2<<" is = "<<fixed<<setprecision(2)<<hypotenuse<<endl;
}

// exercise 7
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
        result = inOrder(n1,n2,n3);
    }
}