#include<bits/stdc++.h>
using namespace std;
int main(){
       int n;
    cin>>n;
    int k;
    cout<<"enter window size";
    cin>>k;
int sum=0;
    int arr[n];
    int ans[n-k+1];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   
int p=-1;
   for(int i=0;i<k;i++){
    if(arr[i]<0){
        p=arr[i];
        break;
    }
   }
   if(p==-1) ans[0]=1;
   else ans[0]=arr[p];
   int i=1;
   int j=k-1;
   
   while(j<n){
     if(p>=i){
        ans[i]=arr[p];
     }
     else{
    for(int x=i;x<=j;x++){
        if(arr[x]<0){
            p=x;
            break;
        }
       
       
    }
    if(p!=-1){
        ans[i]=arr[p];
    }
    else ans[i]=1;
     }

     i++;j++;
   }

   for(int i=0;i<n-k+1;i++)
   {
    cout<<ans[i]<<endl;
   }
  
   
}