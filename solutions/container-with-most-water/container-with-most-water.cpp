class Solution {
public:
    int maxArea(vector<int>& height) {
        int start=0;
        int end=height.size()-1; int area=0;
        while(start<end){
            int product=(end-start)*(min(height[start],height[end]));
            if(product>area){
                area=product;
            }
            if(height[start]>height[end]){
                end--;
            }else{
                start++;
            }
        }
        return area;
    }
};