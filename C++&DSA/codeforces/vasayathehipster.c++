#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;

    int ans1=min(a,b);
    int ans2;
    if(ans1==a){
     ans2=b-a;      
    }
     if(ans1==b){
    ans2=a-b;      
    }

    ans2=ans2/2;
    cout<<ans1<<" "<<ans2;

}