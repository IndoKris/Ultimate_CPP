#include<iostream>
#include<stack>
using namespace std;

void ExplainStack(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    cout << st.top() << endl ;
    st.pop();
    cout << st.top()<< endl ;
    
    cout << st.empty() << endl;
    cout << st.size(); 
    
    stack<int> stk ,stak;
    stk.swap(stak);

}

int main() {
    ExplainStack();
    return 0;
}