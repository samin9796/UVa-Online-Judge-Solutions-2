#include<iostream>
#include<string>
#include<cstdio>
#include<map>
using namespace std;

class info
{
public:
    string collect[8];
};
int main()
{
    int T;
    cin>>T;
    map<string,info>m;
    getchar();
    info object;
    for(int i=0;i<T;i++){
            string department_name,data;
        getline(cin,department_name);
        while(getline(cin,data)){
                if(data.length()==0)break;
               int temp1 = data.find(",");
               object.collect[0] = data.substr(0,temp1);
               int temp2 = data.find(",",temp1+1);
               object.collect[1] = data.substr(temp1+1,temp2-temp1-1);
               temp1 = data.find(",",temp2+1);
               string index = data.substr(temp2+1,temp1-temp2-1);
               temp2 = data.find(",",temp1+1);
               object.collect[2] = data.substr(temp1+1,temp2-temp1-1);
               temp1 = data.find(",",temp2+1);
               object.collect[3] = data.substr(temp2+1,temp1-temp2-1);
               temp2 = data.find(",",temp1+1);
               object.collect[4] = data.substr(temp1+1,temp2-temp1-1);
               temp1 = data.find(",",temp2+1);
               object.collect[5] = data.substr(temp2+1,temp1-temp2-1);
               object.collect[6] = department_name;
               m[index] = object;

        }
        }
        map<string,info> :: iterator it = m.begin();
        for(;it!=m.end();it++){
                info object = it->second;
            cout<<"----------------------------------------"<<endl;
            cout<<object.collect[0]<<' '<<object.collect[1]<<' '<<it->first<<endl<<object.collect[2]<<endl;
            cout<<"Department: "<<object.collect[6]<<endl;
            cout<<"Home Phone: "<<object.collect[3]<<endl;
            cout<<"Work Phone: "<<object.collect[4]<<endl;
            cout<<"Campus Box: "<<object.collect[5]<<endl;
        }


    return 0;
}
