#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    scanf("%d",&tc);
    for(int t=1;t<=tc;++t){
        int normal,bordar,pos;
        char mat[10][10];
        cin.ignore();
        for(int i=1;i<=5;++i){
            for(int j=1;j<=5;++j){
                scanf("%c",&mat[i][j]);
                if(mat[i][j]=='|') bordar = j;
                if(mat[i][j]=='>') normal = 1,pos = j;
                if(mat[i][j]=='<') normal = 0,pos = j;
            }
            cin.ignore();
        }
        if(normal==1){
            if(pos>bordar) printf("Case %d: No Ball\n",t);
            else printf("Case %d: Thik Ball\n",t);
        }
        else{
            if(pos<bordar) printf("Case %d: No Ball\n",t);
            else printf("Case %d: Thik Ball\n",t);
        }

    }
    return 0;
}
