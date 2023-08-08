//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    int countFractions(int n, int numerator[], int denominator[])
    {
        int count = 0;
        map<pair<int, int>, int> mp;
        
        for(int i=0;i<n;i++){
            int gcd = __gcd(numerator[i], denominator[i]);
            numerator[i] /= gcd;
            denominator[i] /= gcd;
            
            int num = numerator[i];
            int den = denominator[i];
            
            int toFind = den-num;
            if(mp.find({toFind, den})!= mp.end()){
                count+=mp[{toFind, den}];
            }
            mp[{num, den}]++;
            
        }
        return count;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int numerator[n],denominator[n];
        for(int i=0;i<n;i++)
            cin>>numerator[i];
        for(int i=0;i<n;i++)
            cin>>denominator[i];
        Solution ob;
        int ans=ob.countFractions(n,numerator,denominator);
        cout<<ans<<endl;
    }
}
// } Driver Code Ends