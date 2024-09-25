class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // int ans;
        // sort(nums.begin(), nums.end());
        // for(int i:nums){
        //     ans=count(nums.begin(),nums.end(),i);
        //     if(ans>1){
        //         return i;
        //     }
        // }
        // return 0;                  --------->only 54/59 testcases passed

        //using hash map
        unordered_set<int> ans;
        for (int i : nums) {
            if (ans.count(i)) {
                return i;
            }
            ans.insert(i);
        }
        return -1;
    }
};