#include<iostream>
using namespace std;

void pattern10(int n){
    for(int i = 0 ; i < n ; i++){
        for(char ch = 'A'; ch <= 'A' + (n - i - 1); ch++){
            cout << ch << " ";
        }
        cout << endl ;
    }
}

int main(){
    int n = 5;
    pattern10(n);
}
