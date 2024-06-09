#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;

    while (t>0)
    {
        int n,a,b;
        cin>>n>>a>>b;

        int one =n*a;
        int d=n/2;
        int rem=(n%2);
        int two=(d*b)+(rem*a);

       int cost= min(one,two);
       cout<<cost<<endl;
        t--;

    }
    
}