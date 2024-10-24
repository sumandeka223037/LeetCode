class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int first = INT_MAX;  
        int second = INT_MAX; 
        for (int num : nums) {
            if (num <= first) {
                first = num;
            } else if (num <= second) {
                second = num; 
            }else{
                return true;
            }
        }

        return false; 

        //passed 67/84 testcases and 68 testcase is wrong in leetcode

        // int n = nums.size();
        // for (int i = 0; i < n-2; i++) {
        //     if (nums[i] < nums[i + 1] && nums[i + 1] < nums[i + 2]) {
        //         return true;
        //     }
        // }
        // return false;
    }
};