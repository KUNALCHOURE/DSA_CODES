/*Given a positive integer, return true if it is a power of 2.*/
/*
#include<iostream>
using namespace std;
bool power( int n,int x){
    bool flag=false;

    if(x==n) return true;
    else if(x>n) return false;
   else return power(n,2*x);
   
}
int main(){
    int n;
    cin>>n;
     bool x=power(n,1);
     cout<<x;
    
}*/

bool power(int n,int x){
    bool flag=false;
    if(x==n){
        return true;
    }
    else if( x>n) return false;
    else return power(n,2*x);

}

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool a= power(n,1);
    cout<<a;

}