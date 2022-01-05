
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
public:
    string printMinNumberForPattern(string s){
        // code here
        vector<int> v(s.length()+1,0);
        int count =1,i,j;
        string ans;
        for(i=0;i<s.length();i++)
        {
            if(s[i]=='I')
            {
                j=i;

                while(j>=0&&v[j]==0)
                v[j--]=count++;

            }
        }
        j=i;
        while(j>=0&&v[j]==0)
                v[j--]=count++;
        i=0;
        while(i<v.size())
       ans+=to_string(v[i++]);
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
        string S;
        cin >> S;
        Solution ob;
        cout << ob.printMinNumberForPattern(S) << endl;
    }
    return 0;
}
  // } Driver Code Ends
