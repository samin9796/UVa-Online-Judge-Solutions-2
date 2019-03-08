#include<bits/stdc++.h>
using namespace std;

int row,column,flag[50][50],cnt;
char mat[50][50];
void dfs(int i,int j)
{
    if(i>row || j>column || i<1 || j<1){
        cnt--;
        cout<<cnt<<" step(s) to exit"<<endl;
        return;
    }
    if(flag[i][j]>0){
        cnt--;
        cout<<flag[i][j]-1<<" step(s) before a loop of "<<cnt-flag[i][j]+1<<" step(s)"<<endl;
        return;
    }
    if(mat[i][j]=='N'){
        flag[i][j] = cnt++;
        dfs(i-1,j);
    }
    else if(mat[i][j]=='S'){
        flag[i][j] = cnt++;
        dfs(i+1,j);
    }
    else if(mat[i][j]=='E'){
        flag[i][j] = cnt++;
        dfs(i,j+1);
    }
    else if(mat[i][j]=='W'){
        flag[i][j] = cnt++;
        dfs(i,j-1);
    }
}
int main()
{
    int start;
    char ch;
    while(cin>>row>>column>>start){
        cin.ignore();
        if(row == 0 && column == 0 && start == 0) break;
        memset(flag,0,sizeof(flag[0][0])*50*50);
        for(int i=1;i<=row;++i){
            for(int j=1;j<=column;++j){
               cin>>ch;
               mat[i][j] = ch;
            }
            cin.ignore();
        }
        cnt = 1;
        dfs(1,start);
    }
    return 0;
}
