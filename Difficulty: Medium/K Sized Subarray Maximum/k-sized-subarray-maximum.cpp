class Solution {
  public:
    vector<int> maxOfSubarrays(vector<int>& arr, int k) {
        // code here
        if(k==1) return arr;
        priority_queue<int> pq;
        unordered_map<int, int>deletedNumMap;
        vector<int> ans;
        
        for(int i=0;i<k;i++){
            pq.push(arr[i]);
        }
        ans.push_back(pq.top());
        
        for(int i=k;i<arr.size();i++){
            pq.push(arr[i]);
            deletedNumMap[arr[i-k]]++;
            while(!pq.empty()){
                int topOfQueue = pq.top();
                if(deletedNumMap[topOfQueue]>0){
                    deletedNumMap[topOfQueue]--;
                    pq.pop();
                }else{
                    ans.push_back(pq.top());
                    break;
                }
            }
        }
        return ans;
    }
    
};