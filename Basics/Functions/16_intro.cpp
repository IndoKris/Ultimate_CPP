
#include<iostream>
using namespace std;
/*
TYPES OF FUNCTIONS :
1. VOID -> does not return anything / no return value 
2. RETURN -> 
3. PARAMETERISED -> 
4. NON-PARAMETERISED ->  
*/

// this function is ex of a void - parameterised function
void greetings(string name){
    cout << "Heyaaaa " << name << "!!"<<endl;
}
int main(){
    string name;
    cout << "Name :";
    cin >> name;
    greetings(name);

}