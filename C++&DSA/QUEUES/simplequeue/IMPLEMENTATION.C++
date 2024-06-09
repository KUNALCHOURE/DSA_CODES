#include<bits/stdc++.h>
using namespace std;

void display(queue<int>&q){
    int size=q.size();
    for(int i=0;i<size;i++){
        int val=q.front();
        cout<<val<<endl;
        q.pop();
        q.push(val);
    }
}

void reverseusingstack(queue<int>&q){
   stack<int>s;
      int size=q.size();
   while(q.size()>0){
        int val=q.front();
         s.push(val);
        q.pop();    
    }
    while(s.size()>0){
        int val=s.top();
        s.pop();
        q.push(val);

    }



}
int main(){
    queue<int>q;
    // push
    //pop
    //front== top
    //size,empty
    //back

    q.push(50);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(60);
    cout<<q.front()<<endl;
      cout<<q.back()<<endl;
 cout<<q.size()<<endl;
 q.pop();
 cout<<q.size()<<endl;
  cout<<q.front()<<endl;
  cout<<endl;

  display(q);

  cout<<endl;

  reverseusingstack(q);
  display(q);
}
