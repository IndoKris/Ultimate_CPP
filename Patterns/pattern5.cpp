#include <iostream>
using namespace std;

void pattern1(int n){
    for(int i = 1; i <= n; i++){
        for(int j = n; j >= i; j--){
            cout << "*" ;
        }
        cout << "\n";
    }
}
int main(){
    int n;
    cin >> n ;
    pattern1(n);
}