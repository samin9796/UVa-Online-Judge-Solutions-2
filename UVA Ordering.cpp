#include<bits/stdc++.h>
using namespace std;

vector<int>adj[100];
int input[100];
string st,ch;

void dfs(int current)
{
   colour[current] = 1;
   for(int i=0;i<adj[current].size();++i){
        now = adj[current][i];
    if(colour[now]==0) dfs(now);
    else if(colour[now]==1){
        flag = false;
        return;
    }
   }
   colour[current] = 2;
   res[cnt++] = current;
   return;
}

int main()
{
    int tc,x,y;
    cin>>tc;
    cin.ignore();
    cin.ignore();
    while(getline(cin,st)){
        int len1 = st.size();
        for(int i=0,j=0;j<len1;++i,j+=2){
            input[i] = (st[j]-'A')+1;
        }
        len1 = (len1+1)/2;
        sort(input,input+len1);
        getline(cin,ch);
        int len2 = ch.size();
        for(int i=0;i<len2;i+=4){
            x = ch[i]-'A'+1;
            y = ch[i+2]-'A'+1;
            adj[x].push_back(y);
        }
        for(int j=1;j<=len1;++j){
                cnt = 0;
                flag = true;
                memset(colour,0,sizeof(colour[0])*100);
        for(int i=len1-j;i>=0;--i){
            if(colour[input[i]]==0)dfs(input[i]);
            if(flag==false)break;
        }
        if(flag==true){
            for(int p=cnt-1;p>=0;--p) cout<<'64+res[p]'<<" ";
            cout<<endl;
        }
        else cout<<"NO"<<endl;
        }
    }
    return 0;
}
