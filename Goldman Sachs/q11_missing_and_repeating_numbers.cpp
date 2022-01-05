
// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        vector<int> v(n+1,0);
        int a,b,i;
        int *ar=new int[2];
        for(i=0;i<n;i++)
        v[arr[i]]++;
        for(i=1;i<=n;i++)
        {
            if(v[i]==2)
            ar[0]=i;
            else if(v[i]==0)
            ar[1]=i;
        }

        return ar;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends
