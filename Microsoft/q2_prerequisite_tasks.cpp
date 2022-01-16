
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
	bool isPossible(int N, vector<pair<int, int> >& pre) {
	    // Code here
	    long long int i;
	    sort(pre.begin(),pre.end());
	    vector<int> adjlist[N];
	    vector<int> degree(N);
	    queue<int>q;
	    int ans=0;
	    for(i=0;i<pre.size();i++)
	    {
	        adjlist[pre[i].second].push_back(pre[i].first);
	    }
	    for(auto it:adjlist)
	    {
	        for(auto x:it)
	        degree[x]++;
	    }
	    for(i=0;i<N;i++)
	    {
	        if(degree[i]==0)
	        q.push(i);
	    }
	    while(!q.empty())
	    {
	        int temp=q.front();
	        q.pop();
	        ans++;
	        for(i=0;i<adjlist[temp].size();i++)
	        {
	            degree[adjlist[temp][i]]--;
	            if(degree[adjlist[temp][i]]==0)
	            q.push(adjlist[temp][i]);
	        }
	    }
	    if(ans==N)
	    return true;
	    return false;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
    	int N, P;
        vector<pair<int, int> > prerequisites;
        cin >> N;
        cin >> P;
        for (int i = 0; i < P; ++i) {
            int x, y;
            cin >> x >> y;
            prerequisites.push_back(make_pair(x, y));
        }
        // string s;
        // cin>>s;
        Solution ob;
        if (ob.isPossible(N, prerequisites))
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
	}
	return 0;
}  // } Driver Code Ends
