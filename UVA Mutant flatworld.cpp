#include<bits/stdc++.h>
using namespace std;

int m,n,mat[54][54],x,y,res1,res2,len;
string st;
char ch;
int dfs(int i)
{
    if(i==len) return 0;
    if(st[i]=='F'){
        res1 = x;
        res2 = y;
        if(ch=='E') x++;
        else if(ch=='S' ) y--;
        else if(ch=='W') x--;
        else if(ch=='N') y++;
    }
    else{
        if(ch=='E' && st[i]=='R') ch = 'S';
        else if(ch=='E' && st[i]=='L') ch = 'N';
        else if(ch=='S' && st[i]=='R') ch = 'W';
        else if(ch=='S' && st[i]=='L') ch = 'E';
        else if(ch=='W' && st[i]=='R') ch = 'N';
        else if(ch=='W' && st[i]=='L') ch = 'S';
        else if(ch=='N' && st[i]=='R') ch = 'E';
        else if(ch=='N' && st[i]=='L') ch = 'W';
    }
    if((x>m || y>n || x<0 || y<0)){
        if(mat[res1][res2]==0){
        mat[res1][res2] = 1;
        return 1;
        }
        else {
        x = res1;
        y = res2;
        dfs(i+1);
        }
    }
    else dfs(i+1);
}
int main()
{
    cin>>m>>n;
    while(cin>>x>>y){
        cin.ignore();
        cin>>ch;
        cin.ignore();
        getline(cin,st);
        len = st.length();
        int flag = dfs(0);
        if(flag == 1) cout<<res1<<" "<<res2<<" "<<ch<<" LOST"<<endl;
        else cout<<x<<" "<<y<<" "<<ch<<endl;
        st.clear();
    }
    return 0;
}
