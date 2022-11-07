class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       int n = nums.size();
            int m = (n/3);
            vector<int> answer;
            map<int,int> ma;
            for(int i=0;i<nums.size();i++){
                 ma[nums[i]]++;
                
            }
        for(auto itr :ma){
             if(itr.second>m){
                     answer.push_back(itr.first);
                     
                 }
        }
            return answer; 
    }
};