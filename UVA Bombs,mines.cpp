#include<bits/stdc++.h>
using namespace std;

int a[2005][2005],visited[2005][2005],level[2005][2005];
int di[] = {0,-1,0,1};
int dj[] = {-1,0,1,0};
int res,r,c;
void bfs(int x,int y,int w,int z)
{
    queue<pair<int,int> >q;
    pair<int,int>top;
    memset(level,-1,sizeof(level[0][0])*2005*2005);
    int f,s;
    bool temp=0;
    q.push(pair<int,int>(x,y));
    visited[x][y] = 1;
    level[x][y] = 0;
    while(!q.empty()){
      top = q.front();
      q.pop();
      for(int i=0;i<4;++i){
        f = top.first+di[i];
        s = top.second+dj[i];
        if((f>=0 && s>=0) && a[f][s]==0 && visited[f][s]==0 && (f<r && s<c)){
            visited[f][s]=1;
            q.push(pair<int,int>(f,s));
            level[f][s] = level[top.first][top.second]+1;
            if(f==w && s==z){
                res = level[f][s];
                temp = 1;
                break;
            }
        }
      }
      if(temp==1) break;
    }
}
int main()
{
    int br,ir,n,jr,si,sj,di,dj;
    while(cin>>r>>c){
        if(r==0 && c==0)break;
        cin>>br;
        for(int i=0;i<br;++i){
            cin>>ir>>n;
            for(int j=0;j<n;++j){
                cin>>jr;
                a[ir][jr] = 1;
            }
        }
        cin>>si>>sj>>di>>dj;
        bfs(si,sj,di,dj);
        cout<<res<<endl;
        memset(a,0,sizeof(a[0][0])*2005*2005);
        memset(visited,0,sizeof(visited[0][0])*2005*2005);
    }
    return 0;
}
