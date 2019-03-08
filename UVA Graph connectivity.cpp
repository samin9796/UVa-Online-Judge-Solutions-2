#include<iostream>
#include<queue>
#include<string>
#include<cstring>
using namespace std;

int a[100][100];
int visited[100000];
void bfs(int x,int temp)
{
    queue<int>q;
    int top;
    q.push(x);
    visited[x] = 1;
    while(!q.empty()){
        top = q.front();
        q.pop();
        for(int j=0;j<temp;++j){
            if(a[top][j]==1 && visited[j]==0){
                visited[j]=1;
                q.push(j);
            }
        }
    }
}
int main()
{
    int T;
    cin>>T;
    cin.ignore();
    cin.ignore();
    while(T--){
      char ch;
      string cha;
      cin>>ch;
      int temp = ch-'A';
      temp++;
      int temp1,temp2,ct=0;
      cin.ignore();
      while(getline(cin,cha) ){
         if(cha.empty())break;
        temp1 = cha[0]-'A';
        temp2 = cha[1]-'A';
        a[temp1][temp2] = 1;
        a[temp2][temp1] = 1;
      }
      for(int i=0;i<temp;++i){
            if(visited[i]==0){
                ct++;
                bfs(i,temp);
            }

      }
      cout<<ct<<endl;
      if(T!=0)cout<<endl;
      memset(visited,0,sizeof(visited[0])*100000);
      memset(a,0,sizeof(a[0][0])*100*100);
    }
    return 0;
}
