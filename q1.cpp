// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


 // } Driver Code Ends
//User function Template for C++



        class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
        map<string,vector<string>> m;
        vector<vector<string>> ans;
        int i,j;
        for(i=0;i<string_list.size();i++)
        {
            string k=string_list[i];
            sort(string_list[i].begin(),string_list[i].end());
            if(m.find(string_list[i])==m.end())
            m.insert({string_list[i],{k}});
            else
            m[string_list[i]].push_back(k);

        }
        for(auto x:m)
        {
            ans.push_back(x.second);
        }
        return ans;

    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin>>string_list[i];
        Solution ob;
        vector<vector<string> > result = ob.Anagrams(string_list);
        sort(result.begin(),result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for(int j=0; j < result[i].size(); j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}
  // } Driver Code Ends

