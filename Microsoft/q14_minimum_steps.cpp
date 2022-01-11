// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int minSteps(int D){
        // code here
        int c=0,s=0;
        D=abs(D);
        while(s<D||(s-D)%2!=0)
        {
            c++;
            s+=c;

        }
        return c;


    }

};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int D;
        cin>>D;

        Solution ob;
        cout<<ob.minSteps(D)<<"\n";
    }
    return 0;
}  // } Driver Code Ends
