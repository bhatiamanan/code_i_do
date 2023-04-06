//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int addMinChar(string str){    
        //code here
        int s=0;
        int e=str.length();
        int Se=e;
        int count=0;
        while(s<e){
            if(str[s]!=str[e]){
                count++;
                s=0;
                Se--;
                e=Se;
            }else{
                s++;
                e--;
            }
        }
        return count-1;
        
    }
};

//{ Driver Code Starts.


int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin >> str;
        
        Solution ob;
        cout << ob.addMinChar(str) << endl;
    }
    return 0; 
} 
// } Driver Code Ends