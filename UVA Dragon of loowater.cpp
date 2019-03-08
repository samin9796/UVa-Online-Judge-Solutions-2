#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    while(cin>>n>>m){
            if(n==0 && m==0)break;
            int arr1[21000],arr2[21000];
        for(int i=0;i<n;++i){
            cin>>arr1[i];
        }
        for(int i=0;i<m;++i){
            cin>>arr2[i];
        }
        if(n>m){
            cout<<"Loowater is doomed!"<<endl;
            continue;
        }
        sort(arr1,arr1+n);
        sort(arr2,arr2+m);
        bool temp = true;
        int sum = 0;
        for(int i=0,j=0;i<n || j<m;){
            if(arr1[i]<=arr2[j]){
                sum+=arr2[j];
                i++;
                j++;
            }
            else{
                j++;
            }
            if(j==m && i<=n-1){
                temp = false;
                break;
            }
            if(i==n && j<m)break;
        }
        if(temp==false)cout<<"Loowater is doomed!"<<endl;
        else cout<<sum<<endl;
    }
    return 0;
}
