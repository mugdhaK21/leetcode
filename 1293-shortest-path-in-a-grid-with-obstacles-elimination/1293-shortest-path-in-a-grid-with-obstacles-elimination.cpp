class Solution {
public:
    int shortestPath(vector<vector<int>>& grid, int k) {
        int dirs[] = {0, 1, 0, -1, 0};
        int rows = grid.size(), cols = grid[0].size();
        if(k >= rows + cols - 2) return rows + cols - 2;
        vector<vector<vector<bool>>> visited(vector<vector<vector<bool>>>(rows, vector<vector<bool>>(cols, vector<bool> (k + 1))));
        queue<vector<int>> q;
        q.push({0, 0, k, 0});
        visited[0][0][k] = true;
        while(!q.empty()){
            vector<int> top = q.front();
            q.pop();
            int r = top[0], c = top[1], currK = top[2], dist = top[3];
            if(r == rows - 1 && c == cols - 1) return dist;
            for(int i = 0; i < 4; ++i){
                int nr = r + dirs[i], nc = c + dirs[i + 1];
                if(nr < 0 || nr == rows || nc < 0 || nc == cols) continue;
                int newK = currK - grid[nr][nc];
                while(newK >= 0 && !visited[nr][nc][newK]){
                    visited[nr][nc][newK] = true;
                    q.push({nr, nc, newK, dist + 1});
                }
            }
        }
        return -1;
    
    }
};