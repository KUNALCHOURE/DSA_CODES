#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    vector<int>v(n);
    for (int i = 0; i <n; i++)
    {
        cin>>v[i];
    }
    
    int maxe=*max_element(v.begin(),v.end());
   
    for (int i = 0; i <n; i++)
    {
        if(v[i]<maxe){
             count+=maxe-v[i];
        }
    }
    cout<<count;

}