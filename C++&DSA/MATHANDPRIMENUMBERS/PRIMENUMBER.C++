#include<bits/stdc++.h>
using namespace std;

void factor(int n){
    for(int i=1;i<sqrt(n);i++){
        if(n%i==0) {
            cout<<i<<" ";

        }
    }
           
for (int i = sqrt(n) ;i>=1; i--)
{
     if(n%i==0) {
            cout<<n/i<<" ";

        }
}

}
int main(){
    int n;
    cin>>n;
  bool flag=false;
  if(n==1) flag=true;
    for (int i = 2; i<=sqrt(n); i++)
    {
     if(n%i==0){
        flag=true;
     }

    }
    if(flag==false){
        cout<<"PRIME NO";
    }
    else{
        cout<<"not prime";
    }
factor(n);
}