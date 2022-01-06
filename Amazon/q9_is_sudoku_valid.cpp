// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int isValid(vector<vector<int>> mat){
        // code here
        vector<string> v;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[i].size();j++)
            {
                if(mat[i][j]!=0)
                {
                    string a="row"+to_string(i)+to_string(mat[i][j]);
                    string b="col"+to_string(j)+to_string(mat[i][j]);
                    string c="box"+to_string((i/3)*3+(j/3))+to_string(mat[i][j]);
                    if(find(v.begin(),v.end(),a)==v.end()&&find(v.begin(),v.end(),b)==v.end()&&find(v.begin(),v.end(),c)==v.end())
                    {
                        v.push_back(a);
                         v.push_back(b);
                          v.push_back(c);
                    }
                    else
                    return 0;
                }
            }
        }
        return 1;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<vector<int>> mat(9, vector<int>(9, 0));
        for(int i = 0;i < 81;i++)
            cin>>mat[i/9][i%9];

        Solution ob;
        cout<<ob.isValid(mat)<<"\n";
    }
    return 0;
}  // } Driver Code Ends
