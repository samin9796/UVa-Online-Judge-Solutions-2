#include<iostream>
#include<algorithm>
#include<map>
#include<sstream>
#include<utility>
using namespace std;

int main()
{
    int n;
    multimap<string,int> m;
    while(cin>>n){
            if(n==0) break;
    string temps[7];
    int a[7];
    for(int i=0;i<n;i++){
            for(int j=0;j<5;j++) cin>>a[j];
            sort(a,a+5);
        for(int j=0;j<5;j++){
            stringstream sso;
            sso<<a[j];
            sso>>temps[j];
        }
        string temp = temps[0]+temps[1]+temps[2]+temps[3]+temps[4];
        m.insert(pair<string,int>(temp,i));
    }
     multimap<string,int>:: iterator it = m.begin();
     int maxim = m.count(it->first);
     int count1=0;
     for(;it!=m.end();++it){
        if(maxim<m.count(it->first)) maxim = m.count(it->first);
     }
     multimap<string,int>::iterator iter = m.begin();
     for(;iter!=m.end();++iter){
        if(maxim == m.count(iter->first))count1++;
     }
     cout<<count1<<endl;
    m.clear();
    }
    return 0;
}

