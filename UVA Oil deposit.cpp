#include<iostream>
#include<queue>
#include<utility>
#include<cstring>
using namespace std;

int visited[100][100];
char a[100][100];

void bfs(int x,int y)
{
    queue<pair<int,int> >q;
    pair<int,int>top;
    int f,s;
    q.push(pair<int,int>(x,y));
    visited[x][y] = 1;
    while(!q.empty()){
      top = q.front();
      q.pop();
      s = top.first-1;
      f = top.second-1;
      if((s>=0 && f>=0) && a[s][f]=='@' && visited[s][f]==0){
        visited[s][f] = 1;
        q.push(pair<int,int>(s,f));
      }

      s = top.first-1;
      f = top.second;
      if((s>=0 && f>=0) && a[s][f]=='@' && visited[s][f]==0){
        visited[s][f] = 1;
        q.push(pair<int,int>(s,f));
      }

      s = top.first-1;
      f = top.second+1;
      if((s>=0 && f>=0) && a[s][f]=='@' && visited[s][f]==0){
        visited[s][f] = 1;
        q.push(pair<int,int>(s,f));
      }

      s = top.first;
      f = top.second-1;
      if((s>=0 && f>=0) && a[s][f]=='@' && visited[s][f]==0){
        visited[s][f] = 1;
        q.push(pair<int,int>(s,f));
      }

      s = top.first;
      f = top.second+1;
      if((s>=0 && f>=0) && a[s][f]=='@' && visited[s][f]==0){
        visited[s][f] = 1;
        q.push(pair<int,int>(s,f));
      }

      s = top.first+1;
      f = top.second-1;
      if((s>=0 && f>=0) && a[s][f]=='@' && visited[s][f]==0){
        visited[s][f] = 1;
        q.push(pair<int,int>(s,f));
      }

      s = top.first+1;
      f = top.second;
      if((s>=0 && f>=0) && a[s][f]=='@' && visited[s][f]==0){
        visited[s][f] = 1;
        q.push(pair<int,int>(s,f));
      }

      s = top.first+1;
      f = top.second+1;
      if((s>=0 && f>=0) && a[s][f]=='@' && visited[s][f]==0){
        visited[s][f] = 1;
        q.push(pair<int,int>(s,f));
      }
    }


}
int main()
{
    int m,n;
    while(cin>>m>>n){
        if(m==0)break;
        for(int i=0;i<m;++i){
            for(int j=0;j<n;++j){
                cin>>a[i][j];
            }
        }
        int ct=0;
        for(int i=0;i<m;++i){
            for(int j=0;j<n;++j){
                if(a[i][j]=='@' && visited[i][j]==0){
                    ct++;
                    bfs(i,j);
                }
            }
        }
        cout<<ct<<endl;
        memset(visited,0,sizeof(visited[0][0])*100*100);
        memset(a,'0',sizeof(a[0][0])*100*100);
    }
    return 0;
}
