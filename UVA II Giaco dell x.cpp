#include<iostream>
#include<queue>
#include<utility>
#include<cstring>
using namespace std;

char a[210][210];
int visited[210][210];
int dir_i[] = {-1,-1,0,0,1,1};
int dir_j[] = {-1,0,-1,1,0,1};
bool bfs(int x,int n)
{
    queue<pair<int,int> >q;
    pair<int,int>top;
    int f,s;
    visited[x][0] = 1;
    q.push(pair<int,int>(x,0));
    while(!q.empty()){
        top = q.front();
        q.pop();
        for(int i=0;i<6;++i){
          f = top.first+dir_i[i];
          s = top.second+dir_j[i];
          if((f>=0 && s>=0) && a[f][s]=='w' && visited[f][s]==0){
            visited[f][s] = 1;
            q.push(pair<int,int>(f,s));
            if(s==n-1) return 1;
          }
        }
    }
    return 0;
}
int main()
{
    int n,k=1;
    while(cin>>n){
        if(n==0)break;
        bool temp = 0;
        for(int i=0;i<n;++i){
            for(int j=0;j<n;++j){
                cin>>a[i][j];
            }
        }
        for(int i=0;i<n;++i){
            if(a[i][0]=='w' && visited[i][0]==0){
                temp = bfs(i,n);
                if(temp == 1)break;
            }
        }
        if(temp == 1)cout<<k++<<" W"<<endl;
        else cout<<k++<<" B"<<endl;
        memset(a,'0',sizeof(a[0][0])*210*210);
        memset(visited,0,sizeof(visited[0][0])*210*210);

    }
    return 0;
}
