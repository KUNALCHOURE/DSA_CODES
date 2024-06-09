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

class Stack{
    public:
    Node* head;
   int size;
Stack(){
head=NULL;
size=0;

}
void push(int val){
    Node* temp=new Node(val);
    temp->next=head;
    head=temp;
    size++;

}
    void pop(){
        if(head==NULL){
            cout<<"cannot pop value";
            return;
        }
        head=head->next;
        size--;
    }
    
    int top(){
        if(head==NULL){
            cout<<"stack is empty";
            
        }
        return head->value;
    }

    void display(){
        Node* temp=head;
        print(temp);
        cout<<endl;
         
         
    }
//function to display in order of push
    void print(Node* temp){
        if(temp==NULL) return;
        print(temp->next);
        cout<<temp->value;
    }
};
int main(){

Stack s;
s.push(1);
s.push(2);
s.push(3);
s.push(4);
s.push(5);

cout<<s.size;
s.display();





}