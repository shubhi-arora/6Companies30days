#include<bits/stdc++.h>
using namespace std;

int orangesRotting(vector<vector<int>>& grid) {
        int i,j,m=grid.size(),n=grid[0].size(),c=-1,t=0,fresh=0;
        queue<pair<int,int>> q;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {

              if(grid[i][j]==2)
              {
                  q.push({i,j});
              }
                else if(grid[i][j]==1)
                    fresh++;
            }
        }
        while(!q.empty())
        {
            int size=q.size();
            for(i=0;i<size;i++){
            pair<int,int> temp=q.front();
            q.pop();
            t=0;
            int x=temp.first;
            int y=temp.second;
            if(x+1<m&&grid[x+1][y]==1)
                fresh--,grid[x+1][y]=2,q.push({x+1,y});
            if(x-1>=0&&grid[x-1][y]==1)
                fresh--,grid[x-1][y]=2,q.push({x-1,y});
            if(y+1<n&&grid[x][y+1]==1)
                fresh--,grid[x][y+1]=2,q.push({x,y+1});
            if(y-1>=0&&grid[x][y-1]==1)
                fresh--,grid[x][y-1]=2,q.push({x,y-1});
            }
                c++;

        }
        if(fresh>0)
            return -1;
        if(c==-1)
            return 0;
        return c;

    }
    int main(){
    long long int m,n,i,j;
    cin>>m>>n;
    vector<vector<int>> grid(m,vector<int>(n));
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>grid[i][j];
        }
    }
    cout<<orangesRotting(grid);
    }
