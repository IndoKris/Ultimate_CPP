
#include<iostream>
using namespace std;

// pass by reference  
void doSomething(string &name){ // use of '&' will use the original memory not a copy
cout << "Name : " << name << endl ;
name[0] = 'T';
cout << "Name : " << name << endl ;

}
int main(){
    string name ;
    cin >> name;
    doSomething(name);
    cout << "Name (main): " << name << endl ;
    return 0;
}