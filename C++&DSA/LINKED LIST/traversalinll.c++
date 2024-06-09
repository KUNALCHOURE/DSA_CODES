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

void display(Node* head){
    Node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->value<<" ";
        temp=temp->next;
    }
    
}

void displayr(Node* head){
    if(head==NULL) return;
    cout<<head->value<<" ";
    display(head->next);
}
int size(Node* head){
    int count=0;
    Node* temp=head;

    while (temp!=NULL)
    {
      count++;
      temp=temp->next;
    }
   return count; 
}
void reversell(Node* head){
    if(head==NULL) return ;
    reversell(head->next);
    cout<<head->value<<" ";
;}
int main(){
Node *a=new Node(10);

Node *b=new Node(20);

Node *c=new Node(30);

Node *d=new Node(40);

a->next=b;
b->next=c;
c->next=d;


/* //TRAVERSING
Node* temp=a;
while (temp!=NULL){
     cout<<temp->value<<" ";
     temp=temp->next; 
}
cout<<a->next->next->next->value;

}*/

//TRAVERSING
display(a);
cout<<endl;
displayr(a);
cout<<endl;

//finding size of ll;
cout<<size(a);
cout<<endl;
//DISPLAY IN REVERSE 
reversell(a);
}


