
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        // Code here.
       long long int ans=0,i;
        map<int,int> m;
        if(nums.size()%2!=0)
        return false;
        for(i=0;i<nums.size();i++)
        {
            m[nums[i]%k]++;
        }
        for(auto it=m.begin();it!=m.end();it++)
        {
            auto c=m.find((k-it->first)%k);
            if(c!=m.end()&&c->first==0&&c->second%2!=0)
            return false;
            else if(c!=m.end()&&2*c->first==k&&c->second%2!=0)
            return false;
            else if(c!=m.end()&&c->second!=it->second&&c!=it)
            return false;

            if(c==m.end())
            return false;
        }

        return true;

    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}  // } Driver Code Ends
