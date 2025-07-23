#include<iostream>

using namespace std;

void ExplainDeque(){
    deque<int> dq ;
    dq.push_back(1);
    dq.push_front(24);
    dq.emplace_back(68);
    dq.emplace_front(24);
    
    dq.pop_back();
    dq.pop_front();

    dq.back();
    dq.front();
// rest similar like vector : rend , rbegin ,begin , end ,clear , insert , swap ,size
    
}

int main() {
    ExplainDeque();
    return 0;
}