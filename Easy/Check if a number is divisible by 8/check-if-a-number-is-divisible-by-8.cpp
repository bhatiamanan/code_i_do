//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int DivisibleByEight(string s){
        //code here
        
        int n = s.length();
        int number = 0;
        int i;
        
        if(n<3) i=0;
        else i=n-3;
        
        for(i;i<n;i++){
            number = number*10+(s[i]-'0');
        }
        if(number%8==0) return 1;
        return -1;
        
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.DivisibleByEight(S)<<"\n";
    }
}
// } Driver Code Ends