//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string longestPalin (string S) {
        // code here
         int st=0,end=0,n=S.length();
        for(int i=0;i<n;i++){
            int j=i-1,k=i+1;
            int cnt=1;
            while(j>=0 && k<n && (S[j]==S[k])){
                j--;
                k++;
                cnt+=2;
            }
            if((end-st+1)<cnt){
                st=j+1;end=k-1;
            }
            j=i-1;k=i;cnt=0;
            while(j>=0 && k<n && (S[j]==S[k])){
                j--;
                k++;
                cnt+=2;
            }
            if((end-st+1)<cnt){
                st=j+1;end=k-1;
            }
        }
        string ans="";
        for(int i=st;i<=end;i++){
            ans+=S[i];
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends