#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    while(cin>>n){
        int cnt = 0;
        while(n){
            n=n/2;
            cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
