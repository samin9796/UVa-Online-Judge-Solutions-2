#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;

int arr[30],total,maxi,n,temp[30];
vector<int>v,store;
void subset(int sum,int i)
{
    if(sum==total){
        return;
    }
    if(sum>total || i>n-1){
        return;
    }
    sum+=arr[i];

    v.push_back(arr[i]);
    if(maxi<sum && sum<=total){
        maxi = sum;
        store = v;
    }
    subset(sum,i+1);
    sum = sum-arr[i];

    v.pop_back();
    subset(sum,i+1);
}
int main()
{
    while(cin>>total>>n){
    for(int j=0;j<n;++j){
        cin>>arr[j];
        temp[j] = arr[j];
    }
    sort(arr,arr+n);
    subset(0,0);
    for(int i=0;i<n;++i){
    for(int j=0;j<store.size();++j){
       if(temp[i]==store[j]) cout<<store[j]<<" ";
    }
    }
    cout<<"sum:"<<maxi<<endl;
    maxi = 0;
    memset(arr,0,sizeof(arr[0])*100);
    }
    return 0;
}
