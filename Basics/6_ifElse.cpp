#include<iostream>
using namespace std;

int main(){
    // write a program that takes input as the age and tells whether you are adult or not
    int age ;
    cout << "Enter age: ";
    cin >> age ;
    if(age < 18)
        cout << "You are a minor !\n";
    else
        cout << "You are an Adult !\n";
    return 0;
}