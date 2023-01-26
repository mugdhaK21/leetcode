//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        // your code here
        string upper;
        string ans;
        string lower;
        for(int i=0;i<n;i++){
            if(str[i]>='a' && str[i]<='z'){
                lower+=str[i];
            }else{
                upper+=str[i];
            }
        }
        
        sort(upper.begin(), upper.end());
        sort(lower.begin(), lower.end());
        
        int i=0,j=0,k=0;
        while( i<lower.size() or j<upper.size()){
            if(str[k]>='a' && str[k]<='z'){
                ans += lower[i];
                i++;
            }else{
                ans+= upper[j];
                j++;
            }
            k++;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}
// } Driver Code Ends