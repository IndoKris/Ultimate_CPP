#include <iostream>
using namespace std;

int main()
{
    /*
    Take the age from the user and then decide accordingly
    1. If age < 18,
       print -> not eligible for job
    2. If age >= 18,
       print -> "eligible for job"
    3. If age >= 55 and age <= 57,
       print -> "eligible for job, but retirement soon."
    4. If age > 57
       print -> "retirement time"
    */
    int age ;
    cout << "Enter age: ";
    cin >> age; 
    
    if(age < 18){
        cout << "not eligible for job" << endl;
    }
    else if (age <= 57){
        cout << "eligible for job";
        if (age >= 55){
            cout << ", but retirement soon." << endl ;
        }
    }
    else {
        cout << "Retirement time.";
    }
    return 0;
}