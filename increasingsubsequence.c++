#include<bits/stdc++.h>
using namespace std;
void sub( vector<int>v,int arr[],int n,int index,int k){
   
    if(index==n ){
        if(v.size()==k){
     for(int i=0 ;i<v.size();i++){
     
       cout<<v[i];
     }
  }
  cout<<endl;
  return;
    }
    sub(v,arr,n,index+1,k);
    v.push_back(arr[index]);
      sub(v,arr,n,index+1,k);

}

int main(){
   int n=3;

    int arr[n]={1,2,3};
    vector<int>v;
    int k;
    cout<<"enter k";
    cin>>k;
 sub(v,arr,n,0,k);
 
}