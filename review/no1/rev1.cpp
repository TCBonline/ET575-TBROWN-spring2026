#include <iostream>

using namespace std;

int main(){
    // // 1. Write a single C++ line that will print the first letter of each word of string name
	// //     string name ="Peter Smith";

    string name ="Peter Smith";
    cout<<"The first letter of Peter = "<<name[0]<<". Next, the first letter of Smith = "<<name[6]<<"."<<endl;

    // // 2. Write a C++ program that will request a user to enter a character from the keyboard, and print a message
    // //     “The character typed is: ______”

    string ques2;
    cout<<"\nEnter a character from the keyboard:"<<endl;
    cin>>ques2;
    cout<<"The character typed is: "<<ques2<<endl;

    // // 3. Write a C++ program that will ask the user to enter two colors, then the program will
    // //    concatenated both colors and save the length of the concatenated word.

    string color1;
    string color2;
    cout<<"\nEnter two colors: "<<endl;
    cin>>color1>>color2;
    string catcolor = color1 + color2;
    int cc_length = catcolor.length();
    cout<<"Contatenated string with colors entered: "<<catcolor<<endl;
    cout<<"Length of new string = "<<cc_length<<" letters."<<endl;

    // // 4. Write a single C++ line that will subtract the word Community from the string college. 
    // // Given:
	// //    string college ="Queensborough Community College";

    string college ="Queensborough Community College";
    string sub_coll = college.substr(13, 10);
    cout<<"Subtracted string: "<<sub_coll<<endl;

    // 5. Write a single C++ line that will replace the word Free with $5.99 in string shipping. 
    // Given:
	//    string shipping ="Shipping fee is Free per order";

    string shipping = "Shipping fee is Free per order";
    string rep_free = shipping.replace(16, 4, "$5.99");
    cout<<"New string: "<<rep_free<<endl;

    // 6. Complete the code: Declare gravity = 9.8 as a constant. Use the constant value to calculate
    // the height of a falling object. The free falling formula is height = 0.5*gravity*time*time. Print the
    // result with 1 decimal place. 
    // Given:
	//     float time = 10.25, height;

    const float gravity = 9.8;
    float time = 10.25, height;
    height = 0.5 * gravity * time * time;
    cout<<"Height = "<<height<<endl;
    cout.setf(ios::fixed);
    cout.precision(1);
    cout<<"One decimal place = "<<height<<endl;

    // 7. What is the final value of f?
    // Given: 
	// 	   	int d=2, e=4;
    //      bool f = 0;
    //      f = (e%d==0);

    int d = 2, e = 4;
    bool f = 0;
    f = (e % d == 0);
    cout<<f<<endl;

    // 8. Error detection: given the following code, when is run in the terminal,
    // the compiling process showed an error: 

    double number, dbNumber;
    cout<<"Enter a number: ";
    cin>>dbNumber;
    number = dbNumber;
    dbNumber *= 2.0;
    cout<<"The double of number "<<number<<" is "<<dbNumber<<endl;

    // Which line has an error? 			12						
    // What is the error due to? 			Using an integer variable to store a double value, which causes loss of data.						
    // What should be done to correct the error? 		Remove the integer variable and use a double variable to store the value instead.
    
    // 9. Write a C++ statement that will:
    // Validate that “i is even AND not a multiple of 3”. Print the result. Given: 
    int i;
    cout<<"Type a number: "<<endl;
    cin>>i;

    // Added code
    bool checki = (i % 2 == 0) && (i % 3 != 0);
    cout<<"Is i even and not a multiple of 3? "<<checki<<endl;

    // Code Tracing 

    // Trace the following code.
    // Fill in all requested values (integer and Boolean) on the right-hand side.

    // int x=1, y=2;
    // cout << x << " " << y << endl;
    // if(x > y){
    //     x = y;
    // }
    // cout << x << " " << y << endl;
    // if(x % 2 != 0) {
    //     x = y++; // increment both x and y by 1
    // }
    // else  {
    //     y = x++;
    // }
    // cout << x << " " << y << endl;
    // y += x;
    // cout << x << " " << y << endl;

    // Create a C++ that will calculate the final grade of a student and display its GPA. The program will ask the user to enter three grades: midterm exam, final exam, and lab. 
    
    double midterm, final, lab;
    cout<<"Enter Three Grades"<<endl;
    cout<<"Midterm: ";
    cin>>midterm;
    cout<<"Final: ";
    cin>>final;
    cout<<"Lab: ";
    cin>>lab;

    double final_grade = (midterm*0.25) + (final*0.4) + (lab*0.35);

    cout.setf(ios::fixed);
    cout.precision(1);
    
    if(final_grade <= 100 && final_grade >= 90){

        cout<<"Final Grade "<<final_grade<<", GPA = A"<<endl;
    }
    else if(final_grade <= 89 && final_grade >= 80)
        cout<<"Final Grade "<<final_grade<<", GPA = B"<<endl;
    else if(final_grade <= 79 && final_grade >= 70)
        cout<<"Final Grade "<<final_grade<<", GPA = C"<<endl;
    else if(final_grade <= 69 && final_grade >= 60)
        cout<<"Final Grade "<<final_grade<<", GPA = D"<<endl;
    else if(final_grade >= 59)
        cout<<"Final Grade "<<final_grade<<", FAIL"<<endl;
    else
        cout<<"\nInvalid grade"<<endl;

    // Part 2: switch statement: radio station
    // For part 2, create a C++ program that will ask the user to select a radio station among the five stations from the list. The program will use switch statement to make the selection using characters. 
    char radio;
    cout<<"Select a radio station among the five stations"<<endl;
    cout<<"A for ESPN New York"<<endl; 
    cout<<"B for Z100 New York"<<endl; 
    cout<<"C for La Mega"<<endl; 
    cout<<"D for Classic Rock"<<endl; 
    cout<<"E for WCBS News"<<endl;
    cin>>radio;

    switch(radio)
    {
        case'a':
        case'A':
            cout<<"You are listening to ESPN New York station"<<endl;
            break;
        case'b':
        case'B':
            cout<<"You are listening to Z100 New York station"<<endl;
            break;
        case'c':
        case'C':
            cout<<"You are listening to La Mega station"<<endl;
            break;
        case'd':
        case'D':
            cout<<"You are listening to Classic Rock station"<<endl;
            break;
        case'e':
        case'E':
            cout<<"You are listening to WCBS News station"<<endl;
            break;
        default:
            cout<<"Invalid"<<endl;
            break;
    }



    return 0;
}