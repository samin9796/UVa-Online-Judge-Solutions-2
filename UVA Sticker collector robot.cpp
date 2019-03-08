#include<bits/stdc++.h>
using namespace std;

int n,m,s,p,q,cnt;
char ch,mat[105][105];
string st;
void dfs(int i)
{
    if(i==s) return;

    if(st[i]=='F') {
        if(ch == 'N') {
        if(mat[p-1][q]!='#' && p-1>0) p--;
        }
        else if(ch == 'S') {
        if(mat[p+1][q]!='#' && p+1<=n) p++;
        }
        else if(ch == 'L') {
        if(mat[p][q+1]!='#' && q+1<=m) q++;
        }
        else if(ch == 'O') {
        if(mat[p][q-1]!='#' && q-1>0) q--;
        }
        if(mat[p][q]=='*'){
            cnt++;
            mat[p][q] = '.';
        }
    }
    else if(st[i]=='D'){
        if(ch == 'N') ch = 'L';
        else if(ch == 'S') ch = 'O';
        else if(ch == 'L') ch = 'S';
        else if(ch == 'O') ch = 'N';
    }
    else if(st[i]=='E'){
        if(ch == 'N') ch = 'O';
        else if(ch == 'S') ch = 'L';
        else if(ch == 'L') ch = 'N';
        else if(ch == 'O') ch = 'S';
    }
    dfs(i+1);
}
int main()
{
    char cha;
    while(cin>>n>>m>>s){
        if(n==0 && m==0 && s==0)break;
        cin.ignore();
        for(int i=1;i<=n;++i){
            for(int j=1;j<=m;++j){
                cin>>ch;
                mat[i][j] = ch;
                if(ch=='N' || ch=='S' || ch=='L' || ch=='O'){
                    p = i;
                    q = j;
                    cha = ch;
                }
            }
            cin.ignore();
        }
        st.clear();
        getline(cin,st);
        ch = cha;
        cnt = 0;
        dfs(0);
        cout<<cnt<<endl;
    }
    return 0;
}
