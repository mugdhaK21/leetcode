class Solution {
    public int maxArea(int[] height) {
        int ans=0,start=0, end=height.length-1, area;
        while(start<end){
            if(height[start] < height[end]){
                area = height[start]*(end-start);
                start++;
            }
            else{
                area = height[end]*(end-start);
                end--;
            }
            if(area>ans){
                ans=area;
            }
        }
        return ans;
    }
}