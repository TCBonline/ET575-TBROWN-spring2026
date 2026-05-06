/*
Tristan Brown
Homework 10 - file streaming
*/
#include <iostream>
#include <fstream>

using namespace std;

// Define a function to read the contents of the text file and display them on the console, Terminal. The name of the file should be passed to the function as argument.
void readcontents(string filename){
    ifstream fin;
    string eachline;
    fin.open(filename);

    while(getline(fin, eachline)){
        cout<<eachline<<endl;
    }
    fin.close();
}

// Define a function to count the number of words in a file and write the count in a new file named ‘wordcounts.txt’. The ‘wordcounts.txt’ should write the result as:
    // Student’s full name

    // Total number of words:
void count(string filename, string filename2 ,string msg){
    ifstream fin;
    string eachline;
    int wordcount = 0;
    fin.open(filename2);

    while(getline(fin, eachline)){
        for(int i = 0; i < eachline.length(); i++){
            if(eachline[i] == ' '){
                wordcount++;
            }
        }
        wordcount++;
    }
    fin.close();

    ofstream fout;
    fout.open(filename);
    fout<<msg<<endl;
    fout<<"Total number of words: "<<wordcount<<endl;
    fout.close();
}

// Define a function to count the number of time that the word ‘Earth’ appears on the file. Append the result to file ‘wordcounts.txt’ as:
    // The word ‘Earth’ appears ____ times in the document.

    // Where the blank is the number of times that the word ‘Earth’ appears on the file ‘wordcounts.txt’.
void countEarth(string filename, string filename2){
    ifstream fin;
    string eachline;
    int earthcount = 0;
    fin.open(filename2);

    while(getline(fin, eachline)){
        for(int i = 0; i < eachline.length(); i++){
            if(eachline[i] == 'E' && eachline[i+1] == 'a' && eachline[i+2] == 'r' && eachline[i+3] == 't' && eachline[i+4] == 'h'){
                earthcount++;
            }
        }
    }
    fin.close();

    ofstream fout;
    fout.open(filename, ios::app);
    fout<<"The word 'Earth' appears "<<earthcount<<" times in the document."<<endl;
    fout.close();
}