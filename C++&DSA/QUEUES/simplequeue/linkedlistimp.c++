#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int value;
    Node* next;
    Node(int value){
        this->value=value;
        this->next=NULL;
    }

};


class Queue{
public:
   Node* head;
   Node* tail;
   int s;

   Queue(){
      head=tail=NULL;
      s=0;
   }

int front(){
    if(s==0) {
        cout<<"queue is empty";
        return -1;
    }
    return head->value;
    
}
int back(){
    if(s==0) {
        cout<<"queue is empty";
        return -1;
    }
    return tail->value;
    
}
   void push(int val){
     Node* temp= new Node(val);
     if(s==0){
        head=tail=temp;
     }
     else{
        tail->next=temp;
        tail=temp;
     }
     s++;
   }

   void display(){
    Node* temp=head;
    while (temp!=NULL)
    {
         cout<<temp->value<<" ";
         temp=temp->next;
    }
    
   }

   

   void pop(){
      Node*temp=head;
       if(s==0){
         cout<<"list is empty";
       }
       else if(s==1)
       {
        head=head->next;
        tail=tail->next;   //tail ko bhi null pe lana padega na
      
       }
       else{
      Node*temp=head;
      head=head->next;
      delete(temp);   //isse space waited nahi hogi 
     
       }
        s--;
   }

int size(){
    return s;
}
int empty(){
    if(s==0) return true;
    else return false;
}
};


int main(){
Queue q;

    q.push(50);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(55);
    q.display();
    cout<<endl;
    q.pop();
    q.display();
}