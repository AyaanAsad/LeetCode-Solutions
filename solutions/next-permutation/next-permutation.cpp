class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int min = INT_MAX;
        int pivotLoc = nums.size() - 1;
        int minLoc = nums.size() - 1;
        for (int i = nums.size() - 1; i > 0; i--) {
            if (nums[i] > nums[i - 1]) {
                pivotLoc = i - 1;
                break;
            }
        }
        for (int i = nums.size() - 1; i > 0; i--) {
            if (nums[i] > nums[pivotLoc]) {
                minLoc = i;
                break;
            }
        }
        if (pivotLoc == nums.size() - 1) {
            reverse(nums.begin(), nums.end());
        } else {
            swap(nums[pivotLoc], nums[minLoc]);
            reverse(nums.begin() + pivotLoc + 1, nums.end());
        }
    }
};