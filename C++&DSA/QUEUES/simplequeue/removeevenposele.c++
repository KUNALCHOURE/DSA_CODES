#include<bits/stdc++.h>
using namespace std;

void removeeven(queue<int>&q){
    int size=q.size();
   for(int i=0;i<size;i++){
     if(i%2==0){
        q.pop();
     }
     else{
        int val=q.front();
        q.pop();
        q.push(val);
     }
   }
   
}


void display(queue<int>&q){
    int size=q.size();
    for(int i=0;i<size;i++){
        int val=q.front();
        cout<<val<<endl;
        q.pop();
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
   

   display(q);
   cout<<endl;
   removeeven(q);
   display(q);
}
