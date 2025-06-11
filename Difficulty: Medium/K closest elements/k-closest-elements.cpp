class Solution {
  public:
    vector<int> printKClosest(vector<int> arr, int k, int x) {
        // Code here
        unordered_set<int> st;
        vector<int> ans;
        
        for(int i=0;i<arr.size();i++){
            st.insert(arr[i]);
            if(arr[i]>x) arr[i] -=x;
            else arr[i] = x-arr[i];
        }
        
        sort(arr.begin(), arr.end());
        
        int counter = 0;
        
        for(int i=0;i<arr.size() && counter<k;i++){
            if(arr[i]==0) continue;
            int numberToReturn = arr[i]+x;
            if(st.find(numberToReturn)!=st.end()){
                ans.push_back(numberToReturn);
                st.erase(numberToReturn);
            }
            else ans.push_back(x-arr[i]);
            counter++;
        }
        return ans;
    }
};