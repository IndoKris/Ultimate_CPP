#include <iostream>
using namespace std;

void pattern1(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << i+1 ;
        }
        cout << "\n";
    }
}
int main(){
    int n;
    cout << "Enter Num: ";
    cin >> n ;
    pattern1(n);
}