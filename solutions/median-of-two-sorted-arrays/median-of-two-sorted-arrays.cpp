class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int l1=nums1.size();
        int l2=nums2.size();
        int arr[l1+l2];
        int k=0;int i=0;int j=0;
        while(i<l1 && j<l2){
            if(nums1.at(i) >= nums2.at(j)){
                arr[k]=nums2.at(j);
                k++;j++;
            }
            else{
                arr[k]=nums1.at(i);
                k++;i++;
            }
        }
        if(i>=l1 && j<l2){
            while(j<l2){
                arr[k]=nums2.at(j);
                k++;j++;
            }
        }
        else{
            while(i<l1){
                arr[k]=nums1.at(i);
                k++;i++;
            }
        }
        int resultLength = sizeof(arr)/sizeof(arr[0]);
        if(resultLength%2 == 0){
            return (double((arr[resultLength/2])+(arr[(resultLength/2)-1]))/2);
        }
        else{
            return (arr[resultLength/2]);
        }
    }
};