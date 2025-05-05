#include<bits/stdc++.h>
using namespace std;

void subset(int arr[],int n,int indx,vector<int>ans){
if(indx==n){
    for (int i = 0; i <ans.size(); i++)
    {
        cout<<ans[i];
    }
    cout<<endl;
    return ;
}

    subset(arr,n,indx+1,ans);
    ans.push_back(arr[indx]);
    subset(arr,n,indx+1,ans);
}
int main(){
    int n=3;
    int arr[3]={1,2,3};
    vector<int>v;
    subset(arr,n,0,v);
}