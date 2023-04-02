//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function Template for C++


class Solution
{

public:
    int xmod11(string x)
    {
       // code here
       int sumOdd=0;
       int sumEven=0;
    
       for(int i=0;i<x.length();i++){
           if(i%2==0){
               sumEven+=int(x[i] - '0');
           }else{
               sumOdd+=int(x[i] - '0');
           }
       }
    //   int ans = ();
      
      return (((sumOdd-sumEven)%11)+11)%11; // we are adding 11 here because 
      //we dont know whether difference of even and odd will be negative or positive
    }
};


//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string x;
        cin>>x;
        Solution ob;
        int ans = ob.xmod11(x);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends