class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       // int ans;
        unordered_set<int>ans;
        for(int i:nums){
            //ans=count(nums.begin(),nums.end(),i);
            if (ans.count(i)) {
                return i;
            }
            ans.insert(i);
            }
        return -1;
    }
};