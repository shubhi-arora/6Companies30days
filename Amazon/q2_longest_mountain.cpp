   #include<bits/stdc++.h>
   using namespace std;
   int longestMountain(vector<int>& arr) {
        int c=0,i=0,maxx=0;
         while(i<arr.size())
        {
            int j=i;
            if(i+1<arr.size()&&arr[i+1]>arr[i])
            {
                while(i+1<arr.size()&&arr[i+1]>arr[i])
                    i++;
                if(i+1<arr.size()&&arr[i]>arr[i+1])
            {
                 while(i+1<arr.size()&&arr[i]>arr[i+1])
                    i++;
                    maxx=max(maxx,i-j+1);
            }

            }

          else

              i++;
        }
        return maxx;
    }
    int main(){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
            cin>>v[i];
       cout<<longestMountain(v);
    }
