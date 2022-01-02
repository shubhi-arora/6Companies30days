// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);

int main() {

	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;

		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{
  //Your code here
  int i=0,c=1;
  string s;
  while(i<src.length())
  {
      if(src[i]==src[i+1])
      {
          c++;
      }else
      {
         s+=src[i];
         s+=to_string(c);
         c=1;
      }
      i++;
  }
  return s;
}


