// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        //Your code here
        long long int i,ans=0,t=0;
        for(i=0;i<str.length();i++)
        {

            if(i==0&&str[i]=='-')
            {
                t=1;

            }

            else if(isdigit(str[i])){
            int k=str[i]-'0';
            ans=ans*10+k;
            }
            else
            return -1;
        }
        if(t==1)
        return (-1)*ans;
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}  // } Driver Code Ends
