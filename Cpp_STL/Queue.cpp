#include<iostream>
#include<queue>
using namespace std;

void ExplainQueue(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.emplace(5); // {1,2,3,4,5}

    cout << q.back() << endl ; // 5
    cout << q.front() << endl ; // 1
    q.pop();
    cout << q.front() << endl ;
    // rest similar to stack : size etc
}

int main() {
    ExplainQueue();
    return 0;
}