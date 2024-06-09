#include<iostream>

#include <bits/stdc++.h>
using namespace std;
int main(){

   int t;
   cin>>t;
   while (t>0)
   {
      int n;
      cin>>n;
      int count=0;
      int arr[n];
      for (int i = 0; i<n; i++)
      {
         cin>>arr[i];
      }

       for (int i = 0; i<n; i++)
      {
        if(arr[i]<0)
        {
         count++;
        }
        if(arr[i]==0){
            count=0;
        }
      }
      if(count%2==0 ){
        cout<<0<<endl;
      }

      else{
        
      cout<<count<<endl;
      }

t--;
      
   }
   
    
}