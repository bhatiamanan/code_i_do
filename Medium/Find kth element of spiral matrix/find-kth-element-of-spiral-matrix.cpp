//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

// } Driver Code Ends
class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int a[MAX][MAX],int r,int c,int k)
    {
 		// Your code goes here.
 		int sR =0;  
        int sC =0;
        int eR =r-1;
        int eC =c-1;
        // int total = r*c;
        int count = 0;
        while(count<k){
            for(int i=sC;i<=eC && count<k;i++){
                count++;
                if(count==k){
                    return a[sR][i];
                }
            }
            sR++;
            for(int i=sR;i<=eR && count<k;i++){
                count++;
                if(count==k){
                    return a[i][eC];
                }
            }
            eC--;
            for(int i=eC;i>=sC && count<k;i--){
                count++;
                if(count==k){
                    return a[eR][i];
                }
            }
            eR--;
            for(int i=eR;i>=sR && count<k;i--){
                count++;
                if(count==k){
                    return a[i][sC];
                }
            }
            sC++;
        }
    }
};





//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        Solution ob;
        cout<<ob.findK(a,n,m,k)<<endl;
        
       
    }
}
// } Driver Code Ends