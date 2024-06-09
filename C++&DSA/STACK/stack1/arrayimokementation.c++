#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
    int arr[5];
    int index;
    Stack(int index){
        this->index=index;
    }


    void push(int val){
        if(index==4){
            cout<<"stack is full";
        }
        index++;
        arr[index]=val;
    }

    void pop(){
        if(index==-1){
            cout<<"stack is empty";
        }
        index--;
    }
    int size(){
         return index+1;
    }
    int top(){
        return arr[index];
    }
};
int main(){

Stack s(-1);
s.push(1);
s.push(2);
s.push(3);
s.push(4);
s.push(5);

cout<<s.size()<<endl;
s.pop();
cout<<s.size()<<endl;



}