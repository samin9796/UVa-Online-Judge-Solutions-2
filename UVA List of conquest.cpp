#include<iostream>
#include<string>
#include<map>
#include<utility>
#include<cstdio>
using namespace std;

int main()
{
    int T,temp;
    cin>>T;
    getchar();
    multimap<string,string> m;
    map<string,int>print;
    string country,garbage;
    while(T--){
        cin>>country;
        getline(cin,garbage);
        m.insert(pair<string,string>(country,garbage));
    }
    multimap<string,string>::iterator it = m.begin();

    for(;it!=m.end();it++){
        temp = m.count(it->first);
        print[it->first] = temp;
    }
    map<string,int>:: iterator iter = print.begin();
    for(;iter!=print.end();++iter){
        cout<<iter->first<<' '<<iter->second<<endl;
    }
    return 0;
}
