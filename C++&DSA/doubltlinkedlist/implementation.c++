#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node* next;
    Node* prev;
    Node (int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }

    
};

void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
         temp=temp->next;
    }


}
void displayrec(Node* head){
    Node* temp=head;
   if(head==NULL){
    return;
   }
   cout<<temp->val<<" ";
   display(temp->next);

}

void revdisplayrec(Node* head){ //O(n)space
    Node* temp=head;
   if(head==NULL){
    return;
   }
 
   revdisplayrec(temp->next);
     cout<<temp->val<<" ";

} 

void displayrevusingdll(Node* tail){
    while(tail)
    {
        cout<<tail->val<<" ";
        tail=tail->prev;
    }
}

int main(){
    Node* a=new Node(80);
    Node* b=new Node(70);
    Node* c=new Node(60);
    Node* d=new Node(50);
    Node* e=new Node(4);

    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;

    a->prev=NULL;
    b->prev=a;
    c->prev=b;
    d->prev=c;
    e->prev=d;


display(a);
cout<<endl;
displayrec(a);
cout<<endl;

revdisplayrec(a);
cout<<endl;
displayrevusingdll(e);
}