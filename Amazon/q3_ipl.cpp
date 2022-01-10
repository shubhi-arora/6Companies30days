
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        // your code here
        long long int i,j,c=0;
        deque<pair<long long int,long long int>> q;
        vector<int> ans;

        for(i=0;i<arr.size();i++)
        {

            if(!q.empty()&&q.front().second<=i-k)
            q.pop_front();

            while(!q.empty()&&arr[i]>q.back().first)
                {
                    q.pop_back();
                }


            q.push_back(make_pair(arr[i],i));

            if(i>=k-1)
            ans.push_back(q.front().first);
        }
        return ans;
    }
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;
        vector<int> res = ob.max_of_subarrays(arr, n, k);
        for (int i = 0; i < res.size(); i++) cout << res[i] << " ";
        cout << endl;
    }

    return 0;
}  // } Driver Code Ends
