class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> result(nums.size());
        for(int i=0;i<nums.size();i++){
            int pos = (i+k)%nums.size();
            result[pos]= nums[i];
        }
        nums=result;
    }
};