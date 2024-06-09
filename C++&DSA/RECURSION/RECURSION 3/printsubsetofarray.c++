#include<bits/stdc++.h>
using namespace std;
void sub( vector<int>v,int arr[],int n,int index){
   
    if(index==n ){
     for(int i=0 ;i<v.size();i++){
       cout<<v[i]<<"";

  }
  cout<<endl;
  return;
    }
    sub(v,arr,n,index+1);
    v.push_back(arr[index]);
      sub(v,arr,n,index+1);

}

int main(){
   int n=3;
    int arr[n]={1,2,3};
    vector<int>v;
    
 sub(v,arr,n,0);
 
}