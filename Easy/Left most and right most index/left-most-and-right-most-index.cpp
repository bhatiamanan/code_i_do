//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    
    pair<long,long> indexes(vector<long long> v, long long x){
        // code here
        pair<long, long> p;
        p = {-1,-1};
        int n = v.size();
        int s = 0;
        int e = n-1;
        while(s<=e){
            int mid = (s+e)/2;
            if(v[mid]==x){
                p.first = mid;
                e = mid-1;
            }else if(v[mid]<x){
                s = mid+1;
            }else{
                e = mid-1;
            }
        }
        
        s = 0;
        e = n-1;
        while(s<=e){
            int mid = (s+e)/2;
            if(v[mid]==x){
                p.second = mid;
                s=mid+1;
            }else if(v[mid]<x){
                s = mid+1;
            }else{
                e = mid-1;
            }
        }
        return p;
    }
};

//{ Driver Code Starts.

int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        vector<long long>v;
        cin>>n;
        for(long long i=0;i<n;i++)
        {
            cin>>k;
            v.push_back(k);
        }
        long long x;
        cin>>x;
        Solution obj;
        pair<long,long> pair = obj.indexes(v, x);
        
        if(pair.first==pair.second and pair.first==-1)
        cout<< -1 <<endl;
        else
        cout<<pair.first<<" "<<pair.second<<endl;

    }
	return 0;
}

// } Driver Code Ends