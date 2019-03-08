#include<iostream>
using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    unsigned long long int r,n;
    while((cin>>r) && r){
        if(r == 0)break;
        n = (r*10)/9;
        if(n%10 == 0){
            cout<<n-1<<' '<<n<<'\n';
        }
        else cout<<n<<'\n';
    }
    return 0;
}
