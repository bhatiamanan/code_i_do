//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    void solve(string S, vector<bool>&vis, 
    string temp, vector <string> &ans){
        if (temp.length()==S.length()){
            ans.push_back(temp);
            return;
        }
        
        for (int i=0; i<S.length(); i++){
            if (!vis[i]){
                vis[i] = 1;
                temp += S[i];
                solve(S, vis, temp, ans);
                
                temp = temp.substr(0, temp.length()-1);
                vis[i] = 0;
            }
        }
    }
    vector<string> permutation(string S)
    {
        vector <string> ans;
        int n = S.length();
        vector <bool> vis(n,0);
        string temp = "";
        solve(S,vis,temp,ans);
        sort (ans.begin(), ans.end());
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}
// } Driver Code Ends