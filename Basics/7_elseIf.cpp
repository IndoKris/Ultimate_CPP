#include<iostream>
using namespace std;

int main(){
    int grade ;
    cout << "Enter your grade : ";
    cin >> grade ;

    if(grade >= 80 && grade <=100)
        cout << ("Grade A \n");

    else if(grade >= 60 && grade <=79)
        cout << ("Grade B \n");

    else if(grade >= 50 && grade <=59)
        cout << ("Grade C \n");

    else if(grade >= 45 && grade <=49)
        cout << ("Grade D \n");

    else if(grade >= 29 && grade <=44)
        cout << ("Grade E \n");
    
    else
        cout << ("You failed ! \n");

    return 0;
}