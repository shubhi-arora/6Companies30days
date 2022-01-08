// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
    string colName (long long int n)
    {
        // your code here
        long long int c=1;
        string ans="",rem;

        while(n>0)
        {
            rem=(n-1)%26 +'A';
            n=(n-1)/26;
            ans=rem+ans;


        }
        return ans;

    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
	{
		long long int n; cin >> n;
		Solution ob;
		cout << ob.colName (n) << '\n';
	}
}
  // } Driver Code Ends
