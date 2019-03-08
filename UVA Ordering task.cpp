#include<iostream>
#include<cstring>
using namespace std;

int n,p,in[105],out[105],a,b,m[102][102];
int main()
{
    while(cin>>n>>p){
        if(n==0 && p==0) break;
        for(int i=1;i<=p;++i){
            cin>>a>>b;
           if(m[a][b]==0) in[b]++;
           m[a][b] = 1;
        }
        int k=0;

        for(int i=1;i<=n;++i){

            if(in[i]==0){
                in[i] = -1;
                out[k++]=i;
                for(int j=1;j<=n;++j){
                    if(m[i][j]==1) in[j]--;
                }
                i=0;
            }
        }
        for(int i=0;i<k-1;++i) cout<<out[i]<<" ";
        cout<<out[k-1]<<endl;
        memset(m,0,sizeof(m[0][0])*102*102);
        memset(in,0,sizeof(in[0])*105);
        memset(out,0,sizeof(out[0])*105);
    }
    return 0;
}
