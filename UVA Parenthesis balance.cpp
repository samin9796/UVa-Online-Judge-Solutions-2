#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main()
{
    int tc;
    string ch;
    cin>>tc;
    cin.ignore();
    while(tc--){
       stack<char>st;
       getline(cin,ch);
       int len = ch.size();
       bool temp = true;

       for(int i=0;i<len;++i){
       if(ch[i]=='(' || ch[i]=='[') st.push(ch[i]);
       if(st.size()==0 && (ch[i]==')' || ch[i]==']')) {
       temp = false;
       break;
       }

        if(ch[i]==')' || ch[i]==']'){
         if(st.top()=='(' && ch[i]==')') st.pop();
         else if(st.top()=='[' && ch[i]==']') st.pop();
         else {
                temp = false;
                break;
         }

        }
       }
       if(temp==true && st.size()==0)cout<<"Yes"<<endl;
       else cout<<"No"<<endl;
    }
    return 0;
}
