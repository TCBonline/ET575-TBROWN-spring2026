/*
Tristan Brown
April 27, 2026
lab 20, parsing and file handeling
*/
#include <iostream>

using namespace std;

// example 1: using cin to valiudate a data type
// if the input is a proper data type, cin will set a state to 'goodbit'
// if the input is not a proper data type, cin will set a state to 'failbit'

// function to collect and return an integer
int collectnum(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(cin.fail()){
        cout<<"Wrong data type!"<<endl;
        cin.clear();
        cin.ignore(10000, '\n');
        // recollect the number
        return collectnum();
    }
    else{
        return n;
    }
}

// example 2: read file
// input file = ifstream
// output file = ofstream
// fstream has ifstreeam and ofstream
// after the library we can declare an ifstream and ofstream objects
#include <fstream>
void readfile(){
    // declare an object to handle ifstream
    ifstream fin;
    // delare a variable to hold each line of the read line
    string line;
    // declare a variable as a line counter
    int linecounter = 1; // first line
    // open the file
    fin.open("samplefile.txt");
    // usa a loop to go through each line in the opened file
    while(getline(fin, line)){
        cout<<"Sentence "<<linecounter<<" = "<<line<<endl;
        linecounter++;
    }

    // close the file input when finished reading or it remains open
    fin.close();
}

// example 3: write files
// function to write or create a new file
void writefile(string filename){
    // declare an object to handle output files, fout
    ofstream fout;
    // open the file
    // if the file exists, it will be overwritten
    // if the file doesn't exist, it will create a new file
    fout.open(filename);
    // write "student's full name" in the first line of file
    fout<<"LAB 20, file streaming"<<endl;
    fout<<"April 27, 2026";
    // close the file output when finished writing
    fout.close();
}

// example 4: append datte to an existing file
void appendmsg(string fileame, string msg){
    ofstream fout;
    fout.open(fileame, ios::app);
    // append the following data
    for(int n = 3; n >= 0; n--){
        fout<<n<<endl;
    }
    fout<<"GAME OVER "<<msg<<endl;

    fout.close();
}

// EXERCISE
// define three functions:
// a function to create a file named 'data_user.txt'. The program should write the following line in the text file:
    // “This is my output file – Type your full name.\n”
void createfile(string filename){
    ofstream fout;
    fout.open(filename);
    fout<<"This is my output file - Type your full name."<<endl;
    fout.close();
}

// a function to append a new message to the file name 'data_user.txt'. The new message is passed to the function as an argument.
void append_newmsg(string fileame, string msg){
    ofstream fout;
    fout.open(fileame, ios::app);
    fout<<msg<<endl;
    fout.close();
}

// a function to read a file. The file name should be passed to the function as an argument.
void read_newfile(string fileame){
    ifstream fin;
    string line;
    int linecounter = 1;
    fin.open("data_user.txt");

    while(getline(fin, line)){
        cout<<line<<endl;
        linecounter++;
    }
    fin.close();
}