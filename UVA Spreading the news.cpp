#include<bits/stdc++.h>
using namespace std;

int a[2502][2502],visited[10000],day[10000],output[10000];
void bfs(int x,int e)
{
    queue<int>q;
    int top,maxi = 0,temp,j;
    memset(day,-1,sizeof(day[0])*10000);
    q.push(x);
    visited[x] = 1;
    day[x] = 0;
    while(!q.empty()){
        top = q.front();
        q.pop();
        for(j=0;j<e;++j){
            if(a[top][j]==1 && visited[j] == 0){
                visited[j] = 1;
                q.push(j);
                day[j] = day[top] + 1;
            }
        }
    }
}
int main()
{
    int e,n,x,s,T;
    cin>>e;
    for(int i=0;i<e;++i){
        cin>>n;
        for(int j=0;j<n;++j){
            cin>>x;
            a[i][x] = 1;
        }
    }
    cin>>T;
    while(T--){
        cin>>s;
        int m;
        bfs(s,e);
        for(int i=0;i<e;++i){
            if(day[i]!=-1 && s!=i)output[day[i]]++;
        }
        int maxi = 0;
        for(int i=0;i<e;++i){
            if(output[i]>maxi){
                maxi = output[i];
                m = i;
            }
        }

        if(maxi>0)cout<<maxi<<" "<<m<<endl;
        else cout<<0<<endl;
        memset(visited,0,sizeof(visited[0])*10000);
        memset(output,0,sizeof(output[0])*10000);
    }
    return 0;
}
