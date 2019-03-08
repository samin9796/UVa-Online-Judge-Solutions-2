#include<iostream>
#include<map>
#include<algorithm>
#include<utility>
#include<vector>
using namespace std;

int main()
{
    int T;
    cin>>T;
    cin.ignore();
    map<string,int>m1;
    vector<pair<int,string> >v;
    while(T--){
        string str1;
        getline(cin,str1);
        transform(str1.begin(),str1.end(),str1.begin(),::toupper);
        int m,n,b,var;
        cin>>m>>n>>b;
        cin.ignore();
        string svar,svar2;
        for(int i=0;i<m;i++){
           cin>>svar>>var;
           cin.ignore();
           m1[svar] = var;
        }
        int k;
        for(int i=0;i<n;i++){
            getline(cin,svar);
            cin>>k;
            int sum = 0;
            for(int j=0;j<k;j++){
                cin>>svar2>>var;
                cin.ignore();
                sum+=(m1[svar2]*var);
            }
            if(sum<=b){
                    v.push_back(make_pair(sum,svar));
            }
        }
        cout<<str1<<endl;
        if(v.size()==0){
                cout<<"Too expensive!"<<endl<<endl;
                continue;
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();++i){
            cout<<v[i].second<<endl;
        }
        cout<<endl;
        v.clear();
        m1.clear();
    }
    return 0;
}
