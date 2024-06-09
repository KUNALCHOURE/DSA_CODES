#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while (t--)
    {
         int n;
         cin>>n;
         int a1,a2,a3;
         bool flag=false;

         for (int i = 0; i <n; i++)
         {
            for(int j=i+1;j<n;j++){
                for (int k = j+1; k <n; k++)
                {
                    if((i+j+k)==n && (i%3!=0 && j%3!=0 && k%3!=0)){
                       flag=true;
                       a1=i;
                       a2=j;
                       a3=k;
                    }
                 
                }
                
            }
         }

         if(flag) {cout<<"YES"<<endl; cout<<a1<<" "<<a2<<" "<<a3<<endl;}

         else {cout<<"NO"<<endl;}
    }
    
}