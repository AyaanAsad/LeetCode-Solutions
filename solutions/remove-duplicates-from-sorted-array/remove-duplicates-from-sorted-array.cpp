class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int p1=0;
        int p2=0;int count=0;
        while(p2!=nums.size()){
            if(nums[p2]!=nums[p1] && nums[p2]<nums[p1]){
                p2++;
            }else if(nums[p2]==nums[p1]){
                while(p2!=nums.size() && nums[p2]==nums[p1]){
                    p2++;
                }
                if(p2==nums.size()){
                    break;
                }
                p1++;count++;
                swap(nums[p2],nums[p1]);
            }else if(nums[p2]!=nums[p1] && nums[p2]>nums[p1]){
                p1++;count++;
                swap(nums[p2],nums[p1]);
            }
        }
        return count+1;
    }
};