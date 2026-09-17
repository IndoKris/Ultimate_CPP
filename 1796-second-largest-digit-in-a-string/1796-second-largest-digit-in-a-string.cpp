class Solution {
public:
    int secondHighest(string s) {
        vector<int> freq(10,0);
        for(char ch : s){
            if(isdigit(ch)){
                int digit = ch - '0';
                freq[digit]++;
            }
        }
        bool largestFound = false;
        for(int i=freq.size()-1 ;i >= 0; i--){
            if(freq[i]>0){
                if(largestFound == false){
                    largestFound = true ;
                }
                else{
                    return i;
                }
            }
        }
        return -1;
    }
};