#include<bits/stdc++.h>
using namespace std;
class Queue{
    public:
  int f,r;
  int arr[5];
  Queue(){
    f=0;
    r=0;
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
int main()
{

Queue q;

    q.push(50);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(55);
    q.display();

   cout<< q.back();
    cout<< q.front();


}