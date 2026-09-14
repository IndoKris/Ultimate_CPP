class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int actual_sum = 0 ;
        int sum = 0 ;

        for( int i = 1; i<= n; i++){
            sum = sum + i ;
        }
        for( int i = 0 ; i < n ;i++){
            actual_sum = actual_sum + nums[i];
        }
        return (sum-actual_sum);
    }
};