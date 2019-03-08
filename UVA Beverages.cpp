#include<iostream>
#include<map>
#include<cstring>
using namespace std;

int m[300][300],in[10000],out[10000];
int main()
{
    string str1,str2;
    int p=0,n,mm;
    while(cin>>n){
            map<int,string>mapp;
            map<string,int>mappp;
        for(int i=1;i<=n;++i){
            cin>>str1;
            mapp[i] = str1;
            mappp[str1] = i;
        }
        cin>>mm;
        for(int i=1;i<=mm;++i){
            cin>>str1>>str2;
            if(m[mappp[str1]][mappp[str2]] == 0)in[mappp[str2]]++;
            m[mappp[str1]][mappp[str2]] = 1;
        }
        int k=0;
        for(int i=1;i<=n;++i){
            if(in[i]==0){
                in[i] = -1;
                out[k++] = i;
                for(int j=1;j<=n;++j){
                    if(m[i][j]==1){
                        in[j]--;
                    }
                }
                i = 0;
            }
        }
        cout<<"Case #"<<++p<<": Dilbert should drink beverages in this order:";
        for(int i=0;i<k;++i){
            cout<<" "<<mapp[out[i]];

        }
        cout<<"."<<endl<<endl;
        memset(m,0,sizeof(m[0][0])*300*300);
        memset(in,0,sizeof(in[0])*10000);
        memset(out,0,sizeof(out[0])*10000);
    }
    return 0;
}
