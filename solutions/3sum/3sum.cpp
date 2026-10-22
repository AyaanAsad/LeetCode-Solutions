class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> uniqueTriplets;
        sort(nums.begin(),nums.end());
        for (int i = 0; i < nums.size(); i++) {
            if (i > 0 && nums[i] == nums[i - 1]){
                continue;
            }
            int x = nums[i];
            int target = -1 * x;
            unordered_map<int, int> map;
            for (int j = i + 1; j < nums.size(); j++) {
                int compliment = target - nums[j];
                if (map.count(compliment)) {
                    uniqueTriplets.insert({x, compliment, nums[j]});
                }
                map[nums[j]] = j;
            }
        }
        return vector<vector<int>>(uniqueTriplets.begin(), uniqueTriplets.end());
    }
};