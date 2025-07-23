 
#include<iostream>
using namespace std;
//using math lib
// lol i'm creating a function of a already existing function XD 

int findMin(int num1 , int num2){
    return min(num1,num2);
}
int main(){
    int num1 , num2 , res;
    cin >> num1 >> num2 ;
    res = findMin(num1,num2);
    cout << "Minimum is :" << res << endl ;

}
// TODO: Remember this that if for some reason a function doesn't return any value then it will provide you a garbage value as the function was looking for a return statement and it didn't got any that's why !!!
