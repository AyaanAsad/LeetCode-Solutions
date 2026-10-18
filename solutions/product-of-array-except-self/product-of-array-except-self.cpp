class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // unordered_map<int,int> numbers_map;
        // for(int i=0; i<nums.size(); i++){
        //     numbers_map[i]=nums[i];
        // }
        // vector<int> result;
        // for(int i=0; i<nums.size(); i++){
        //     int j=0;result.push_back(1);
        //     while(j<nums.size()){
        //         if(i!=j){
        //             result[i]=result[i]*nums[j];
        //             j++;
        //         }else{
        //             j++;
        //         }
        //     }
        // }
        // return result;
        vector<int> result;
        int prefixP = 1;
        int suffixP = 1;
        result.push_back(prefixP);
        for (int index = 1; index < nums.size(); index++) {
            prefixP = prefixP * nums[index-1];
            result.push_back(prefixP);
        }
        for (int index=nums.size()-2; index>=0; index--){
            suffixP = suffixP * nums[index+1];
            result[index]*=suffixP;
        }
        return result;
    }
};