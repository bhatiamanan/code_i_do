//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    void reverse(string &S,int s, int e){
        while(s<e){
            swap(S[s],S[e]);
            s++;
            e--;
        }
    }
    
    string reverseWords(string S) 
    { 
        // code here 
        int e=0;
        int s=0;
        int k;
        for(k=0;k<S.length();k++){
            if(S[k]=='.'){
                e=k-1;
                reverse(S,s,e);
                s=k+1;
            }
        }
        e=k-1;
        reverse(S,s,e);
        return S;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.reverseWords (s) << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends