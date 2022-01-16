
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c)
    {
        // code here
        int left=0,right=c-1,top=0,down=r-1,k=1,i=0,j=0;
        vector<int> ans;
        while(left<=right&&top<=down)
        {
            if(k==1)
            {
                while(j<=right)
                {
                    ans.push_back(matrix[i][j]);
                    j++;
                }
                i++;
                j=right;
                k++;
                top++;

            }
            else if(k==2)
            {
                while(i<=down)
                {
                    ans.push_back(matrix[i][j]);
                    i++;
                }
                i=down;
                k++;
                j--;
                right--;
            }
            else if(k==3)
            {
                while(j>=left)
                {
                    ans.push_back(matrix[i][j]);
                    j--;
                }
                j=left;
                down--;
                k++;
                i--;


            }
            else
            {
                while(i>=top)
                {
                    ans.push_back(matrix[i][j]);
                    i--;
                }
                i=top;
                k=1;
                left++;
                j++;
            }
        }
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;

    while(t--)
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r);

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
