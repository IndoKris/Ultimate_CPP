#include<iostream>
using namespace std;

int main(){
    // string , getline , char 

    string name ;
    string quote ;
    char choice ;

    cout << "Enter your name : ";
    cin >> name ;

    cout << " \nWhat's your choice (Y/N): ";
    cin >> choice ;

    cin.ignore(); // <-- This clears the newline character left in the buffer

    cout << "\nTell me a quote : ";
    getline(cin,quote);

    
    cout << "\nName : " << name << "\n";
    cout << "Choice : " << choice << "\n";
    cout << "Quote : " << quote << "\n";
    return 0 ;
}