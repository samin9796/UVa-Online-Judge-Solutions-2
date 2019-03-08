#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

int arr[30];
int main()
{
    int t;
    string st;
    cin>>t;
    cin.ignore();
    while(t--){
        getline(cin,st);
        int len = st.length();
        for(int i=0;i<len;++i){
            if(st[i]=='a' || st[i]=='A') arr[1]++;
            else if(st[i]=='b' || st[i]=='B') arr[2]++;
            else if(st[i]=='c' || st[i]=='C') arr[3]++;
            else if(st[i]=='d' || st[i]=='D') arr[4]++;
            else if(st[i]=='e' || st[i]=='E') arr[5]++;
            else if(st[i]=='f' || st[i]=='F') arr[6]++;
            else if(st[i]=='g' || st[i]=='G') arr[7]++;
            else if(st[i]=='h' || st[i]=='H') arr[8]++;
            else if(st[i]=='i' || st[i]=='I') arr[9]++;
            else if(st[i]=='j' || st[i]=='J') arr[10]++;
            else if(st[i]=='k' || st[i]=='K') arr[11]++;
            else if(st[i]=='l' || st[i]=='L') arr[12]++;
            else if(st[i]=='m' || st[i]=='M') arr[13]++;
            else if(st[i]=='n' || st[i]=='N') arr[14]++;
            else if(st[i]=='o' || st[i]=='O') arr[15]++;
            else if(st[i]=='p' || st[i]=='P') arr[16]++;
            else if(st[i]=='q' || st[i]=='Q') arr[17]++;
            else if(st[i]=='r' || st[i]=='R') arr[18]++;
            else if(st[i]=='s' || st[i]=='S') arr[19]++;
            else if(st[i]=='t' || st[i]=='T') arr[20]++;
            else if(st[i]=='u' || st[i]=='U') arr[21]++;
            else if(st[i]=='v' || st[i]=='V') arr[22]++;
            else if(st[i]=='w' || st[i]=='W') arr[23]++;
            else if(st[i]=='x' || st[i]=='X') arr[24]++;
            else if(st[i]=='y' || st[i]=='Y') arr[25]++;
            else if(st[i]=='z' || st[i]=='Z') arr[26]++;
        }
        int* maxx = max_element(arr,arr+27);
        for(int i=1;i<27;++i){
            if((*maxx)==arr[i]){
                char ch = 'a'+(i-1);
                cout<<ch;
            }
        }
        cout<<endl;
        memset(arr,0,sizeof(arr[0])*30);
    }
    return 0;
}
