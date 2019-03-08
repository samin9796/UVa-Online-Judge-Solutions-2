#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int>q;
    int n,temp;
    while(cin>>n){
        if(n==0)break;
        int arr[100000];
        if(n==1){
            cout<<"Discarded cards:"<<endl;
            cout<<"Remaining card: "<<1<<endl;
            continue;
        }
        else if(n==2){
            cout<<"Discarded cards: "<<1<<endl;
            cout<<"Remaining card: "<<2<<endl;
            continue;
        }
        for(int i=1;i<=n;i++){
            q.push_back(i);
        }
        int i=0;
        while(q.size()!=2){
            arr[i++] = q.front();
            q.pop_front();
            temp = q.front();
            q.push_back(temp);
            q.pop_front();
        }
        cout<<"Discarded cards: ";
        for(i=0;i<n-2;i++)
            cout<<arr[i]<<", ";
        cout<<q.front()<<endl;
        cout<<"Remaining card: "<<q.back()<<endl;
        q.clear();
    }
    return 0;
}
