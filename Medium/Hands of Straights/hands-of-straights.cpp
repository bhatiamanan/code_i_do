//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool isStraightHand(int N, int groupSize, vector<int> &hand) {
        // code here
         map<int, int>mp;
         for(int i=0;i<N;i++){
             mp[hand[i]]++;
         }
         int start;
         int c;
         while(true){
             start = mp.begin()->first;
             c=0;
             while(c<groupSize){
                 if(mp[start]==0) return false;
                 mp[start]--;
                 if(mp[start]==0) mp.erase(start);
                 start++;
                 c++;
             }
             if(mp.size()==0) break;
         }
         return true;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, groupSize;
        cin >> N >> groupSize;

        vector<int> hand(N);
        for (int i = 0; i < N; i++) cin >> hand[i];

        Solution obj;
        int ans = obj.isStraightHand(N, groupSize, hand);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends