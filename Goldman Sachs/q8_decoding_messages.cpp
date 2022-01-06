
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		int CountWays(string str){
		    // Code here
		   if(str[0]=='0')
		   return 0;
		   if(str.length()==1)
		   return 1;

		    unsigned long long int i,cnt1=1,cnt2=1,cnt;

		    for(i=1;i<str.length();i++)
		    {
		        cnt=0;

		        unsigned long long int onedigit=str[i]-'0';
		       unsigned long long int twodigit=(str[i-1]-'0')*10+onedigit;

		        if(onedigit>0)
		        cnt+=cnt2;
		        if(twodigit>=10&&twodigit<=26)
		        cnt+=cnt1;
		        cnt1=cnt2%1000000007;
		        cnt2=cnt%1000000007;
		    }



		     return cnt2%1000000007;
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.CountWays(str);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends
