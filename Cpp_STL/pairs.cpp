#include<iostream>
using namespace std;

void Explainpair(){
    pair<int,int> p = {24,69};
    cout << p.second <<" "<< p.first << endl;

    // nested pair 
    pair<int, pair<int,int>> np = {74,{28,82}};
    cout << np.first << " " << np.second.second << endl;
}

int main() {
    Explainpair();
    return 0;
}