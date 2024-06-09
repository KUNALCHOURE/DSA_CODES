/*Write a program to calculate the sum of odd numbers between a and b (both inclusive) using
recursion.*/

#include<iostream>
using namespace std;
int sum(int a,int b){
    if(a>b) return 0;

    else{
     if(a%2!=0){
        return a+sum(a+2,b);
     }
     else{
        return sum(a+1,b);
     }
     
     
    }
   
}
int main(){
    int a,b;
    cin>>a>>b;

 cout<<sum(a,b);
}