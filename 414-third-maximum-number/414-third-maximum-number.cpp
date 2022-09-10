class Solution {
public:
  int thirdMax(vector<int>& nums) {
      if(nums.size()==1) return nums[0];
        if(nums.size()==2) return nums[0]>nums[1] ? nums[0] : nums[1];
        long first=LONG_MIN;
        long second=LONG_MIN;
        long third = LONG_MIN;
        for(int i=0;i<nums.size();i++){
             int current = nums[i];
            if(current>first){
                third=second;
                second=first;
                first=current;
            }
            else if(current>second && current!=first  ){
                third=second;
                second=current;
                
            }
            else if(current>third && current!=second && current!=first){
                third=current;
               
            }
            
        }
         return third==LONG_MIN ? first : third;
        
    }
};