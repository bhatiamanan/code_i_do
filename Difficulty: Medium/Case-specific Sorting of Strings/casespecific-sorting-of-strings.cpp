class Solution {
  public:
    string caseSort(string& s) {
        // code here
        priority_queue<char, vector<char>, greater<char>> capital;
        priority_queue<char, vector<char>, greater<char>> small;
        
        string ans = "";
        
        for(int i=0;i<s.length();i++){
            if(s[i]>='A' && s[i]<='Z') capital.push(s[i]);
            else small.push(s[i]);
        }
        
        int index = 0;
        
        while(!capital.empty() && !small.empty() && index<s.length()){
            if(s[index]>='A' && s[index]<='Z'){
                ans += capital.top();
                capital.pop();
            } 
            else{
                ans += small.top();
                small.pop();
            }
            index++;
        }
        
        if(!capital.empty()){
            while(!capital.empty()){
                ans += capital.top();
                capital.pop();
            }
        }else if(!small.empty()){
            while(!small.empty()){
                ans += small.top();
                small.pop();
            }
        }
        
        return ans;
    }
};