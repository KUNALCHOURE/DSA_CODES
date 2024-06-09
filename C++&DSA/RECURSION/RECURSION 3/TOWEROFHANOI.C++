#include<bits/stdc++.h>
using namespace std;

void hanoi(int n,char a,char b,char c)
     {
    if(n==0) return;
    else{
    hanoi(n-1,a,c,b);
    cout<<a<<"->"<<c<<endl;
    hanoi(n-1,b,a,c);
    }
}
int main(){
    int n;
    cout<<"enter the value of n";

    cin>>n;

hanoi(n,'A','B','C');
}