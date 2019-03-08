#include<iostream>
using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    int T,count(0);
    double a,b,c,d;
    bool temp;

    cin>>T;

    for(int i=0;i<T;i++){
        cin>>a>>b>>c>>d;

        temp = true;

        if((a>56 || b>45 ||  c>25 ||  d>7) && ((a+b+c)>125 || d>7)) temp = false;
        if(temp == true) count++;
        cout<<temp<<'\n';
    }
    cout<<count<<endl;
    return 0;
}
