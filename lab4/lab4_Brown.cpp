include iostream

using namespace std

int main{
    cout<<"\n ---- example 1: string indexing ---- "<<endl;
    // each character in a string can be accessed by its index number
    // index starts from 0, most-left character
    string firstname = "Peter";
    cout<<"The 4th character if the first name = "<<firstname[3]<<endl;
    cout<<"The 3rd character if the first name = "<<firstname[2]<<endl;

    cout<<"\n ---- example 9: find characters in a string ---- "<<endl;
    // find method returns the index of the first found character
    word = characters;
    // find letter 'a' from word
    int index_a = word.find("a");
    cout<<"Index for 'act' "<<word.find("act")<<endl;

    cout<<" ----- EXERCISE ----"<<endl;
    cout<<"Enter a new word: ";
    cin>>word;

    // print the 2nd character of the word
    cout<<"The 2nd character of the entered word = "<<word[1]<<endl;
    
    return 0;
}