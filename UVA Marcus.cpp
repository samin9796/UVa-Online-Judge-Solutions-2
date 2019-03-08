#include<bits/stdc++.h>
using namespace std;

int di_x[] = {0,0,-1},j=0,res_x[8],res_y[8];
int di_y[] = {-1,1,0};
char ch[] = {'I','E','H','O','V','A','#'},mat[10][10];

void dfs(int s_i,int s_j)
{
    for(int i=0;i<3;++i){
        if(mat[s_i+di_x[i]][s_j+di_y[i]]==ch[j]){
            res_x[j] = di_x[i];
            res_y[j] = di_y[i];
            j++;
           if(j<7) dfs(s_i+di_x[i],s_j+di_y[i]);
            return;
        }
    }
}

int main()
{
    int tc,n,m,source_i,source_j;
    cin>>tc;
    while(tc--){
        cin>>n>>m;
        for(int i=1;i<=n;++i){
            for(int j=1;j<=m;++j){
                cin>>mat[i][j];
                if(mat[i][j]=='@'){
                    source_i = i;
                    source_j = j;
                }
            }
        }
        dfs(source_i,source_j);

        if(res_x[0]==0 && res_y[0]==-1) cout<<"left";
        else if(res_x[0]==0 && res_y[0]==1) cout<<"right";
        else if(res_x[0]==-1 && res_y[0]==0) cout<<"forth";

        for(int i=1;i<7;++i){
            if(res_x[i]==0 && res_y[i]==-1) cout<<" left";
            else if(res_x[i]==0 && res_y[i]==1) cout<<" right";
            else if(res_x[i]==-1 && res_y[i]==0) cout<<" forth";
        }
        cout<<endl;
        j = 0;
        memset(mat,0,sizeof(mat[0][0])*100);
    }
    return 0;
}
