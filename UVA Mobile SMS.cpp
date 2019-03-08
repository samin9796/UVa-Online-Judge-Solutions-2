#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--){
       int n;
       scanf("%d",&n);
       int ara1[n+9],ara2[n+9];
       for(int i=0;i<n;++i){
        cin>>ara1[i];
       }
       for(int i=0;i<n;++i){
        cin>>ara2[i];
       }
       for(int i=0;i<n;++i){
        if(ara1[i]==1){
            if(ara2[i]==1) cout<<'.';
            else if(ara2[i]==2) cout<<',';
            else if(ara2[i]==3) cout<<'?';
            else if(ara2[i]==4) cout<<'"';
        }
        else if(ara1[i]==2){
            if(ara2[i]==1) cout<<'a';
            else if(ara2[i]==2) cout<<'b';
            else if(ara2[i]==3) cout<<'c';
        }
        else if(ara1[i]==3){
            if(ara2[i]==1) cout<<'d';
            else if(ara2[i]==2) cout<<'e';
            else if(ara2[i]==3) cout<<'f';
        }
         else if(ara1[i]==4){
            if(ara2[i]==1) cout<<'g';
            else if(ara2[i]==2) cout<<'h';
            else if(ara2[i]==3) cout<<'i';
        }
        else if(ara1[i]==5){
            if(ara2[i]==1) cout<<'j';
            else if(ara2[i]==2) cout<<'k';
            else if(ara2[i]==3) cout<<'l';
        }
          else if(ara1[i]==6){
            if(ara2[i]==1) cout<<'m';
            else if(ara2[i]==2) cout<<'n';
            else if(ara2[i]==3) cout<<'o';
        }
          else if(ara1[i]==7){
            if(ara2[i]==1) cout<<'p';
            else if(ara2[i]==2) cout<<'q';
            else if(ara2[i]==3) cout<<'r';
            else if(ara2[i]==4) cout<<'s';
        }
          else if(ara1[i]==8){
            if(ara2[i]==1) cout<<'t';
            else if(ara2[i]==2) cout<<'u';
            else if(ara2[i]==3) cout<<'v';
        }
         else if(ara1[i]==9){
            if(ara2[i]==1) cout<<'w';
            else if(ara2[i]==2) cout<<'x';
            else if(ara2[i]==3) cout<<'y';
            else if(ara2[i]==4) cout<<'z';
        }
        else if(ara1[i]==0){
            if(ara2[i]==1) cout<<' ';
        }
       }
       cout<<endl;
    }
    return 0;
}
