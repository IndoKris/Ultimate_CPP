#include<iostream>
#include<map>

using namespace std;

// unique keys in sorted order 
void ExplainMap(){
    map<int,string> mpp;

    mpp[3] = "Aditya";
    mpp.insert({2,"krish"});
    mpp.emplace({1,"roshani"});


}
int main(){
    ExplainMap();
    return 0;
}