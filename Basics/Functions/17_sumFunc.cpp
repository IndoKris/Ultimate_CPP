

#include<iostream>
using namespace std;

// wap to print sum of 2 numbers

int sum(int a , int b){
    return (a+b);
}

int main(){
    int a , b;
    cin >> a >> b ;
    cout << "Sum : " << sum(a,b) << endl ;
    return 0;
}