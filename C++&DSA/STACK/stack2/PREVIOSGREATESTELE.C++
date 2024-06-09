
#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
int arr[8]={3,1,2,5,4,6,2,3};
n=8;
stack<int>s;
s.push(arr[0]); 
int ans[n];
ans[0]=-1;

for(int i=1;i<n;i++){
    while(s.size()>0 && s.top()<=arr[i]){
        s.pop();
    }
    if(s.size()==0){
        ans[i]=-1;
    }
    else{
        ans[i]=s.top();
    }
    s.push(arr[i]);
}

for(int i=0;i<n;i++){
    cout<<ans[i]<<" ";
}

 
}