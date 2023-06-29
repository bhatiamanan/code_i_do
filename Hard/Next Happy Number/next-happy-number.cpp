//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:

    bool isHappyNum(int n){
        if(n==1 || n==7) return true;
        
        int sum = n;
        int x = n;
        
        while(sum>9){
            sum = 0;
            while(x>0){
                int a = (x%10)*(x%10);
                sum+=a;
                x/=10;
            }
            x = sum;
        }
        if(sum==1 || sum==7) return true;
        return false;
        
    }
    int nextHappy(int N){
        // code here
        bool ans = false;
        for(int i=N+1;i<=N+100;i++){
            ans = isHappyNum(i);
            if(ans==true){
                return i;
            }
        }
        
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
        cout << ob.nextHappy(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends