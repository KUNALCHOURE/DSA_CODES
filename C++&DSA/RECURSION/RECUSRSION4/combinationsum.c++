#include<bits/stdc++.h>
using namespace std;

void combination(vector<int>v,int arr[],int n,int t,int index){
    if(t==0){
        for (int i = 0; i <v.size(); i++)
        {
            cout<<v[i];
        }
        cout<<endl;
        return ;
    }
    else if(t<0)
    {
        return;
    }
    
    for (int i = index; i <n; i++)
    {
        v.push_back(arr[i]);
        combination(v,arr,n,t-arr[i],i);
         v.pop_back();
    }
    
}
int main(){
     int n=3;
    int arr[]={2,3,5};
    vector<int>v;
   
    combination(v,arr,n,8,0);
}