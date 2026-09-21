class Solution {
public:
    string defangIPaddr(string address) {
        string result ;
        for(auto it : address){
            if(it == '.') result += "[.]";
            else result += it;    
        }
        return result;
        
    }
};