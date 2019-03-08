#include<iostream>
#include<string>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--){
        string n;
        cin>>n;
        if((n.size() == 1 && n[0]=='1') || (n.size() == 1 && n[0]=='4')|| (n.size()==2 && n[1]=='8' && n[0]=='7'))cout<<"+"<<endl;
        else if(n[n.size()-2]=='3' && n[n.size()-1]=='5')cout<<"-"<<endl;
        else if(n[0]=='9' && n[n.size()-1]=='4')cout<<"*"<<endl;
        else cout<<"?"<<endl;
    }
    return 0;
}
