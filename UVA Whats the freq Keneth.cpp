#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

int arr[55];
int main()
{
    string st;

    while(getline(cin,st)){
        int len = st.length();
        for(int i=0;i<len;++i){
            if(st[i]=='A') arr[1]++;
            else if(st[i]=='B') arr[2]++;
            else if(st[i]=='C') arr[3]++;
            else if(st[i]=='D') arr[4]++;
            else if(st[i]=='E') arr[5]++;
            else if(st[i]=='F') arr[6]++;
            else if(st[i]=='G') arr[7]++;
            else if(st[i]=='H') arr[8]++;
            else if(st[i]=='I') arr[9]++;
            else if(st[i]=='J') arr[10]++;
            else if(st[i]=='K') arr[11]++;
            else if(st[i]=='L') arr[12]++;
            else if(st[i]=='M') arr[13]++;
            else if(st[i]=='N') arr[14]++;
            else if(st[i]=='O') arr[15]++;
            else if(st[i]=='P') arr[16]++;
            else if(st[i]=='Q') arr[17]++;
            else if(st[i]=='R') arr[18]++;
            else if(st[i]=='S') arr[19]++;
            else if(st[i]=='T') arr[20]++;
            else if(st[i]=='U') arr[21]++;
            else if(st[i]=='V') arr[22]++;
            else if(st[i]=='W') arr[23]++;
            else if(st[i]=='X') arr[24]++;
            else if(st[i]=='Y') arr[25]++;
            else if(st[i]=='Z') arr[26]++;

            else if(st[i]=='a') arr[27]++;
            else if(st[i]=='b') arr[28]++;
            else if(st[i]=='c') arr[29]++;
            else if(st[i]=='d') arr[30]++;
            else if(st[i]=='e') arr[31]++;
            else if(st[i]=='f') arr[32]++;
            else if(st[i]=='g') arr[33]++;
            else if(st[i]=='h') arr[34]++;
            else if(st[i]=='i') arr[35]++;
            else if(st[i]=='j') arr[36]++;
            else if(st[i]=='k') arr[37]++;
            else if(st[i]=='l') arr[38]++;
            else if(st[i]=='m') arr[39]++;
            else if(st[i]=='n') arr[40]++;
            else if(st[i]=='o') arr[41]++;
            else if(st[i]=='p') arr[42]++;
            else if(st[i]=='q') arr[43]++;
            else if(st[i]=='r') arr[44]++;
            else if(st[i]=='s') arr[45]++;
            else if(st[i]=='t') arr[46]++;
            else if(st[i]=='u') arr[47]++;
            else if(st[i]=='v') arr[48]++;
            else if(st[i]=='w') arr[49]++;
            else if(st[i]=='x') arr[50]++;
            else if(st[i]=='y') arr[51]++;
            else if(st[i]=='z') arr[52]++;
        }
        int* maxx = max_element(arr,arr+53);
        char ch;
        for(int i=1;i<53;++i){
            if((*maxx)==arr[i]){
                if(i<=26)ch = 'A'+(i-1);
               else if(i>26)ch = 'a'+(i-27);
                cout<<ch;
            }
        }
        cout<<" "<<(*maxx)<<endl;
        memset(arr,0,sizeof(arr[0])*55);
    }
    return 0;
}
