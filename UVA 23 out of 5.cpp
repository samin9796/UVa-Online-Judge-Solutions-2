#include<iostream>
#include<cstring>
using namespace std;

int arr[7],visited[7];
bool temp;
void backtract(int sum,int i)
{
    if(sum==23 && i==5){
        temp = true;
        return;
    }
    if(i>4) return;
    if(temp==true) return;
    for(int j=0;j<5;++j){
        if(visited[j]==0){
            visited[j] = 1;
            backtract(sum+arr[j],i+1);
            backtract(sum-arr[j],i+1);
            backtract(sum*arr[j],i+1);
            visited[j] = 0;
        }
    }

}
int main()
{
    while(cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4]){
        if(arr[0]==0 && arr[1]==0 && arr[2]==0 && arr[3]==0 && arr[4]==0) break;
        temp = false;
         for (int i = 0; i < 5; i++){
   visited[i] = 1;
   backtract(arr[i],1);
   visited[i] = 0;
  }
        if(temp==true)cout<<"Possible"<<endl;
        else cout<<"Impossible"<<endl;
        memset(arr,0,sizeof(arr[0])*7);
        memset(visited,0,sizeof(visited[0])*7);
    }
    return 0;
}
