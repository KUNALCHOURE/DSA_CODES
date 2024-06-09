#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>s;
    s.push(1);
     s.push(2);
      s.push(3);
     s.push(4);
      s.push(5);
       s.push(6); 
stack<int>sn;

int k;
cin>>k;

int index=s.size()-k;
while(s.size()>index+1){
    sn.push(s.top());
    s.pop();
}
s.pop();

while(sn.size()>0){
    s.push(sn.top());
    sn.pop();
}


while(s.size()>0){
    cout<<s.top()<<" ";
    s.pop();
}

}