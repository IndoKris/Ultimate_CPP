#include<iostream>
#include<map>

using namespace std;

// unique keys in sorted order 
void ExplainMap(){
    map<int,string> mpp;

    mpp[3] = "Aditya";
    mpp.insert({2,"krish"});
    mpp.emplace(1,"roshani");
    for (auto it : mpp){
        cout << it.first << " " << it.second << " ";
    }
    auto it =mpp.find(3);
    cout << it->second ; // for string 
    // *(it).second; for int data type

    auto itt = mpp.find(5);
}

void Multimaps(){

    //store multiple keys , duplicate keys
    // mpp[key] cannot be used here 
}


void UnorderedMap(){
    // not sorted , but unique keys 
    // TC: O(1)
}

int main(){
    ExplainMap();
    return 0;
}