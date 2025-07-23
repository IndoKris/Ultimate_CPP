#include<iostream>
#include<vector>
using namespace std;

void ExplainVector(){
    // DEFINING a vector 
    vector<int> vectorName ; 
    vectorName.push_back(1);
    vectorName.emplace_back(2); //better and faster than push_back()
    cout << vectorName[0] << " " << vectorName[1] << endl ;
    // vectorName[0] <-> vectorName.at(0)

    // using PAIR data type
    vector<pair<int,int>> VP;
    VP.emplace_back(1,2) ;
    VP.push_back({1,2}) ;

    // PRE-DEFINING 
    vector<int> v1(5,100); // {100,100,100,100,100}
    vector<int> v2(5); // either {0,0,0,0,0} or garbage values

    cout << v1[2] << " ";
    cout << v2[3] << " " << endl ; 

    // BEGIN FUNCTION : points to 1st element
    vector<int>::iterator it = v1.begin(); 

    // END FUNCTION : Points after the last element 
    vector<int>::iterator iT = v1.end();
    iT--;                               // to access end element 

    // BACK FUNCTION : Points at the end element 
    cout << vectorName.back() << endl; // to access the end element 
    cout << *(iT) << " ";


    // ITERATING / ACCESSING : BEST WAY 
    for(int i : v1){            // using loop to iterate all elements {alternate in end}
        cout << *(it) << " " ; // just to iterate single element 
        it++;
    }
    cout << endl ;

    // ACCESSING all elements of vector 
    for(vector<int>::iterator IT =v1.begin(); IT != v1.end(); IT++){ 
        cout << *(IT) << " " ;
    // 2nd way 
    }

    // 3rd way 
    for(auto iter =v2.begin() ; iter != v2.end() ; iter++){
        cout << *(iter) << " " ;
    }

    // ERASE FUNCTION : for deleting the elements 
    v1.erase(v1.begin()+1); // delete the 2nd element 

    vector<int> VecTor = {10,20,12,23,25};
    VecTor.erase(VecTor.begin()+1,VecTor.begin()+2); 
    // [start,end) ,end is pointing after the element we want to delete , left with : {10,23,25}
    
    // INSERT FUNCTION : to add element in vector 

    VecTor.insert(VecTor.begin()+1, 1 , 55 ); 
    // SYNTAX : vectorname.insert(position , no. of times , element )

    // INSERTiNG A VECTOR 
    vector<int> vect(2,69);
    VecTor.insert(VecTor.begin(), vect.begin() , vect.end());

    /* 
    REMAINING FUNCTIONS 
    vectorName.size() -> provides no. of element in vector 
    vectorName.pop_back() -> pops the last element 
    vector1.swap(vecto2) -> swaps vector1 with vector2
    vector.clear() -> all elements cleared , empty vector {}
    vector.empty() -> True if empty otherwise False     
    */ 
}

int main(){
    ExplainVector(); 
}