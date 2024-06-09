
#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
n=8;
 int arr[8]={3,1,2,7,4,6,2,3};

 stack<int>s;
int ans[n];
ans[n-1]==-1;
s.push(arr[n-1]);
 for(int i=n-2;i>=0;i--){
      while(s.size()>0 && s.top()<=arr[i]){
        s.pop();

      }
      if(s.size()==0) ans[i]=-1;
      else{
        ans[i]=s.top();
      }
      s.push(arr[i]);

 }


for(int i=0;i<n;i++){
    cout<<ans[i]<<" ";
}

 
}