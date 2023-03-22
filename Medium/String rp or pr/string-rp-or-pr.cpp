//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{   
public:
    long long solve(int X,int Y,string S){
      //code here
      
      long long pr=0;
      long long rp=0;
      stack<char> s;
      
      if(X>Y){
          
      
      
      
      for(int i=0;i<S.length();i++){
          if(S[i]=='r'){
              if(s.empty()){
                  s.push(S[i]);
                  
              }else if(s.top()=='p'){
                  pr++;
                  s.pop();
                  
                  
              }else{
                  s.push(S[i]);
              }
          }else{
              s.push(S[i]);
          }
      }
      
      
      
      string N="";
      while(!s.empty()){
          char a = s.top();
          N+=a;
          s.pop();
      }
      
      for(int i=0;i<N.length();i++){
          if(N[i]=='r'){
              if(s.empty()){
                  s.push(N[i]);
                  
              }else if(s.top()=='p'){
                  rp++;
                  s.pop();
                  
                  
              }else{
                  s.push(N[i]);
              }
          }else{
              s.push(N[i]);
          }
      }
    //   long long answer = (X*pr)+(Y*rp);
    //   return answer;
      }
      else{
         
      for(int i=0;i<S.length();i++){
          if(S[i]=='p'){
              if(s.empty()){
                  s.push(S[i]);
                  
              }else if(s.top()=='r'){
                  rp++;
                  s.pop();
                  
                  
              }else{
                  s.push(S[i]);
              }
          }else{
              s.push(S[i]);
          }
      }
      
      
      
      string N="";
      while(!s.empty()){
          char a = s.top();
          N+=a;
          s.pop();
      }
      
      for(int i=0;i<N.length();i++){
          if(N[i]=='p'){
              if(s.empty()){
                  s.push(N[i]);
                  
              }else if(s.top()=='r'){
                  pr++;
                  s.pop();
                  
                  
              }else{
                  s.push(N[i]);
              }
          }else{
              s.push(N[i]);
          }
      }
    //   long long answer = (X*pr)+(Y*rp);;
    //   return answer;
      }
      
      long long answer = (X*pr)+(Y*rp);;
      return answer;
      
    }
};

//{ Driver Code Starts.
signed main()
{
  int t;
  cin>>t;
  while(t--)
  {
      int X,Y;
      cin>>X>>Y;
      string S;
      cin>>S;
      Solution obj;
      long long answer=obj.solve(X,Y,S);
      cout<<answer<<endl;
  }
}
// } Driver Code Ends