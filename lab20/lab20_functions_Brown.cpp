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
