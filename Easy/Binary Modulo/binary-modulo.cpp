//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
        int modulo(string s,int m)
        {
            //code here
            int sum=0;
            int base = 1;
            int n = s.length();
            for(int i=n-1;i>=0;i--){
                int num = s[i]-48;
                if(num==1){
                    sum = (sum + base)%m;
                }
                base= (base*2)%m;
            }
            
            return sum%m;
        }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int m;
        cin>>s>>m;
        Solution a;
        cout<<a.modulo(s,m)<<endl;
    }
    return 0;
}
// } Driver Code Ends