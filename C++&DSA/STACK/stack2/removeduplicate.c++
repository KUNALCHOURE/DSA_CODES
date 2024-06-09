#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
   stack<char>st;
   st.push(s[s.size()-1]);
    for(int i=s.size()-2;i>=1;i--){
        if(s[i]!=st.top()){
            st.push(s[i]);
        }
    }
    string ans="";
    while (st.size()>0)
    {
        ans+=st.top();
        st.pop();
    }
    
    cout<<ans;
}