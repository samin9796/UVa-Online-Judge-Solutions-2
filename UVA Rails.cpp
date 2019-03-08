#include<iostream>
#include<stack>
using namespace std;

int main()
{
    int n,arr[1005];
    while(cin>>n){
        if(n==0)break;
        while(1){
            stack<int>st;
            cin>>arr[0];
            if(arr[0]==0)break;
            for(int i=1;i<n;++i){
                cin>>arr[i];
            }
            bool temp = true;
            for(int i=1,j=0;j<n;){

                if(i<arr[j]){
                st.push(i);
                i++;
                }
                else if(i==arr[j]){ j++;
                i++;
                }
                else {
                    if(st.top()!=arr[j]){
                        temp = false;
                        break;
                    }
                    else {
                        j++;
                        st.pop();
                    }
                }
            }
            if(temp==false)cout<<"No"<<endl;
            else cout<<"Yes"<<endl;
        }
        cout<<endl;
    }
    return 0;
}
