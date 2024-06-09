#include<bits/stdc++.h>
#include<algorithm>
#include<math.h>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        this->right=NULL;
        this->left=NULL;
    }
};

void display(Node* root){
    if(root==NULL) return ;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);

}
 int s=0;
int sumn(Node* root){
   
    if(root==NULL){
        return 0;
    }
    /*
   s=s+root->val; 
    sumn(root->left);
     
    sumn(root->right);

    return s;
    or */
    return root->val+sumn(root->left)+sumn(root->right);


}
int size;
int sizeoftree(Node* root){
    if(root==NULL) return 0;
    /*
    s++;
    sizeoftree(root->left);
    sizeoftree(root->right);
     or return s;*/
    return  1+sizeoftree(root->left)+sizeoftree(root->right);

}
int m=INT_MIN;
int maxv(Node* root){
    if(root==NULL) return INT_MIN;
   /* m=std::max(m,root->val);
    maxv(root->left);
    maxv(root->right);
     return m;*/
     int lmax=maxv(root->left);
     int rmax=maxv(root->right);
     
   return std::max(root->val,std::max(lmax,rmax));
}
int main(){
Node*a= new Node(10);
Node*b= new Node(20);
Node*c= new Node(30);
Node*d= new Node(40);
Node*e= new Node(50);
Node*f= new Node(60);
Node*g= new Node(70);

a->left=b;
a->right=c;
b->left=d;
b->right=e;
c->left=f;
c->right=g;

display(a);
cout<<"sum is"<<sumn(a);

cout<<"size of tree is :"<<sizeoftree(a)<<endl;
cout<<"MAX IS TREE IS:"<<maxv(a);
}