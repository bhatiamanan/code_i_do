class Solution {
  public:
    int findLength(vector<int> &color, vector<int> &radius) {
        // code here
        stack<pair<int, int>> st;
        st.push({color[0], radius[0]});
        
        for(int i=1;i<color.size();i++){
            if(!st.empty()){
                int tempFirst = st.top().first;
                int tempSecond = st.top().second;
                
                if(tempFirst == color[i] && tempSecond==radius[i]) st.pop();
                else st.push({color[i], radius[i]});
            }else st.push({color[i], radius[i]});
        }
        return st.size();
    }
};