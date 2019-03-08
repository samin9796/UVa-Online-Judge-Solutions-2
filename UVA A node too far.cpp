#include<bits/stdc++.h>
using namespace std;

int bfs(int s,int ttl,map<int,vector<int> > mat)
{
    int top;
    queue<int>q;
    map<int,int>visited;
    q.push(s);
    int cnt2 = 0;
    visited[s] = 1;
    int level[1000];
    level[s] = 0;
    bool hello = true;
    while(!q.empty()){
        top = q.front();
        q.pop();
        int sz = mat[top].size();
        for(int i=0;i<sz;++i){
            if(visited[mat[top][i]]==0){
                level[mat[top][i]] = level[top]+1;
                if(level[mat[top][i]]==ttl+1){
                    hello = false;
                    break;
                }
                cnt2++;
                visited[mat[top][i]] = 1;
                q.push(mat[top][i]);
            }
        }
        if(hello==false)break;
    }
    return cnt2+1;
}
int main()
{
    int n1,m,n,k=1;
    while(cin>>n1){
        if(n1==0)break;
        int cnt=0;
        map<int,vector<int> > mat;
        int arr[100000];
        memset(arr,0,sizeof(arr[0])*100000);
        for(int i=0;i<n1;++i){
            cin>>m>>n;
            mat[m].push_back(n);
            mat[n].push_back(m);
            if(arr[m]==0){
                arr[m] = 1;
                cnt++;
            }
            if(arr[n]==0){
                arr[n] = 1;
                cnt++;
            }
        }
        while(1){
            cin>>m>>n;
            if(m==0 && n==0)break;
            int temp = bfs(m,n,mat);
            cout<<"Case "<<k++<<": "<<cnt-temp<<" nodes not reachable from node "<<m<<" with TTL = "<<n<<"."<<endl;
        }
    }
    return 0;
}
