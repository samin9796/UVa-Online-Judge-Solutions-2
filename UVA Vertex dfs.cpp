#include<bits/stdc++.h>
using namespace std;

int cnt1,colour[105],graph[105][105],n;


void dfs(int source)
{
    colour[source] = 1;
    for(int i=1;i<=n;++i){
        if(graph[source][i]==1 && colour[i]==0){
            colour[i] = 1;
            cnt1++;
            dfs(i);
        }
    }
    colour[source] = 2;
}


int main()
{
    int node,node2;
    while(cin>>n){
        if(n==0)break;
        memset(graph,0,sizeof(graph[0][0])*105*105);
        while(cin>>node){
            if(node==0)break;
            while(cin>>node2){
                if(node2==0)break;
                graph[node][node2] = 1;
            }
        }
        int no,source;
        cin>>no;
        for(int i=0;i<no;++i){
            cin>>source;
            int flag = source;

            cnt1 = 1;
            memset(colour,0,sizeof(colour[0])*105);
            dfs(source);
            if(graph[flag][flag]==0){
                    cnt1--;
                    colour[flag] = 0;
                for(int i=1;i<=n;++i){
                    if(colour[i]==2){
                        if(graph[i][flag]==1){
                            cnt1++;
                            colour[flag] = 2;
                            break;
                        }
                    }
                }
            }

            cout<<n-cnt1;
            for(int i=1;i<=n;++i){
               if(colour[i]==0)cout<<" "<<i;
            }
            cout<<endl;
        }
    }
    return 0;
}
