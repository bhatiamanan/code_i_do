//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    string stringMirror(string str){
        // Code here
        string s = "";
        int k=1;
        for(int i=0;i<str.length()-1;i++){
            if(int(str[i])<int(str[i+1])) break;
            else if(int(str[i]) == int(str[i+1])){
                if(i==0){
                    break;
                }else{
                    k++;
                }
            }
            else k++;
        }
        for(int i=0;i<k;i++){
            s+=str[i];
        }
        for(int i=k-1;i>=0;i--){
            s+=str[i];
        }
        return s;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        Solution ob;
        string res=ob.stringMirror(str);
        cout<<res<<endl;
    }
}
// } Driver Code Ends