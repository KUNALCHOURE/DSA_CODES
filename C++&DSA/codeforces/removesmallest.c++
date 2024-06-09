#include<bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
     int n;
     cin>>n;
     vector<int>v(n);
     for (int i = 0; i <n; i++)
     {
        cin>>v[i];
    }
     
     for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int a=abs(v[i]-v[j]);
            if(a<=1){
                if(v[i]<=v[j])
            v.erase(v.begin()+i);
            }
            else{
                v.erase(v.begin()+j);
            }
        }
     }

     if(v.size()==1){
        cout<<"YES"<<endl;

     }
     else{
        cout<<"NO"<<endl;
     }
    }
    
}