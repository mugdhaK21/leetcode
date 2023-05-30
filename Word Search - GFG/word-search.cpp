//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    vector<pair<int, int>> find_neighs (int i, int j, vector<vector<bool>> &visited){
        int n = visited.size();
        int m = visited[0].size();
        
        vector<pair<int, int>> steps = {{1,0}, {-1,0}, {0,1}, {0,-1}};
        vector<pair<int, int>> neighs;
        
        for(auto step:steps){
            int x = i + step.first;
            int y = j + step.second;
            
            if(x >= 0 && x < n && y >= 0 && y < m && visited[x][y] == false){
                neighs.push_back({x,y});
            }
        }
        
        return neighs;
    }
    
    bool search(string word, vector<vector<char>>& board, vector<vector<bool>>& visited, int i, int j){
        if(word.length() == 1){
            if(board[i][j] == word[0]) return true;
            else return false;
        }
        
        auto head = word[0];
        if(head != board[i][j]) return false;
        
        string tmp = word.substr(1, word.length()-1);
        int n = board.size();
        int m = board[0].size();
        visited[i][j] = true;
        
        auto neighs = find_neighs(i, j, visited);
        
        for(auto neigh:neighs){
            if(search(tmp, board, visited, neigh.first, neigh.second)) 
                return true;
        }
        
        visited[i][j] = false;
        return false;
        
    }
    
    bool isWordExist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();
        
        vector <vector<bool>> visited (n, vector<bool> (m, false));
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(search(word, board, visited, i, j)) return true;
            }
        }
        
        return false;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>board(n, vector<char>(m, '*'));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)
				cin >> board[i][j];
		string word;
		cin >> word;
		Solution obj;
		bool ans = obj.isWordExist(board, word);
		if(ans)
			cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}
// } Driver Code Ends