#include<iostream>
using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    long long n;
    while((cin>>n) && n){
        cout<<n-1<<'\n';
    }
    return 0;
}
