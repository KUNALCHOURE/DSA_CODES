#include<bits/stdc++.h>/**********************/
using namespace std;
int main(){
    int n;
    cin>>n;

       vector<int>v(n);
         for (int i = 0; i<n; i++)
         {
            cin>>v[i];
         }

         int sumnve=0;
             int sumpve=0;

  for (int i = 0; i<n; i++)
         {
           if(v[i]==-1){
            sumnve+=1;
           }
           else{
            sumpve+=v[i];
           }
         }

         cout<<abs(sumnve-sumpve);

}