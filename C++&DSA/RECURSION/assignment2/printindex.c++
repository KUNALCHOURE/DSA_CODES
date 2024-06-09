#include<bits/stdc++.h>
using namespace std;

int print(int a[],int n,int e){
    if(n==-1) return -1;
    if(a[n]==e) return n;
    
    else{
  

    return print(a,n-1,e);

    }
}
int main(){
    int n;
    cin>>n;

    int arr[n];
    //array is 0 indexed
    for (int i = 0; i <n; i++)
{
       cin>>arr[i];
    }
    
    int e;
    cout<<"enter element to be found";
    cin>>e;
   cout<<print(arr,n-1,e);

}