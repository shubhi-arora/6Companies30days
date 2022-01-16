// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to find unit area of the largest region of 1s.

    int findMaxArea(vector<vector<int>>& grid) {
        // Code here
       int area=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]==1)
                area=max(area,dfs(grid,i,j));
            }
        }
        return area;
    }
int dfs(vector<vector<int>>& grid,int i,int j)
    {
        if(i<0 || i>=grid.size() || j<0||j>=grid[0].size())
        return 0;
        if(grid[i][j]==0)
        return 0;
        grid[i][j]=0;
        int k=dfs(grid,i-1,j)+dfs(grid,i+1,j)+dfs(grid,i,j-1)+dfs(grid,i,j+1)+dfs(grid,i-1,j-1)+dfs(grid,i+1,j+1)+dfs(grid,i-1,j+1)+dfs(grid,i+1,j-1);

        return 1+k;
    }

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.findMaxArea(grid);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends
