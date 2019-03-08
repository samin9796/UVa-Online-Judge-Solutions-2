#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    int n,i,temp1;
    bool temp;

    while((cin>>n) && n){
        if(n == 0)break;
        int arr[100000];
        for(i=0;i<n;i++) cin>>arr[i];
        sort(arr,arr+n);
        temp = true;
        for(i=0;i<n-1;i++){
            if(arr[i+1]-arr[i]>200){
                temp = false;
                break;
            }
        }
        if(temp == true){
            temp1 = (1422-arr[n-1])*2;
            if(temp1>200)temp = false;
        }
        if(temp == false) cout<<"IMPOSSIBLE"<<'\n';
        else cout<<"POSSIBLE"<<'\n';
    }
    return 0;
}
