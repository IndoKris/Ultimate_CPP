#include<iostream>
#include<set>

using namespace std;
// SET : ORDERED AND UNIQUE 
void ExplainSet(){
    set<int> st ;
    st.insert(3);
    st.emplace(34);
    st.insert(2);
    st.emplace(5);

    auto it = st.find(34);
    st.erase(34);

    auto it1 = st.lower_bound(2);
    auto it2 = st.upper_bound(3);
}

// sorted but not unique !
void Multiset(){
    multiset<int> ms ;
    ms.emplace(1);
    ms.emplace(1);
    ms.insert(2);
    ms.insert(2);
    ms.emplace(1);
    ms.emplace(1);

    // ms.erase(1);  -> remove all 1's from set

    ms.erase(ms.find(1)); // -> remove only one 1 

    ms.erase(ms.find(1), ms.find(2));

}
void UnorderedSet(){
    // unordered {not sorted} and unique
    // Time complexity -> O(1)
    // lower_bound and upper_bound doesn't work 
}

int main(){
    ExplainSet();
    Multiset();
    UnorderedSet();
    return 0 ;
}