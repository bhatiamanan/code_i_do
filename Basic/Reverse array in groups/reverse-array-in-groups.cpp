//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){
        // code here
        int i=k,c=0,p=1;

        vector<long long> v;

        while(i<n){

            for(int j=p*k-1;j>=k*c;j--){

                v.push_back(arr[j]);

            }

            i=i+k;

            c++;p++;

        }

        for(int j=n-1;j>=k*c;j--){

            v.push_back(arr[j]);

        }

        for(int j=0;j<n;j++){

            arr[j]=v[j];

       }

    
    }
};

//{ Driver Code Starts.
int main() {
    int t; 
    cin >> t; 
    while(t--){ 
        int n;
        cin >> n; 
        vector<long long> arr; 
        int k;
        cin >> k; 

        for(long long i = 0; i<n; i++)
        {
            long long x;
            cin >> x; 
            arr.push_back(x); 
        }
        Solution ob;
        ob.reverseInGroups(arr, n, k);
        
        for(long long i = 0; i<n; i++){
            cout << arr[i] << " "; 
        }
        cout << endl;
    }
    return 0;
}


// } Driver Code Ends