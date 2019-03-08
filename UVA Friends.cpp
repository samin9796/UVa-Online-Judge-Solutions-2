#include<bits/stdc++.h>
using namespace std;

vector<int>mat[30000+5];
int n,m,a,b,k,save[30005];
bool visited[30005];
void bfs(int s)
{
  queue<int>q;
  int top;
  visited[s] = 1;
  q.push(s);
  int cnt = 1;
  while(!q.empty()){
    top = q.front();
    q.pop();
    int sz = mat[top].size();
    for(int i=0;i<sz;++i){
        if(visited[mat[top][i]]==0){
            visited[mat[top][i]] = 1;
            q.push(mat[top][i]);
            cnt++;
        }
    }
  }
  save[k++] = cnt;
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        cin>>n>>m;
        memset(visited,0,sizeof(visited[0])*30005);
        memset(save,0,sizeof(save[0])*30005);
        k=0;
        for(int i=0;i<m;++i){
            cin>>a>>b;
            mat[a].push_back(b);
            mat[b].push_back(a);
        }
        for(int i=1;i<=n;++i){
          if(visited[i]==0){
            bfs(i);
          }
        }
        sort(save,save+k);
        cout<<save[k-1]<<endl;
        for(int i=1;i<=n;++i)mat[i].clear();
    }
    return 0;
}
