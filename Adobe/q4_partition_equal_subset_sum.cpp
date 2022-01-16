// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int equalPartition(int N, int arr[])
    {
        // code here

        long long int s=0,i,j;
        for(i=0;i<N;i++)
        s+=arr[i];
        if(s%2==0)
       {
           vector<vector<int>>dp(N+1,vector<int>(s/2+1,0));
           for(i=0;i<N+1;i++)
        {
            for(j=0;j<=s/2;j++)
            {
                if(i==0)
                dp[i][j]=0;
                if(j==0)
                dp[i][j]=1;

                if(i!=0&&arr[i-1]<=j)
                {
                dp[i][j]=dp[i-1][j-arr[i-1]]||dp[i-1][j];
                }
                else if(i!=0)
                dp[i][j]=dp[i-1][j];

            }
        }
           return dp[N][s/2];
       }
       return 0;
    }

};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];

        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}  // } Driver Code Ends
