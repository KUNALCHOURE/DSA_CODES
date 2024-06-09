#include<bits/stdc++.h>
using namespace std;

void subarray(int arr[],int n,int index,vector<int>v){
   if(index==n){
     for(int i=0;i<v.size();i++){
        cout<<v[i];

     }
     cout<<endl;
     return ;
   }
    subarray(arr,n,index+1,v);
if(v.size()==0 || v[v.size()-1]==arr[index-1]){
   v.push_back(arr[index]);
    subarray(arr,n,index+1,v);
}

 
   
  

}
int main(){
    int n=4;
    int arr[4]={1,2,3,4};
 vector<int>v;
    subarray(arr,n,0,v);
}