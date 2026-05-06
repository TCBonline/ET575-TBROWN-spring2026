#include <iostream>
#include<cmath>

using namespace std;
const double PI = 3.14159;

// exercise 1
double collect_diameter(){
    double d;

    cout<<"Enter a diameter: ";
    cin>>d;

    return d;
}

int totalPrice(double diameter, double price){ 	// diameter = 8	price = 2.5
    double a, r;
    r = diameter/static_cast<double>(2);
    a = PI*pow(r,2);

    return ((a*price)+2);					// return = 127.2636 
}

void testing(double d,double c){				// d = 8(input entered) 		c = 2.5	
    double total;
    char ans;
    do{
        total = totalPrice(d,c);
        cout<<"The total cost is $ "<<total<<endl;
        cout<<"Test again? (y/n) ";
        cin>>ans;
        cout<<endl;
    }while(ans=='Y' || ans =='y');	// user picks N
}

// exercise 2
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

// exercise 3
int functionArray(int arr[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] % 2 == 0){
            sum += arr[i];
        }
    }
    return sum;
}
