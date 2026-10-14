class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> num_map;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int compliment=target-nums[i];
            if(num_map.count(compliment)){
                return{num_map[compliment],i};
            }
            num_map[nums[i]] = i;
        }   
        return {};
    }
};