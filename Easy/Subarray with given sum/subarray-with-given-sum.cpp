//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // // Your code here
        // vector<int> ans(2);
        // long long int sum=arr[0];
        // long long int j=0;
        // long long int i;
        // for(i=1;i<=n;i++){
        //     if(sum<s){
        //         sum+=arr[i];
        //         // if(sum==s){
        //         //     ans[0]=j+1;
        //         //     ans[1]=i+1;
        //         //     return ans;
        //         // }
                
        //     }
        //     while(sum>s ){
        //         sum-=arr[j];
        //         j++;
        //     }
        //         if(sum==s){
        //             ans[0]=j+1;
        //             ans[1]=i+1;
        //             return ans;
        //         }
            
            
        // }
                    
        // return{-1};  
        vector<int> v;

        

        int sum=0; int k=0;

        int l=0;

        if(s==0)

        {

            v.push_back(-1);

            return v;

        }

        for(int i=0;i<n;i++)

        {

            sum=sum+arr[i];

            while(sum>s)

            {

               sum=sum-arr[k];

               k++;

            }

               if(sum==s)

               {

                   v.push_back(k+1);

                   v.push_back(i+1);

                   return v;

               }

              

        }   

             if(v.empty())

             {

                 v.push_back(-1);

                 

             }

             return v;
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
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends