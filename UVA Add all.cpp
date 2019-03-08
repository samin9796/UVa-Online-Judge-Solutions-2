#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    long int n,i,temp,sum;

    while((cin>>n) && n){
            if(n==0) break;
    int arr[100000];
        for(i = 0;i<n;i++)cin>>arr[i];
        sort(arr,arr+n);

        temp = arr[0]+arr[1];
        sum = temp;
        for(i=2;i<n;i++){
            temp = arr[i]+temp;
            sum += temp;
        }
        cout<<sum<<'\n';
    }
    return 0;
}
