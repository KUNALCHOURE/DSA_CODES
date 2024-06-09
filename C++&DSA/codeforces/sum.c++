#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t>0)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a==(b+c) ||b==(a+c)|| c==(b+a)){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        t--;
    }
    
}