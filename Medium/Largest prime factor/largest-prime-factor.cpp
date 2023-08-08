//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public: 
    long long int largestPrimeFactor(int N){
        // code here
        int largestFac = INT_MIN;
        /
        int i = 2;
        while(N>1){
            
            if(N%i==0){
                if(largestFac<i) largestFac = i;
                // i = 2;
                N/=i;
            }else{
                i++;
            }
        }
        return largestFac;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.largestPrimeFactor(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends