#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

int countm=0;
int countc=0;
int a,b;
    for(int i=0;i<n;i++){
      cin>>a;
      cin>>b;
      if(a>b){
        countm++;
      }
      else if(b>a){
        countc++;

      }
      else{
        continue;
      }
    }


    if(countc<countm){
        cout<<"Mishka"<<endl;
    }
    else if(countm<countc){
        cout<<"Chris"<<endl;
    }
    else{
        cout<<"Friendship is magic!^^"<<endl;
    }
}