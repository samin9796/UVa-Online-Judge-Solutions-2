#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

int main()
{
    int n,d,r,var1,var2,temp;
    while(cin>>n>>d>>r){
        if(n==0 and d==0 and r==0)break;
        list<int>v1,v2;
        for(int i=0;i<n;i++){
                cin>>var1;
            v1.push_back(var1);
        }
        for(int i=0;i<n;i++){
            cin>>var2;
            v2.push_back(var2);
        }
        v1.sort();
        v2.sort();
        list<int>::iterator it11 = v1.begin();
        list<int>::iterator it22 = v2.end();

        for(;it11!=v1.end();it11++)cout<<*it11<<endl;


        int res = 0;
        list<int>::iterator it1 = v1.begin();
        list<int>::iterator it2 = v2.end();
        it2--;

        for(;it1!=v1.end();it1++,it2--){
                temp = (*it1)+(*it2);
                cout<<"temp is "<<temp<<endl;
            if(temp>d){
                temp = temp - d;
                res += temp;
                cout<<"res is "<<res<<endl;
            }
        }
        cout<<res*r<<endl;
    }
    return 0;
}
