#include<bits/stdc++.h>
using namespace std;

int main()
{
    int total;
    while(cin>>total){
            cin.ignore();
        stack<char> st;
        vector<int>tree[1000];
        char ch;
        while(cin>>ch && ch!='(');
        string input;
        input[0] = '(';
        int left = 1;
        int right = 0;
        while(left!=right){
            cin>>ch;
            if(ch != ' ') input += ch;
            if(ch == '(') left++;
            else if(ch == ')') right++;
        }
        int length = input.length();
        st.push('(');
        st.push(input[1]);
        int arr[100],index = 0;
        for(int i=2;i<length;++i){
            st.push(input[i]);
            if(st.top()==')'){
                st.pop();
                if(st.top()=='('){
                    st.pop();
                   }
                else {
                        int root = 0,num = 0;
                    for(int i=1;st.top()!= '(';i=i*10){
                        num += (st.top()-'0')*i;
                        st.pop();
                    }
                    st.pop();
                    string temp = "\0";
                    for(int i=1;st.top()!= '(';i=i*10){
                        temp = temp+st.top();
                        root += (st.top()-'0')*i;
                        st.pop();
                    }
                    tree[root].push_back(num);
                    arr[index++] = root;
                    for(int i=temp.length()-1;i>=0;i--){
                        st.push(temp[i]);
                    }
                }
            }
        }

        for(int i=0;i<index;++i){
            int sz = tree[arr[i]].size();
            cout<<"root is "<<arr[i]<<" ";
            for(int j=0;j<sz;++j) cout<<tree[arr[i]][j]<<" ";
            cout<<endl;
        }
    }
    return 0;
}
