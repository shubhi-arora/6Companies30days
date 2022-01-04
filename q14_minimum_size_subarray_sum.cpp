#include<bits/stdc++.h>
using namespace std;
int minSubArrayLen(int target, vector<int>& nums) {
        int start=0,end=0,s=0,mini=INT_MAX;
        while(end<nums.size())
        {
            s+=nums[end];
            while(start<nums.size()&&s>=target)
            {
                mini=min(mini,end-start+1);
                s-=nums[start++];
            }
            end++;

        }
        if(mini==INT_MAX)
            return 0;
        return mini;
    }
int main(){
    int target,i,val,n;
    vector<int> nums;

    cin>>n;
    cin>>target;
    for(i=0;i<n;i++)
    {
        cin>>val;
        nums.push_back(val);
    }

    int ans=minSubArrayLen(target,nums);
    cout<<ans;

}
