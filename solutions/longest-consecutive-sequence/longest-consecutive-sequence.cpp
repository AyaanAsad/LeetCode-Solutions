class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numbers(nums.begin(), nums.end());
        int count = 1;
        int max = 0;
        for (int currNum : numbers) {
            if (numbers.count(currNum - 1)) {
                continue;
            }
            while (numbers.count(currNum + 1)) {
                currNum++;
                count++;
            }

            if (count > max) {
                max = count;
            }
            count = 1;
        }
        return max;
    }
};