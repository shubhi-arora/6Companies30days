// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long


 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    // code here
	    long long  a=2,b=3,c=5,i=0,j=0,k=0,ans=1,minimum;
	    vector<long long int> v;

	    v.push_back(1);
	    while(v.size()<n)
	    {
	        a=2*v[i],b=3*v[j],c=5*v[k];
	        minimum=min(a,min(b,c));
	        v.push_back(minimum);
	       if(minimum==a)
	        i++;
	        if(b==minimum)
	       j++;
	        if(c==minimum)
	        k++;

	    }
	return v.back();

	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends
