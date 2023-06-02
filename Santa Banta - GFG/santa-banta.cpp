//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
public:
    #define ll long long
    vector<bool>check; vector<ll>primes;
    void precompute(){
        check.resize(2000002,true);
        check[0] = check[1] = false;
        for(ll i = 2; i <= 2000001; i++){
            if(check[i]){
                primes.push_back(i);
                for(ll j = i * i; j <= 2000001; j += i){
                    check[j] = false;
                }
            }
        }
    }
    void dfs(vector<vector<int>>& graph,vector<bool>& visited,int u,int &c){
        visited[u] = true; c++;
        for(auto v : graph[u]){
            if(!visited[v]){
                dfs(graph,visited,v,c);
            }
        }
    }
    int helpSanta(int n, int m, vector<vector<int>> &g){
        vector<bool>visited(n+1,false);
        int ans = 0;
        for(int i = 1; i <= n; i++){
            if(!visited[i]){
                int c = 0;
                dfs(g,visited,i,c);
                ans = max(ans,c);
            }
        }
        if(ans < 2){
            return -1;
        }
        else{
            return primes[ans-1];
        }
    }
};

//{ Driver Code Starts.

int main(){
	int t;cin>>t;
	Solution ob;
	ob.precompute();
	while(t--){
        int n,e,u,v;
        cin>>n>>e;
        vector<vector<int>> g(n+10);
        
		for(int i = 0; i < e; i++)
		{
			cin>>u>>v;
			g[u].push_back(v);
			g[v].push_back(u);
		}
		cout << ob.helpSanta(n, e, g) << endl;
		
	}
}



// } Driver Code Ends