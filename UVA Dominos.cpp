#include<bits/stdc++.h>
using namespace std;

vector<long int> adj[100004];
vector<long int> topsort;
int visited[100004],now;
void dfs(int current)
{
    visited[current] = 1;
    for(long int i=0;i<adj[current].size();++i){
        now = adj[current][i];
        if(visited[now]==0) dfs(now);
    }
    topsort.push_back(current);
    return;
}
void dfs2(int current)
{
    visited[current] = 1;
    for(long int i=0;i<adj[current].size();++i){
        now = adj[current][i];
        if(visited[now]==0) dfs(now);
    }
    return;
}
int main()
{
    long int tc,n,m,x,y;
    cin>>tc;
    while(tc--){
        cin>>n>>m;
        for(int i=0;i<m;++i){
            cin>>x>>y;
            adj[x].push_back(y);
        }
        int cnt = 0;
        for(int i=1;i<=n;++i) if(visited[i]==0) dfs(i);

        memset(visited,0,sizeof(visited[0])*100000);

        for(int i=topsort.size()-1;i>=0;--i){
           if(visited[topsort[i]]==0){
                cnt++;
                dfs2(topsort[i]);
           }
        }
        for(int i=1;i<=n;++i){
                adj[i].clear();
                visited[i] = 0;
        }
        cout<<cnt<<endl;
        topsort.clear();
    }
    return 0;
}
