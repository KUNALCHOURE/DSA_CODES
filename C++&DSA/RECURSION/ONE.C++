#include<iostream>
using namespace std;

//factorial

int factorial(int n){
    if(n==0) return 1;
    if(n==1) return 1;
    else{
      return n*factorial(n-1);
    }
}

void num(int n){
    if(n==0) return;
    cout<<n<<endl;
    num(n-1);
}

void acsnum(int i,int n){
    
    
    if(i>n) return;
     else{cout<<i<<endl;
    acsnum(i+1,n);
     }
}
int main(){
    int n;
    cin>>n;
/*cout<<factorial(n)<<endl;

num(n);*/
acsnum(1,n);
}