//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int kthElement(int k, vector<int>& arr1, vector<int>& arr2) {
        // code here
        int n = arr1.size();
        int m = arr2.size();
        int i=0,j=0,count=0;
        
        while(i<n && j<m){
            int a = arr1[i];
            int b = arr2[j];
            k--;
            if(a>b){
                if(k==0) return b;
                j++;
            }else{
                if(k==0) return a;
                i++;
            }
        }
         while(i<n){
            k--;
            if(k==0)return arr1[i];
            i++;
        }
        
        while(j<m){
            k--;
            if(k==0)return arr2[j];
            j++;
        }
    }
};

//{ Driver Code Starts.

// Driver code
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, m, k;
        cin >> k;
        cin.ignore();
        string input;
        int num;
        vector<int> arr1, arr2;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr1.push_back(num);
        }

        getline(cin, input);
        stringstream s3(input);
        while (s3 >> num) {
            arr2.push_back(num);
        }

        Solution ob;
        cout << ob.kthElement(k, arr1, arr2) << endl;
    }
    return 0;
}
// } Driver Code Ends