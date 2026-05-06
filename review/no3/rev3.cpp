#include<iostream>
#include "rev3_functions.cpp"

int main(){
    cout<<"----- exercise 1 -----"<<endl;
    double dia = collect_diameter(), cost = 2.5;
    testing(dia,cost);

    cout<<"\n----- exercise 2 -----"<<endl;
    string something = "ET575";

    printvalue(something);	// result in Terminal = 	ET575		
    passref(something); 	// result in Terminal = 	ET575		
    printvalue(something);	// result in Terminal = 	Good Morning		
    passmemory(&something); // result in Terminal = 	0x7fffffffcd00

    cout<<"\n----- exercise 3 -----"<<endl;
    const int arrsz = 6;
    int k[arrsz] = {1, 3, 4, 13, 14, 8};

    cout<<functionArray(k, arrsz)<<endl;

    return 0;
}