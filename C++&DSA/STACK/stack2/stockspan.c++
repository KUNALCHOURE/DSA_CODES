
#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
int arr[8]={100,80,60,81,70,60,75,85};
n=8;
stack<int>s;
s.push(0); 
int span[n];
span[0]=1;

for(int i=1;i<n;i++){
    while(s.size()>0 && arr[s.top()]<=arr[i]){
        
        s.pop(); 
    }
    if(s.size()==0){
        span[i]=-1;
    }
    else{
        span[i]=abs(s.top()-i);
    }
    s.push(i);
}

for(int i=0;i<n;i++){
    cout<<span[i]<<" ";
}

 
}