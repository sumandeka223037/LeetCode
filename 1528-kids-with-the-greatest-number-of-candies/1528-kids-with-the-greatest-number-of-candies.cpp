class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        int maxcandies = *max_element(candies.begin(), candies.end());
        int n = candies.size();
        for (int j = 0; j < n; j++) {
            int sum = candies[j] + extraCandies;
            if (sum >= maxcandies) {
                result.push_back(true);
            } else {
                result.push_back(false);
            }
        }
        return result;
    }
};