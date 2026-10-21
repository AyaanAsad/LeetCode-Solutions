class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int p1 = 0;
        int p2 = 0;
        while (p2 != nums.size()) {
            if (nums[p2] != nums[p1]) {
                if (nums[p2] < nums[p1]) {
                    p2++;
                } else {
                    p1++;
                    swap(nums[p2], nums[p1]);
                }
            } else {
                while (p2 != nums.size() && nums[p2] == nums[p1]) {
                    p2++;
                }
                if (p2 == nums.size()) {
                    break;
                }
                p1++;
                swap(nums[p2], nums[p1]);
            }
        }
        return p1 + 1;
    }
};