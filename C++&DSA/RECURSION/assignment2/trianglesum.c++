#include<bits/stdc++.h>
using namespace std;

void sum(int arr[],int n, int x){
    int v[n-1];
   if(n==-1) return ;

else{
     for(int i=0;i<n;i++){
        cout<<arr[i];

    }
    cout<<endl;
    for(int i=0;i<n-1;i++){
     v[i]=arr[i]+arr[i+1];
    }
  return sum(v,n-1,x);
}
}
int main(){
    int n;
    cin>>n;
    int x=0;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter element";
        cin>>arr[i];
    }

    sum(arr,n,x);
}