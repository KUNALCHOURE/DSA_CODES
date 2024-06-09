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


class Linkedlist{
public:
   Node* head;
   Node* tail;
   int size;

   Linkedlist(){
      head=tail=NULL;
      size=0;
   }

   void insertatend(int val){
     Node* temp= new Node(val);
     if(size==0){
        head=tail=temp;
     }
     else{
        tail->next=temp;
        tail=temp;
     }
     size++;
   }

   //inseting at beginning;
   void insertatbeg(int val){
      Node* temp=new Node(val);
    if(size==0){
      head=tail=temp;
    }
    else{
      temp->next=head;
      head=temp;
      size++;
    }
   }

   void display(){
    Node* temp=head;
    while (temp!=NULL)
    {
         cout<<temp->value<<" ";
         temp=temp->next;
    }
    
   }

   void insert(int val,int indx){
      
      if(indx==0){
         insertatbeg(val);

      }
      else if(indx==size){
          insertatend(val);
      }
      else if(indx<0 || indx>size) cout<<"invalid index";

      else {
            Node* t=new Node(val);
         Node* temp=head;
         for (int i = 0; i <indx-1; i++)
         {
            temp=temp->next;
         } 
         t->next=temp->next;
         temp->next=t;

         
      }
      size++;
   }

   void getatindx(int indx){
      Node*temp=head;
      if(indx==0) cout<<head->value;
      else if (indx==size-1) cout<<tail->value;
      else if(indx==0 && indx>size) cout<<"invalid index";
      else{
      for(int i=0;i<indx;i++){
         temp=temp->next;
      }
      cout<<temp->value;
      }
   }

   void deleteathead(){
      Node*temp=head;
       if(size==0){
         cout<<"list is empty";
       }
       else if(size==1)
       {
        head=head->next;
        tail=tail->next;   //tail ko bhi null pe lana padega na
      
       }
       else{
      head=head->next;
     
       }
        size--;
   }

   void deleteattail(){
      Node*temp=head;
      while (temp->next!=tail){
         temp=temp->next;
      }
      temp->next=NULL;
      tail=temp;
    size--;
      
   }

   void deleteatindex(int index){
      Node * temp=head;

      if(index<0){
         cout<<"invalid index";
      }
      else if(index==0){
         deleteathead();
      }
      else if(index==size-1){
         deleteattail();
      }
      else{
      for(int i=0;i<index-1;i++){
            temp=temp->next;

      }
      temp->next=temp->next->next;
    
      }
        size--;
   }
};

int main(){
Linkedlist ll;
ll.insertatend(410);
ll.display();
ll.insertatend(50);
ll.insertatend(55);
ll.display();
cout<<endl;
ll.insertatbeg(1);
ll.insertatbeg(2);
ll.display();
cout<<endl;
ll.insert(400,2);
ll.display();

cout<<endl; 
ll.getatindx(3);
cout<<endl;
ll.deleteathead();
ll.display();
cout<<endl;
ll.deleteattail();
ll.display();
cout<<endl;
cout<<ll.head->value;
cout<<endl;
cout<<ll.tail->value;
cout<<endl;
ll.deleteatindex(1);
ll.display();

}