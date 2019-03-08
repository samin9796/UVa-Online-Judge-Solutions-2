#include<bits/stdc++.h>
using namespace std;

bool vis[220],arti[220];
int d[300],low[300],parent[220],tme;
vector<int> adj[220];
void arti_point(int u)
{
    tme++;
    d[u] = low[u] = tme;
    vis[u] = 1;
    int no_of_children = 0;
    int sz = adj[u].size();
    for(int i=0;i<sz;++i){
        int v = adj[u][i];
        if(v==parent[u]) continue;
        if(vis[v]==1){
            low[u] = min(low[u],d[v]);
        }
        if(vis[v]==0){
            parent[v] = u;
            arti_point(v);
            low[u] = min(low[u],low[v]);
            if(u!=1 && d[u]<=low[v]) arti[u] = true;
            no_of_children++;
        }
        if(no_of_children>1 && u==1) arti[u] = true;
    }

}
int main()
{
    int n;
    while(scanf("%d",&n) && n){
        getchar();
        string st;
        while(getline(cin,st)){
            stringstream ss(st);
            int a,b;
            ss>>a;
            if(a==0) break;
            while(ss>>b){
                adj[a].push_back(b);
                adj[b].push_back(a);
            }

        }
        tme = 0;
        arti_point(1);
        int cnt = 0;
        for(int i=1;i<=n;++i) if(arti[i]) cnt++;
        printf("%d\n",cnt);
        n*=2;
        for(int i=0;i<=n;++i){
            adj[i].clear();
            low[i] = 0;
            d[i] = 0;
            vis[i] = 0;
            arti[i] = 0;
            parent[i] = 0;

        }

    }
    return 0;
}
