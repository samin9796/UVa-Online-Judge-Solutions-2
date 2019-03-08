#include<bits/stdc++.h>
using namespace std;

vector<int>v[1000004];
long int n,m,cnt,vis[1000004],res[1000004];
bool flag;

void dfs(long int current)
{
    vis[current] = 1;
    for(int i=0;i<v[current].size();++i){
        if(vis[v[current][i]]==0){
            dfs(v[current][i]);
        }
        else if(vis[v[current][i]]==1){
            flag = false;
            return;
        }
    }
    res[cnt++] = current;
    vis[current] = 2;
    return;
}
int main()
{
    long int a,b;
    while(cin>>n>>m){
        if(n==0 && m==0)break;
        for(long int i=0;i<m;++i){
          cin>>a>>b;
          v[a].push_back(b);
        }
        cnt = 0;
        flag = true;
        for(long int i=1;i<=n && flag == true;++i) if(vis[i]==0) dfs(i);

        if(flag==true)for(long int i=cnt-1;i>=0;--i) cout<<res[i]<<endl;
        else cout<<"IMPOSSIBLE"<<endl;
        for(long int i=1;i<=n;++i)v[i].clear() , vis[i] = 0;
    }
    return 0;
}
