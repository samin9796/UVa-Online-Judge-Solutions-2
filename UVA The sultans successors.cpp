#include<iostream>
#include<cstring>
using namespace std;

int n = 8,queen[40],dia1[40],dia2[40],column[40],a[12][12],maxx;
void nqueen(int att)
{
    if(att==n+1){
            int sum = 0;
        for(int i=1;i<=n;++i){
            sum = sum+a[i][queen[i]];
        }
        if(maxx<sum) maxx=sum;
    }
    for(int i=1;i<=n;++i){
        if(column[i] || dia1[i+att] || dia2[n+i-att]) continue;
        queen[att] = i;
        column[i] = dia1[i+att] =dia2[n+i-att] = 1;
        nqueen(att+1);
        column[i] = dia1[i+att] =dia2[n+i-att] = 0;

    }
}
int main()
{
    int t;
    cin>>t;
    while(t--){
    for(int i=1;i<=8;++i){
        for(int j=1;j<=8;++j){
            cin>>a[i][j];
        }
    }
    maxx = 0;
    nqueen(1);
    int temp = maxx,ct=0;
    while(temp){
        temp = temp/10;
        ct++;
    }
    ct = 5-ct;
    for(int i=0;i<ct;++i) cout<<" ";
    cout<<maxx<<endl;
    memset(queen,0,sizeof(queen[0])*40);
    memset(column,0,sizeof(column[0])*40);
    memset(dia1,0,sizeof(dia1[0])*40);
    memset(dia2,0,sizeof(dia2[0])*40);
    memset(a,0,sizeof(a[0][0])*144);

    }
    return 0;
}
