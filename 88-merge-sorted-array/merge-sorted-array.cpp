class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int last = m-1;
        int first = 0;
        while(last>=0 && first<n){
            if(nums1[last]> nums2[first]){
                swap(nums1[last], nums2[first]);
                last--;
                first++;
            }else{
                break;
            }
        }

        sort(nums1.begin(), nums1.begin()+m);
        sort(nums2.begin(), nums2.end());

        for(int i=m;i<m+n;i++){
            nums1[i]= nums2[i-m];
        }
    }
};