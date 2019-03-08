#include<bits/stdc++.h>
using namespace std;

int a[108][108],visited[150];
int n,ct;
void bfs(int x)
{
    queue<int>q;
    int top;
    q.push(x);
    visited[x] = 1;
    ct = 1;
    while(!q.empty()){
        top = q.front();
        q.pop();
        for(int j=1;j<=n;++j){
            if(a[top][j]==1 && visited[j]==0){
               visited[j] = 1;
               q.push(j);
               ct++;
            }
        }
    }
}
int main()
{
    int vertex1,vertex2,num,t;
    while(cin>>n){
        if(n==0)break;
        while(cin>>vertex1){
            if(vertex1==0)break;
            while(cin>>vertex2){
                if(vertex2==0)break;
                a[vertex1][vertex2]=1;
            }
        }
        cin>>num;
        for(int i=0;i<num;++i){
            cin>>t;
            bfs(t);
            if(a[t][t]==0){
                visited[t] = 0;
            for(int i=1;i<=n;++i){
                if(visited[i]==1){
                  if(a[i][t]==1){
                    visited[t] = 1;
                    ct++;
                    break;
                  }
                }
            }
            ct--;
            }
            cout<<n-ct;
            for(int i=1;i<=n;++i){
                if(visited[i]==0)cout<<" "<<i;
            }
            cout<<endl;
            memset(visited,0,sizeof(visited[0])*150);
        }
        memset(a,0,sizeof(a[0][0])*108*108);
    }
    return 0;
}
