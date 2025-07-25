#include<iostream>
#include<vector>
#include<algorithm> // Required for sort
using namespace std; 

// Custom comparator should be outside the function or declared as static/lambda
bool comp(pair<int,int> p1, pair<int,int> p2) {
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    return p1.first > p2.first;
}

void explainExtra(){
    vector<int> v = {12,42,64,24,91,9};
    int a[4] = {21,5,1,93};

    sort(a, a + 4); 
    // To sort in decreasing order
    // sort(a, a + 4, greater<int>());

    cout << "Sorted array: ";
    for(int i = 0; i < 4; i++) cout << a[i] << " ";
    cout << "\n";
    // Maps can't be sorted manually, sorted by key by default
    // Sorting the vector
    sort(v.begin(), v.end());

    cout << "Sorted vector: ";
    for(int val : v) {
        cout << val << " ";
    }
    cout << "\n";

    // MY WAY!
    // sort 2nd element in ascending order, if same then 1st in descending
    pair<int,int> arr[] = {{1,5},{1,2},{2,3},{6,2}};
    sort(arr, arr + 4, comp);

    cout << "Sorted pairs: ";
    for(int i = 0; i < 4; i++) {
        cout << "{" << arr[i].first << "," << arr[i].second << "} ";
    }
    cout << "\n";

    //build in popcorn -> to find no. of binary 1's or set bits
    int num = 7;
    cout << "num 7 : set bits " << __builtin_popcount(num) << endl;
    long long num1 = 124252542352525;
    cout << "num 124252542352525 : set bits " << __builtin_popcountll(num1) << endl;
    
    // Permutation of a String 
    string name = "Kim" ; 
    do {
        cout << name << endl ;
    }while(next_permutation(name.begin(),name.end()));
    // while using a number in string , always use a sorted string 

    string n = "321"; // should have 6 combinations
    do {
        cout << n << endl ;
    }while(next_permutation(n.begin(),n.end()));


    string n2 = "123";
    do{
        cout << n2 << endl ;
    }while(next_permutation(n2.begin(),n2.end()));

    // finding max in array 
    int max = *max_element(a,a+4);
    cout << max ;
}

int main() {
    explainExtra();
}
