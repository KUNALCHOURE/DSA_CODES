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

int main(){
  Node a(10);
  Node b(20);
  Node c(30);

  Node d(40);


  //firnming ll
  a.next=&b;
  b.next=&c;
  c.next=&d;
  d.next=NULL;
  cout<<a.next->value<<endl;  //IT WILL GIVE VALUE OF B
  cout<<((a.next)->next)->value<<endl; // it will give value of this

Node temp=a;
while (1)
{
   cout<<temp.value<<" ";
   if(temp.next==NULL) break;
   temp=*(temp.next);
}



}
