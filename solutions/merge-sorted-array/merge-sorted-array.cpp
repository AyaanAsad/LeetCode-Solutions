class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int start2=0;
        for(int i=m;i<m+n;i++){
            nums1[i]=nums2[start2];
            int key=nums1[i];
            int j=i-1;
            while(j>=0 && nums1[j]>key){
                nums1[j+1]=nums1[j];
                j--;
            }
            nums1[j+1]=key;
            start2++;
        }
    }
};