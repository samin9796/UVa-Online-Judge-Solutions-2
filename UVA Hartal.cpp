#include<iostream>
#include<map>
using namespace std;

int main()
{
    int T,n,p,var;
    cin>>T;
    map<int,int>m;
    for(int i = 0;i<T;i++){
        cin>>n;
        for(int j=1;j<=n;j++){
            m[j] = 0;
        }
        cin>>p;
        for(int j = 0;j<p;j++){
            cin>>var;
            for(int k = 1;k<=n;k++){
                if(k%var==0 && ((k%7)!=0 && (k+1)%7!=0)){
                    m[k] = 1;
                }
            }
        }
        int count1 = 0;
        for(int j=1;j<=n;j++){
            if(m[j]==1)count1++;
        }
        cout<<count1<<endl;
        m.clear();
    }
    return 0;
}
