// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		    vector<int> v(26,0);
		    int i,j,t=0;
		    string ans;
		    queue<char> q;

		    ans+=A[0];
		    v[A[0]-'a']++;

		    q.push(A[0]);
		    for(i=1;i<A.length();i++)
		    {

		        v[A[i]-'a']++;
		        q.push(A[i]);
		        if(v[q.front()-'a']==1)
		        ans+=q.front();
		        else{
		            while(!q.empty()&&v[q.front()-'a']!=1)
		            q.pop();

		            if(q.empty())
		            ans+='#';
		            else
		            ans+=q.front();
		        }

		    }
		    return ans;

		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends
