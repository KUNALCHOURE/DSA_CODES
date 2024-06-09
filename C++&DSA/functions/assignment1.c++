//: Write a function to count the number of digits in a number and then print the square of this number.

#include<iostream>
using namespace std;

 int count(int n){
    int count=0;
    int r;
    while (n>0)
    {
        r=n%10;
        count++;
        n=n/10;

    }
    return count;
 }

 int square(int n){
    int s=n*n;
    return s;

 }
int main(){
    int n;
    cout<<"enter number";
    cin>>n;

    int p=count(n);
    int r=square(n);
    cout<<p<<" "<<r;


}