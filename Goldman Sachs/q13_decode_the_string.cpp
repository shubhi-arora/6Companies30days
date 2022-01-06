// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{

public:
    string decodedString(string s){
        // code here
        int i=0;
        return decoder(s,i);

    }
    string decoder(string& s,int &i)
    {
        string ans;
        while(i<s.length()&&s[i]!=']')
        {
            if(isdigit(s[i]))
            {
                int k=0;
                while(i<s.length()&&isdigit(s[i]))
                {
                    k=k*10+(s[i]-'0');
                    i++;
                }
                i++;
                string r=decoder(s,i);
                while(k--)
                ans+=r;
                i++;
            }
            else
            ans+=s[i++];
        }
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
}  // } Driver Code Ends
