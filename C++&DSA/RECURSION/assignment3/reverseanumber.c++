#include<bits/stdc++.h>
using namespace std;
 int num=0;
void rev(int n)
{ 
    if(n==0){
        cout<<num;
        return;
    }
    else{
    num=(num*10)+n%10;
    rev(n/10);
    }
  
}
int main(){
    int n;
    cin>>n;
    rev(n);
}