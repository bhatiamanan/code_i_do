//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
       // Your code here
       stack<pair<int, int> > st;
     vector<int>v;
     st.push({price[0],0});
     v.push_back(1);
     int j=1;
     while(j<n){
         if(st.top().first>price[j]){
             v.push_back(j-st.top().second);
             st.push({price[j],j});
             j++;
         }
         else{
             st.pop();
             if(st.empty()){
                 st.push({price[j],j});
                 v.push_back(j+1);
                 j++;
             }
         }
     }
     return v;
    
    }
};



//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution obj;
		vector <int> s = obj.calculateSpan(a, n);
		
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

// } Driver Code Ends