//Write a program to find the product of two numbers using pointers.

#include<iostream>
using namespace std;
/*
int prod(int*n,int *m){
    int prod=*n* *m;
return prod;
}
int main(){
    int n,m;
    cout<<"enter two number";
    cin>>n>>m;

    int p=prod(&n,&m);
    cout<<p;

}*/
int main(){
int a = 10, b = 20; 
int *ptr = &a; 
b = *ptr + 1; 
ptr = &b; 
cout << *ptr << " "<< a << " " << b; 
}
