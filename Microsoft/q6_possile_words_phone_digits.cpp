// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
#include <string>

using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to find list of all words possible by pressing given numbers.
    vector<string> v={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
       vector<string> ans;
    vector<string> possibleWords(int a[], int N)
    {
        //Your code here

       makeword(a,N,0,"");

       return ans;
    }
    void makeword(int a[],int N,int i,string k)
    {
        if(i>=N)
        {
            ans.push_back(k);
            return;
        }
        for(int j=0;j<v[a[i]].length();j++)
        {
            makeword(a,N,i+1,k+v[a[i]][j]);
        }
    }
};


// { Driver Code Starts.

int main() {

	int T;

	cin >> T; //testcases

	while(T--){ //while testcases exist
	   int N;

	   cin >> N; //input size of array

	   int a[N]; //declare the array

	   for(int i =0;i<N;i++){
	       cin >> a[i]; //input the elements of array that are keys to be pressed
	   }

	   Solution obj;

	  vector <string> res = obj.possibleWords(a,N);
	  for (string i : res) cout << i << " ";
	   cout << endl;
	}

	return 0;
}  // } Driver Code Ends
