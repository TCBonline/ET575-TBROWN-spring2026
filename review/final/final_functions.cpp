#include <iostream>
#include<string>

using namespace std;

void result(int a, int b, int c){ 
    do{ 
        a++; 
        if (a % 2 == 0){ 
            c -= 4; 
            if (a % 3 == 0){ 
                b += a; 
                break; 
            } 
        } 
    }while(a <= b); 

    cout<<"a = "<<a<<" b = "<<b<<" c = "<<c<<endl; 
}



char character(int n, string m){ 		// n = 9     m = TRIANGLE 
    n -= 4; 							// n = 5 
    if(n < m.length() && n >= 0){		// true or false?  
        return m[n]; 					// will or will not return?
    } 
    return '#'; 	
}

double number(int n){		// number(int n =  4) 
    n *= 3; 				// n = 12

    if (n<10 && n>=10){  	// if (n<10 && n>=10) True or False? 
        n += 2; 			// n = skip
        return n;   		// will or will not return?  
    } 
    else{ 					// will run or will be skipped?  
        n -= 2; 			// n = 10
        return n; 			//will or will not return?  
    } 
} 

int avg_grade(int arr[], int size){ 
    int sum = 0; 
    for(int i = 0; i < size; i++){ 
        sum += arr[i]; 
    } 
    return sum/size;
} 

void number2(int n){
    cout<<"The double of "<<n<<" is "<<(n * 2)<<endl;
}