#include<bits/stdc++.h>
using namespace std;

bool vis[210],arti[210];
int low[210],d[210],tme,parent[210],cnt,root;
vector<int> adj[210];
void arti_point(int u)
{
    tme++;
    low[u] = d[u] = tme;
    vis[u] = 1;
    int nof = 0;
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
            if(u!=root && d[u]<=low[v]) arti[u] = true;
            nof++;
        }
        if(nof>1 && u==root) arti[u] = true;


    }
}
int main()
{
    int n,tc = 1;
    while(scanf("%d",&n) && n){
        getchar();
        if(tc!=1) cout<<endl;
        string st,s1,s2;
        map<string,int> m;
        string str[105];
        for(int i=1;i<=n;++i){
            getline(cin,st);
            m[st] = i;
            str[i] = st;
        }
        int r;
        scanf("%d",&r);
        getchar();
        for(int i=0;i<r;++i){
            cin>>s1>>s2;
            adj[m[s1]].push_back(m[s2]);
            adj[m[s2]].push_back(m[s1]);
        }
        tme = 0;
        cnt = 0;
        for(int i=1;i<=n;++i){ if(vis[i]==0)
               {root = i;
                arti_point(i);
        }
        }
        vector<string> res;
        for(int i=1;i<=n;++i){
            if(arti[i]==true){
             cnt++;
             res.push_back(str[i]);
            }
        }
        printf("City map #%d: %d camera(s) found\n",tc++,cnt);
        sort(res.begin(),res.end());
        for(int i=0;i<res.size();++i) cout<<res[i]<<endl;
        n *= 2;
        for(int i=0;i<=n;++i){
            adj[i].clear();
            vis[i] = 0;
            arti[i] = 0;
            low[i] = 0;
            d[i] = 0;
            parent[i] = 0;
        }
    }
    return 0;
}
