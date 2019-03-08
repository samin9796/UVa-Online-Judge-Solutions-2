#include<iostream>
using namespace std;

int row[40],queen[40],dia1[40],dia2[40],ct,a,b;
void nqueen(int att)
{
    if(att==9){
            if(queen[b]==a){
            if(ct<10)cout<<" "<<ct++<<"     ";
            else cout<<ct++<<"     ";
        for(int i=1;i<=8;++i){
            cout<<" "<<queen[i];
        }
        cout<<endl;
            }
    }
    for(int i=1;i<=8;++i){
        if((row[i] || dia1[i+att] || dia2[8+att-i] )) continue;
        row[i] = 1;
        dia1[i+att] = 1;
        dia2[8+att-i] = 1;
        queen[att] = i;
        nqueen(att+1);
        row[i] = 0;
        dia1[i+att] = 0;
        dia2[8+att-i] = 0;
    }
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        cin>>a>>b;
        queen[b] = a;
        ct = 1;
        cout<<"SOLN       COLUMN"<<endl<<" #      1 2 3 4 5 6 7 8"<<endl<<endl;
        nqueen(1);
    if(tc)cout<<endl;
    }
    return 0;
}
