class Solution {
  public:
    vector<int> leafNodes(vector<int>& preorder) {
        // code here
        stack<int> st;
        vector<int> ans;
        
        st.push(preorder[0]);
        
        for(int i=1;i<preorder.size();i++){
            if(st.top()>preorder[i]) st.push(preorder[i]);
            else{
                // top of stack at this time is the leaf node
                int topNode = st.top();
                
                // transitioning sides of traversal of the tree
                int count = 0;
                while(!st.empty() && preorder[i] > st.top()) {
                    st.pop();
                    count++;
                }
                st.push(preorder[i]);
                if(count>=2) ans.push_back(topNode);
            }
        }
        //last node will always be a leaf node if it is itself not a root node
        ans.push_back(st.top());
        return ans;
    }
};