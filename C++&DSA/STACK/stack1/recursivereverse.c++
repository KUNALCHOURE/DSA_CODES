#include<bits/stdc++.h>
using namespace std;

void displayrev(stack<int>&s)
{   if(s.size()==0) return ;
    int x=s.top();
    cout<<x<<" ";
    s.pop();
    displayrev(s);
    s.push(x);

}

void display(stack<int>&s){
 if(s.size()==0) return ;
    int x=s.top();
    s.pop();
    display(s);
    cout<<x<<" ";
    s.push(x);
}

void push_at_bottom(stack<int>&s,int val)
{
 if(s.size()==0) {
 s.push(val);
 return ;
}
int x=s.top();
 s.pop();
push_at_bottom(s,val);
 s.push(x);
}
int main(){
  stack<int>s;
  stack<int>temp;
  int val;
  cout<<"enter value";
  cin>>val;
 s.push(8);
 s.push(10);
 s.push(9);
 s.push(7);
 s.push(4);
/*
display(s);
cout<<endl;*/
displayrev(s);
cout<<endl;
display(s);
/*
cout<<endl;
push_at_bottom(s,val);
display(s);*/
}
