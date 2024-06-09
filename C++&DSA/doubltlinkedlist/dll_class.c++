#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    
    Node* next;
    Node* prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
int size=0;
//insert at head
class DLL{
    public:
    Node*head;
    Node*tail;
    int size;
      DLL(){
      head=tail=NULL;
      size=0;
   }
void insertathead(int val){
    Node*nn=new Node(val);
    if(size==0) head=tail=nn;
    else{
      head->prev=nn;
      nn->next=head;
       head=nn;
    }
size++;
   
    }

    //insert at  tail
void insertatail(int val){
    Node*nn=new Node(val);
    tail->next=nn;
    nn->next=NULL;
    tail=nn;
size++;
    }
//insert at index
void insertaindex(int val,int index){
   if(index<0 || index>size) {cout<<"INVALID INDEX";return ;}
  else if(index==0) insertathead(val);
  else if(index==size) insertatail(val);
   
   else{ Node*nn=new Node(val);
    Node*temp=head;
   for(int i=0;i<index-1;i++){
    temp=temp->next;

   }
   nn->next=temp->next;
    temp->next=nn;
    size++;
    }
}

Node* deleteathead() {

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
      head->prev=NULL;

     
       }
        size--;
    }

//DELETE AT TAIL
void deleteatail(){

    if(size==0){
        cout<<"list is empty"<<endl;
        return;

    }
    else if(size==1){
        deleteathead();
        return;
    }
    Node*temp=tail->prev;
    temp->next=NULL;
    tail=temp;
    size--;
    }


//displat linked list
void display(){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
         temp=temp->next;
    }
}

};
int main(){
    DLL dl;
  /* DLL* a=new Node(80);
    Node* b=new Node(70);
    Node* c=new Node(60);
    Node* d=new Node(50);
    Node* e=new Node(4);
Node*head=a;
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;

    a->prev=NULL;
    b->prev=a;
    c->prev=b;
    d->prev=c;
    e->prev=d;*/

dl.display();
cout<<endl;
dl.insertathead(90);
dl.display();
cout<<endl;


cout<<"insert at tail"<<endl;
dl.insertatail(50);
dl.display();
cout<<endl;

cout<<"insert at an index"<<endl;
dl.insertaindex(5,1);
dl.display();
cout<<endl;
cout<<"delete at HEAD"<<endl;
dl.deleteathead();
dl.display();


cout<<endl;
cout<<"delete at TAIL"<<endl;
dl.deleteatail();
dl.display();

}

