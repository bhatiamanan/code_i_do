//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string reverseEqn (string s)
        {
            //code here.
            string st="";
            string ans="";
            int i=s.length()-1;
            while(i>=0){
                if(s[i]=='+' ||s[i]=='-'||s[i]=='*'||s[i]=='/'){
                    st=st+ans+s[i];
                    ans="";
                }else{
                    ans=s[i]+ans;
                    
                }
                i--;
            }
            st+=ans;
            return st;
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.reverseEqn (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends