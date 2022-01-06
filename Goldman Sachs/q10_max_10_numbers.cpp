#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t,i,n,val;
    vector<int> v;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>val;
        v.push_back(val);
    }
    sort(v.begin(),v.end(),greater<int>());
    for(i=0;i<10;i++)
    {

        cout<<v[i]<<" ";
    }
}
