#include<bits/stdc++.h>
using namespace std;

void print(int a[],int n){
    if(n==0) return;
    else{
    cout<<a[n];

    return print(a,n-1);

    }
}
int main(){
    int n;
    cin>>n;

    int arr[n];
    for (int i = 1; i <=n; i++)
{
       cin>>arr[i];
    }
    
    print(arr,n);

}