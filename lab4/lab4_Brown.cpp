/*
Tristan Brown
lab 4, string and string methods
Feb 2, 2026
*/
#include <iostream>
#include <string>

using namespace std;

int main(){
    cout<<"\n ---- example 1: string indexing ---- "<<endl;
    // each character in a string can be accessed by its index number
    // index starts from 0, most-left character
    string firstname = "Peter";
    cout<<"The 4th character of the first name = "<<firstname[3]<<endl;
    cout<<"The 3rd character of the first name = "<<firstname.at(2)<<endl;

    cout<<"\n ---- example 2: string length ---- "<<endl;
    // length method returns the amout of chracters in a string
    int firstname_length = firstname.length();
    cout<<"First name has "<<firstname_length<<" characters"<<endl;

    cout<<"\n ---- example 3: add or concatenate strings ---- "<<endl;
    // + operator adds or concatenates strings
    string color = "orange";
    string animal = "cat";
    string addstrings = "My " + animal + " loves "+ color + " toys ";
    cout<<addstrings<<endl;
    cout<<color+animal<<endl;

    cout<<"\n ---- example 4: subtract characters from a string ---- "<<endl;
    // substr() method subtracts(extracts) characters from a string
    // substr(index from where the subtraction would happen, amount from characters to be extracted)
    string city = "Bayside";
    string sub_char = city.substr(3, 4); // subtract 4 characters from index 3
    cout<<"Subtracted characters = "<<sub_char<<endl;

    cout<<"\n ---- example 5: insert characters into a string ---- "<<endl;
    // insert new characters into a string
    // insert (index from where the new characters will be inserted, characters to be inserted)
    // insert Queens- into Bayside. The result should be  = BayQueens-side
    city.insert(3, "Queens-");
    cout<<"After insert method = "<<city<<endl;

    cout<<"\n ---- example 6: add characters to the end of a string ---- "<<endl;
    // add method adds characters to the end of a string
    string fullname = "Peter Pan";
    // add the word "@neverland" to the end of the full name. The result should be Peter Pan@neverland
    fullname.append("@neverland");
    cout<<"After append method = "<<fullname<<endl;

    cout<<"\n ---- example 7: replace characters in a string ---- "<<endl;
    // replace method replaces characters in a string
    // replace(index where the replacement will happen, amount of characters to be replaced, string of new replace character)
    string word = "engineering";
    cout<<"Original word = "<<word<<endl;
    // replace the word 'ee' with 'FUTURE'. The result will be "enginFUTUREring"
    word.replace(5, 2, "FUTURE");
    cout<<"After the replace method = "<<word<<endl;

    cout<<"\n ---- example 8: erase characters in a string ---- "<<endl;
    // erase(index where erase will happen, amount of characters to be erased)
    word = "layout";
    cout<<"Original word = "<<word<<endl;
    // erase 'you' from the word. The result should be 'lat'
    word.erase(2, 3); // erase three characters from index 2
    cout<<"After erase method = "<<word<<endl;

    cout<<"\n ---- example 9: find characters in a string ---- "<<endl;
    // find method returns the index of the first found character
    word = "characters";
    // find letter 'a' from word
    int index_a = word.find("a");
    cout<<"Index for a = "<<index_a<<endl;
    // find the index for 'act'
    cout<<"Index for 'act' = "<<word.find("act")<<endl;

    cout<<"\n ----- EXERCISE ----"<<endl;
    cout<<"Enter a new word: ";
    cin>>word;

    // print the 2nd character of the word
    cout<<"2nd character: "<<word[1]<<endl;

    // find and print the length of the word.
    int word_length = word.length();
    cout<<"Word has: "<<word_length<<" characters"<<endl;

    // replace 2 characters from the 3rd character with "-- $ --" . Print result
    cout<<"Original word = "<<word<<endl;
    word.replace(3, 2, "-- $ --");
    cout<<"Replaced word: "<<word<<endl;
    // Original word = Strawberry
    // Replaced word: Str-- $ --berry

    // remove 3 characters from the end of the word. Print result
    cout<<"Original word = "<<word<<endl;
    word.erase(word.length()-3);
    cout<<"Remove end characters: "<<word<<endl;
    // Original word = Str-- $ --berry
    // Remove end characters: Str-- $ --be













    
    return 0;
}