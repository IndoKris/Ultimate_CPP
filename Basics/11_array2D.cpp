
#include<iostream>
using namespace std;

int main() {
    // array (2D)
    int arr[2][3];
    cout << "Enter 2D array elements: ";
    for(int i = 0; i < 2;i++) {
        for(int j=0; j<3;j++) {
            cin >> arr[i][j];
        }
    } 
    for(int i = 0; i < 2;i++) {
        for(int j=0; j<3;j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    } 
    return 0;
}