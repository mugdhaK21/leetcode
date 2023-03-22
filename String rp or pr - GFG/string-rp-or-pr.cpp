//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{   
public:
    long long solve(int a,int b,string s){
      //code here
      long long int fans=0;
        if(a>=b){
            stack<char> st;  
            int n=s.length();
            for(int i=0;i<n;i++){
                if(st.empty()){
                    st.push(s[i]);
                }
                else{
                    if((s[i]=='r')&&(st.top()=='p')){
                        st.pop();
                        fans+=a;
                    }
                    else{
                        st.push(s[i]);
                    }
                }
            }
            
            string p="";
            while(!st.empty()){
                p+=st.top();
                st.pop();
            }
            
            reverse(p.begin(),p.end());
            for(int i=0;i<p.length();i++){
                if(st.empty()){
                    st.push(p[i]);
                }
                else{
                    if((p[i]=='p')&&(st.top()=='r')){
                        st.pop();
                        fans+=b;
                    }
                    else{
                        st.push(p[i]);
                    }
                }
            }
        }
        else{
            stack<char> st;  
            int n=s.length();
            for(int i=0;i<n;i++){
                if(st.empty()){
                    st.push(s[i]);
                }
                else{
                    if((s[i]=='p')&&(st.top()=='r')){
                        st.pop();
                        fans+=b;
                    }
                    else{
                        st.push(s[i]);
                    }
                }
            }
            
            string p="";
            while(!st.empty()){
                p+=st.top();
                st.pop();
            }
            reverse(p.begin(),p.end());
            for(int i=0;i<p.length();i++){
                if(st.empty()){
                    st.push(p[i]);
                }
                else{
                    if((p[i]=='r')&&(st.top()=='p')){
                        st.pop();
                        fans+=a;
                    }
                    else{
                        st.push(p[i]);
                    }
                }
            }
            
            
        }
        
        
        return fans;
    }
};

//{ Driver Code Starts.
signed main()
{
  int t;
  cin>>t;
  while(t--)
  {
      int X,Y;
      cin>>X>>Y;
      string S;
      cin>>S;
      Solution obj;
      long long answer=obj.solve(X,Y,S);
      cout<<answer<<endl;
  }
}
// } Driver Code Ends