//balanced  bracket;

#include<bits/stdc++.h>
using namespace std;

bool isbalanced(string s){
    if(s.size()%2!=0){
        return false;
    }
     stack<char>st;
  for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            st.push('(');
        }
        else{
            if(st.size()==0)
            {
                return false;
            }
            if(st.top()=='('){
            st.pop();
            }
        }
    if(s.size()==0){
        return true;

    }
    else return false;

  }
}
int main(){
   string s;
   cin>>s;
 cout<<isbalanced(s);

 
}