
#include<iostream>
using namespace std;

int main(){
    // array (1D)
    int arr[5];
    cout << "Enter array elements: ";
    for(int i = 0; i < 5;i++){
        cin >> arr[i];
    } 

    for(int i = 0; i < 5;i++){
        cout << arr[i] << "\t";
    } 
    cout << endl;
    return 0;
}