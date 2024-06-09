#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;

    while (k>0)
    {
        int rem=n%10;
        if(rem==0){
            n=n/10;
        }
        if (rem!=0)
        {
            n=n-1;
        }
        k--;

        
    }

    cout<<n;
    
}