#include<iostream>
#include<vector>
using namespace std;

vector<int>res;
int visited[60] = {0};
int arr[15],n;
void permu(int pos)
{
    if(res.size()==6){
        cout<<res[0];
        for(int i=1;i<res.size();++i) cout<<" "<<res[i];
        cout<<endl;
        return;
    }
    for(int i=pos;i<n;++i){
        if(visited[i]==0)
        {
            res.push_back(arr[i]);
            visited[i] = 1;
            permu(i+1);
            visited[i] = 0;
            res.pop_back();
        }
    }
}
int main()
{
    int j=1;
    while(cin>>n){
        if(n==0)break;
        if(j>1){
            cout<<endl;
        }
        j++;
        for(int k=0;k<n;++k) cin>>arr[k];
        permu(0);
    }
    return 0;
}
