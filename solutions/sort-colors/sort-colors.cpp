class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zp=0; int tp=nums.size()-1; int index=0;
        while(index<=tp){
            if(nums[index]==0){
                swap(nums[index],nums[zp]);
                zp++;index++;
            }
            else if(nums[index]==1){
                index++;
            }
            else if(nums[index]==2){
                swap(nums[index],nums[tp]);
                tp--;
            }
        }
    }
};