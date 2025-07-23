
#include<iostream>
using namespace std;

// string are in ""
// characters are in ''
int main(){
    string name ;
    cout << "enter name: " ;
    cin >> name ;
    int len = name.size();
    cout << "Name : " ;
    cout << "First letter : "<< name[0] << endl;
    cout << "Last letter : "<< name[len-1];
    return 0 ;
}