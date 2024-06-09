#include<bits/stdc++.h>
using namespace std;
/*class Queue{
    public:
  int f,r,s;
  int arr[];
  Queue(){
    f=0;
    r=0;
    s=0;
  }

  
  void push(int val){
   if(r==5){
  cout<<"queue is full"<<endl;
  return;

   }
   
    arr[r]=val;   
    r++;

   
  }
     void pop(){
   if((f-r)==0){
  cout<<"queue is empty"<<endl;
  return;

   }
   
    f++;
   
  }
  int front(){
    if(f==r){
        return -1;
    }
  
       return arr[f];
    
  }

    int back(){
    if(f==r){
       return -1;
    }
   
        return arr[r-1];
    
  }
  int size(){
    return r-f;
  }
  bool empty(){
    if(f-r==0){
        return true;
    }
   
        return false;
    
  }

void display(){
    for(int i=f;i<r;i++){
        cout<<arr[i]<<" ";
    }
  
}
};
*/
void reversekele(queue<int>&q,int k){
   stack<int>s;
   int i=1;
   while(i<=k){
    int val=q.front();
    q.pop();
    s.push(val);
    i++;
   }

while(s.size()>0){
    q.push(s.top());
    s.pop();
}

int n=q.size();

for(int i=0;i<n-k;i++){
    q.push(q.front());
    q.pop();
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
int k;
cout<<"enter k";
cin>>k;

q.push(10);
q.push(20);
q.push(30);
q.push(40);
q.push(50);

reversekele(q,k);
display(q);

}
