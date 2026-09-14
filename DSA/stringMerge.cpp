// 1768. Merge Strings Alternately

#include <iostream>
#include <string>
#include <vector>
using namespace std;
string mergeAlternately(string word1, string word2) {
    string merged ;
    for( int i = 0 ; i < max(word1.length(),word2.length());i++){
        if (i < word1.length()) 
            merged.push_back(word1[i]);
        if (i < word2.length()) 
            merged.push_back(word2[i]);
    }
    return merged ;
}

int main(){
    string word1 = "ab";
    string word2 = "pqr";
    string result = mergeAlternately(word1,word2);
    cout << result << " ";
    }