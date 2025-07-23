
#include<iostream>
using namespace std;
/*
    TAKE DAY NUM AS PRINT CORRESPONDING DAY
    FOR 1 PRINT MONDAY 
    FOR 2 PRINT TUESDAY
    ...
*/

int main(){
    int day = 0;
    cout << "Enter Day Num: ";
    cin >> day ;

    switch (day)
    {
    case 1:
        cout <<"Monday"<< endl;
        break;

    case 2:
        cout <<"Tuesday"<< endl;
        break;
    
    case 3:
        cout <<"Wednesday"<< endl;
        break;
    
    case 4:
        cout <<"Thursday"<< endl;
        break;
    
    case 5:
        cout <<"Friday"<< endl;
        break;

    case 6:
        cout <<"Saturday"<< endl;
        break;
    
    case 7:
        cout <<"Sunday"<< endl;
        break;

    default:
        cout <<"Enter a valid number.";
        break;
    }

    return 0;
    
}