#include<bits/stdc++.h>
using namespace std;

int arr[15],cnt,mini;
void dfs()
{
    for(int i=2;i<=12;++i){
        if(arr[i]==1 && arr[i-1]==1){
            if(i!= 12 && arr[i+1]==0){
                arr[i] = 0;
                arr[i+1] = 1;
                arr[i-1] = 0;
                dfs();
                for(int j=1;j<=12;++j){
                    if(arr[j]==1) cnt++;
                }
                if(mini>cnt){
                    mini = cnt;
                }
                cnt = 0;
                arr[i] = 1;
                arr[i-1] = 1;
                arr[i+1] = 0;
            }
            if(i!=2 && arr[i-2]==0){
                 arr[i-1] = 0;
                arr[i-2] = 1;
                arr[i] = 0;
                dfs();
                for(int j=1;j<=12;++j){
                    if(arr[j]==1) cnt++;
                }
                if(mini>cnt){
                    mini = cnt;
                }
                cnt = 0;
                arr[i] = 1;
                arr[i-1] = 1;
                arr[i-2] = 0;
            }
        }
    }
    for(int j=1;j<=12;++j){
                    if(arr[j]==1) cnt++;
                }
                if(mini>=cnt){
                    mini = cnt;
                }
                cnt = 0;
}
int main()
{
    int tc;
    cin>>tc;
    cin.ignore();
    char ch;
    while(tc--){
        for(int i=1;i<=12;++i){
            cin>>ch;
            if(ch=='-') arr[i] = 0;
            else if(ch=='o') arr[i] = 1;
        }
        cin.ignore();
        mini = 15;
        cnt = 0;
        dfs();
        cout<<mini<<endl;
    }
    return 0;
}
