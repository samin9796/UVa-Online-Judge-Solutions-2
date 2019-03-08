#include<iostream>
#include<string>
#include<deque>
#include<map>
using namespace std;

int main()
{
    int nodenum,edgenum;
    while(cin>>nodenum>>edgenum)
    {
        if(nodenum == 0)break;
        map<int,string>bi;
        deque<int>q;
        int a[210][210],node,visited[100000],var1,var2;
        for(int i=0;i<nodenum;i++){
                for(int j=0;j<nodenum;j++)
            a[i][j]=0;
        }

        for(int i=0;i<edgenum;i++){
            cin>>var1>>var2;
            a[var1][var2] = 1;
            a[var2][var1] = 1;
        }
        for(int i=0;i<nodenum;i++){
            bi[i] = "white";
        }
        q.push_back(0);
        node = q.front();
        q.pop_front();
        bool temp = true;
        for(int i=0;i<nodenum;i++)visited[i] = 0;
        visited[0]=1;
        bi[0] = "red";

        while(1){
            for(int i=0;i<nodenum;i++){

                if(a[node][i]==1 && visited[i]==0){
                    visited[i] = 1;
                    q.push_back(i);
                    if(bi[node] == "green") bi[i] = "red";
                    else bi[i] = "green";
                }
                else if(bi[node]==bi[i] && a[node][i] ==1){
                    temp = false;
                    break;
                }
            }
            if(q.empty())break;
            node = q.front();
            q.pop_front();
            if(temp == false)break;
        }
        if(temp == false)cout<<"NOT BICOLORABLE."<<endl;
        else cout<<"BICOLORABLE."<<endl;
    }
    return 0;
}
