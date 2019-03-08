#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    double p,n,res;
    while(cin>>n>>p){
        res = (1/n);
        res = pow(p,res);
        printf("%.0lf\n",res);
    }
    return 0;
}
