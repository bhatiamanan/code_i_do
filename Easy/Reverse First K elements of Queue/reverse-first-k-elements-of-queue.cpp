//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
queue<int> modifyQueue(queue<int> q, int k);
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n, k;
        cin >> n >> k;
        queue<int> q;
        while (n-- > 0) {
            int a;
            cin >> a;
            q.push(a);
        }
        queue<int> ans = modifyQueue(q, k);
        while (!ans.empty()) {
            int a = ans.front();
            ans.pop();
            cout << a << " ";
        }
        cout << endl;
    }
}
// } Driver Code Ends


// User function Template for C++

// Function to reverse first k elements of a queue.
queue<int> modifyQueue(queue<int> q, int k) {
    // add code here.
    vector<int> v;
    int count=0;
    while(count<k){
        int num = q.front();
        q.pop();
        v.push_back(num);
        count++;
        
    }
    vector<int> v1;
    
    while(!q.empty()){
        int num = q.front();
        q.pop();
        v1.push_back(num);
    }
    
    for(int i=k-1;i>=0;i--){
        q.push(v[i]);
    }
    for(int j=0;j<v1.size();j++){
        q.push(v1[j]);
    }
    
    return q;
}