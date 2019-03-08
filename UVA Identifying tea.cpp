#include<iostream>
using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    int n,a,b,c,d,e,count;
    while((cin>>n) && n){
        cin>>a>>b>>c>>d>>e;
        count = 0;
        if(a == n)count++;
        if(b == n)count++;
        if(c == n)count++;
        if(d == n)count++;
        if(e == n)count++;

        cout<<count<<'\n';
    }
    return 0;
}
