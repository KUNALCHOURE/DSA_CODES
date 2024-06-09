#include<bits/stdc++.h>
using namespace std;

void pushatindex(stack<int>&st,int index,int val){
    stack<int>temp;
    while(st.size()>index){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while (temp.size()>0)
    {
        st.push(temp.top());
        temp.pop();
    }
    

}
int main(){
  stack<int>s;
  stack<int>temp;
 s.push(8);
 s.push(10);
 s.push(9);
 s.push(7);
 s.push(4);
 int index, val;

//insert at bottom
 /*while(s.size()>0){
     cout<<s.top()<<" ";
     temp.push(s.top());
     s.pop();
 }

 cout<<endl;
s.push(40);

 while(temp.size()>0){
     s.push(temp.top());
     temp.pop();
 }

  while(s.size()>0){
     cout<<s.top()<<" ";
     temp.push(s.top());
     s.pop();
 }
*/

cout<<"entet index";
cin>>index;

cout<<"enter val";
cin>>val;

pushatindex(s,index,val);

while(s.size()>0){
     cout<<s.top()<<" ";
     temp.push(s.top());
     s.pop();
 }
     
}