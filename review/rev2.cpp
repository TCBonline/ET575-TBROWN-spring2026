#include<iostream>

#include "rev2_functions.cpp"

int main(){
    srand(time(0));
    cout<<"----- exercise 1 -----"<<endl;
    char m = mystery(-3, 1);
    cout<<"mystery returns = "<<m<<endl;

    cout<<"\n----- exercise 2 -----"<<endl;
    cout<<"The sum is: "<<sum2<<endl<<"The count is: "<<count<<endl;
    testing();
    cout<<"The sum is: "<<sum2<<endl<<"The count is: "<<count<<endl;

    cout<<"\n----- exercise 3 -----"<<endl;
    int sequencenumber = 3;
    cout<<"The series sequence of " <<sequencenumber<< " is "<<series(sequencenumber)<<endl;

    cout<<"\n----- exercise 4 -----"<<endl;
    string something = "ET575";

    printvalue(something);		
    passref(something); 					
    printvalue(something);			
    passmemory(&something);

    cout<<"\n----- exercise 5 -----"<<endl;
    int sum = add(3,-2) + add (5,10);
    printresult(sum);
    db_print_num();
    tr_print_num();

    cout<<"\n----- exercise 6 -----"<<endl;
    int s1 = rand_side();
    int s2 = rand_side();
    double hypotenuse = hyp(s1, s2);

    print_result(s1, s2, hypotenuse);

    cout<<"\n----- exercise 7 -----"<<endl;
    int n1 = collectNumber();
    int n2 = collectNumber();
    int n3 = collectNumber();
    bool desc_order = inOrder(n1,n2,n3);

    runProgram(n1,n2,n3,desc_order);

    
    return 0;
}
