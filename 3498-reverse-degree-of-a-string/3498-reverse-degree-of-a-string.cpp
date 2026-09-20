class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0;
        for (int i = 0; i < s.size(); i++) {
            int revValue = 26 - (s[i] - 'a');   // a=26, b=25, ..., z=1
            int position = i + 1;                // convert 0-indexed i to 1-indexed position
            sum += revValue * position;
        }
        return sum;
    }
};