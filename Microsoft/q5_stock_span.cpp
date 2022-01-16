// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



class Solution
{
    public:
    //Function to calculate the span of stock’s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
       // Your code here
       vector<int> dp(n,1),maxx(n,1);
       int j;
       stack<int>s;
       s.push(0);
       for(int i=1;i<n;i++)
       {

              if(!s.empty()&&price[i]>=price[s.top()])
              {
                  while(!s.empty()&&price[i]>=price[s.top()])
                  s.pop();
                  if(s.empty())
                 dp[i]=i+1;
                  else
                 dp[i]=i-s.top();



              }
              s.push(i);



       }
       return dp;
    }
};



// { Driver Code Starts.

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
