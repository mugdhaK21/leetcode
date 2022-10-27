class Solution {
public:
     int overlapOnes(vector<vector<int>> img1, vector<vector<int>> img2, int row, int col) {
        int n = img1.size();
        int count = 0;
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                if(i+row >= 0 and i+row < n and j+col >= 0 and j+col < n and img1[i+row][j+col] == 1 and img2[i][j] == 1)
                count++;
            }
        }
        return count;
    }
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        int n = img1.size();
        int out = INT_MIN;
        for(int row=-n;row<n;row++) {
            for(int col=-n;col<n;col++) {
                out = max(out, overlapOnes(img1, img2, row, col));
            }
        }
        return out;
    }
};