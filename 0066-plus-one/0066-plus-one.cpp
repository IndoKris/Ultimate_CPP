class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        
        
        for (int i = n - 1; i >= 0; i--) {
            // If not 9, just add 1 and we're done
            if (digits[i] != 9) {
                digits[i] += 1;
                return digits;
            }
            // If it's 9, set to 0 and let the loop carry over
            digits[i] = 0;
        }
        
        // If we get here, all digits were 9 (like [9,9,9])
        digits[0] = 1;          // change first 0 to 1
        digits.push_back(0);    // add a 0 at the end -> [1,0,0,0]
        return digits;
    }
};