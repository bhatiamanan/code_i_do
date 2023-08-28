//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
    public:
    /*You are required to complete this method*/
     int max_path_sum(int a[], int b[], int l1, int l2)
    {
        //Your code here
        int i=0,j=0;
        int sum_a=0,sum_b=0,ans=0;
        while(i<l1 && j<l2){
            if(a[i]<b[j]){
                sum_a+=a[i];
                i++;
            }
            else if(a[i]>b[j]){
                sum_b+=b[j];
                j++;
            }else{
                /*a[i]==b[j]*/
                ans+=max(sum_a,sum_b)+a[i];
                i++; j++;
                sum_a=0; sum_b=0;
            }
        }
        while(i<l1 || j<l2){
            if(i<l1){
                sum_a+=a[i++];
            }else if(j<l2){
                sum_b+=b[j++];
            }
        }
        ans+=max(sum_a,sum_b);
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
        int N,M;
        cin>>N>>M;
        fflush(stdin);
        int a[N],b[M];
        for(int i=0;i<N;i++)
            cin>>a[i];
        for(int i=0;i<M;i++)
            cin>>b[i];
        Solution obj;
        int result = obj.max_path_sum(a,b,N,M);
        cout<<result<<endl;
    }
}


// } Driver Code Ends