class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int res=0;
        for(int i:nums){
           res^=i;
    }
    return res;
    }
};