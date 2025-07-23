#include<iostream>
#include<list>
using namespace std;

void ExplainList(){
    list<int> ls;
    ls.push_back(25);
    ls.emplace_back(69);
    ls.push_front(52);
    ls.emplace_front(96);
    // rest functions are same as vectors 
    
}

int main() {
    ExplainList();
    return 0;
}