//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
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
        reverse(S,s,S.length()-1);
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
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends