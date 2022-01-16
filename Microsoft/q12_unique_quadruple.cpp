// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        // Your code goes here
        int i,j,start,end,s=0;
        sort(arr.begin(),arr.end());
        vector<vector<int>> ans;
        set<vector<int>> sett;
        for(i=0;i<arr.size()-3;i++)
        {
            for(j=i+1;j<arr.size()-2;j++)
            {
                s=arr[i]+arr[j];
                start=j+1,end=arr.size()-1;
                while(start<end)
                {

                    if((s+arr[start]+arr[end])>k)
                    end--;
                    else if((s+arr[start]+arr[end])<k)
                    start++;
                    else
                    {
                        sett.insert({arr[i],arr[j],arr[start],arr[end]});
                        start++;
                        end--;
                    }
                }
            }
        }
        for(auto x:sett)
        ans.push_back(x);
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends
