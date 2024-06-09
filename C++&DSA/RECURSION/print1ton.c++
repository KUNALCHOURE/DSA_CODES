#include<iostream>
using namespace std;


void acsnum(int i,int n){
    
    
    if(i>n) return;
     else{cout<<i<<endl;
    acsnum(i+1,n);
     }
}
int main(){
    int n;
    cin>>n;

acsnum(1,n);
}