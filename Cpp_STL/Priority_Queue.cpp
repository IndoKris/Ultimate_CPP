#include<iostream>
#include<queue>
using namespace std;

void ExplainPQueue(){
    priority_queue<int> pq; // called MAX HEAP 
    pq.push(15);
    pq.push(322);
    pq.push(35);
    pq.push(43);
    pq.emplace(95);
    cout << pq.top() << "\n"; // provides the largest no. 
    pq.pop(); 
    cout << pq.top() << "\n";
    // rest similar to stack : size , swap , empty, etc

    // Minimum Heap or Minimum Priority Queue 
    priority_queue<int, vector<int> , greater<int>> pqmin ;
    pqmin.push(15);
    pqmin.push(322);
    pqmin.push(35);
    pqmin.push(43);
    pqmin.emplace(95);
    cout << pqmin.top() << "\n"; // provides the smallest no.
    pqmin.pop();
    cout << pqmin.top() << "\n";
}

int main() {
    ExplainPQueue();
    return 0;
}