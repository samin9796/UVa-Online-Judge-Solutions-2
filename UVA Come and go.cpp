#include<bits/stdc++.h>
using namespace std;

vector<int> adj[2005],trans[2005],topsort;
bool vis[2005];
int now,cnt;

void dfs1(int current)
{
    vis[current] = 1;
    for(int i=0;i<adj[current].size();++i){
        now = adj[current][i];
        if(!vis[now]) dfs1(now);
    }
    topsort.push_back(current);
    return;
}
void dfs2(int current)
{
    vis[current] = 1;
    for(int i=0;i<trans[current].size();++i){
        now = trans[current][i];
        if(!vis[now]) dfs2(now);
    }
    cnt++;
    return;
}
int main()
{
    int n,m,x,y,p;
    while(cin>>n>>m){
        if(n==0 && m==0) break;
        for(int i=0;i<m;++i){
            cin>>x>>y>>p;
            if(p==1) adj[x].push_back(y) , trans[y].push_back(x);
            else if(p==2) adj[x].push_back(y) , adj[y].push_back(x) ,trans[x].push_back(y) , trans[y].push_back(x);
        }
        dfs1(1);
        memset(vis,0,sizeof(vis[0])*2005);
        if(topsort.size()<n){
                cout<<0<<endl;
                topsort.clear();
                for(int i=0;i<=n;++i){
                adj[i].clear();
                trans[i].clear();
             }
             continue;
        }

        cnt = 0;
        dfs2(topsort[topsort.size()-1]);

        if(cnt == n) cout<<1<<endl;
        else cout<<0<<endl;
        for(int i=0;i<=n;++i){
            adj[i].clear();
            trans[i].clear();
            vis[i] = 0;
        }
        topsort.clear();
    }
    return 0;
}
