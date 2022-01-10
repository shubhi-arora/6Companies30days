// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:

typedef struct trie trie;
    vector<vector<string>> displayContacts(int n, string contact[], string s)
    {
        // code here
        int i,j,t=0,p=0;
        sort(contact,contact+n);
        vector<vector<string>> v;
       for(i=0;i<s.length();i++)
       {
          int k=i-0+1;
           set<string> temp;
           for(j=0;p!=1&&j<n;j++)
           {
               if(s.substr(0,k)==contact[j].substr(0,k))
               temp.insert(contact[j]);

           }
           if(p==1||temp.size()==0)
           {
                p=1;
                v.push_back({"0"});
           }

           else
           {
               vector<string> ans;
               for(auto x:temp)
               ans.push_back(x);
                v.push_back(ans);
           }

       }

       return v;

    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string contact[n], s;
        for(int i = 0;i < n;i++)
            cin>>contact[i];
        cin>>s;

        Solution ob;
        vector<vector<string>> ans = ob.displayContacts(n, contact, s);
        for(int i = 0;i < s.size();i++){
            for(auto u: ans[i])
                cout<<u<<" ";
            cout<<"\n";
        }
    }
    return 0;
}  // } Driver Code Ends
