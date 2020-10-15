#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m,i,j,k,l,x,y;
	    cin>>n>>m;
	    int arr[n][m],dist[n][m];
	    int visited[n][m]={};
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<m;j++)
	        {
	            cin>>arr[i][j];
	            //cout<<arr[i][j]<<" ";
	        }
	        //cout<<"\n";
	    }
	    cin>>x>>y;
	    if(arr[0][0]==0)
	    cout<<-1<<"\n";
	    else
	    {
	        dist[0][0]=0;
	        queue<pair<int,int>>q;
	        q.push({0,0});
	        visited[0][0]=1;
	        k=0;
	        while(!q.empty())
	        {
	            int r=q.front().first,c=q.front().second;
	            //cout<<r<<" "<<c<<"\n";
	            q.pop();
	            if(r+1<n && c<m && arr[r+1][c]==1 && !visited[r+1][c])
	            {
	                visited[r+1][c]=1;
	                q.push({r+1,c});
	                //cout<<r+1<<" "<<c<<"\n";
	                dist[r+1][c]=dist[r][c]+1;
	                if(r+1==x && c==y)
	                {
	                    k=1;
	                    break;
	                }
	            }
	            if(r<n && c+1<m && arr[r][c+1]==1 && !visited[r][c+1])
	            {
	                visited[r][c+1]=1;
	                q.push({r,c+1});
	                //cout<<r<<" "<<c+1<<"\n";
	                dist[r][c+1]=dist[r][c]+1;
	                if(r==x && c+1==y)
	                {
	                    k=1;
	                    break;
	                }
	            }
	            if(r<n && c-1>=0 && arr[r][c-1]==1 && !visited[r][c-1])
	            {
	                visited[r][c-1]=1;
	                q.push({r,c-1});
	                //cout<<r<<" "<<c-1<<"\n";
	                dist[r][c-1]=dist[r][c]+1;
	                if(r==x && c-1==y)
	                {
	                    k=1;
	                    break;
	                }
	            }
	            if(r-1>=0 && c<m && arr[r-1][c]==1 && !visited[r-1][c])
	            {
	                visited[r-1][c]=1;
	                q.push({r-1,c});
	                //cout<<r-1<<" "<<c<<"\n";
	                dist[r-1][c]=dist[r][c]+1;
	                if(r-1==x && c==y)
	                {
	                    k=1;
	                    break;
	                }
	            }
	           
	        }
	        if(k==1)
	        {
	            cout<<dist[x][y]<<"\n";
	        }
	        else
	        cout<<"-1\n";
	    }
	    
	}
	return 0;
}