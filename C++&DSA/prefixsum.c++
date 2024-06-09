
#include<iostream>
#include<vector>
using namespace std;
int main(){
   int n;
   cin>>n;

   vector<int>v(5);
   vector<int>p(5);
    for (int i = 0; i <n; i++)
   { cin>>v[i];
   }
     p[0]=v[0];
   for (int i = 1; i <n; i++)
   {
      
       p[i]=p[i-1]+v[i];
   }

    for (int i = 0; i <n; i++)
   {
      
        cout<<p[i]<<" ";
   }
   
   
}

#include <bits/stdc++.h>
#include<vector>
using namespace std;
 
int main(){
   int t;
   cin>>t;

   while (t>0)
   {
      int n;
      cin>>n;

      vector< long long int>v(n);
     vector< long long int>p(n);
       long long int sum=0;

      for (int i = 0; i <n; i++)
      {
       cin>>v[i];

      }

 for (int i = 0; i <n; i++)
        {
           sum=sum+v[i];
           p[i]=sum;
        }

      int q;
      cin>>q;
    int ans;
      while (q>0)
      {
        int l,r;
        cin>>l>>r;
        if(l==0){
           ans=p[r];
        }
        else{  
        ans=p[l]-p[r-1];
       }
        q--;


      }
     
      
      cout<<ans<<endl;
      t--;
   }
   
}


#include <bits/stdc++.h>
#include<vector>
using namespace std;
 
int main(){
   int t;
   cin>>t;

   while (t>0)
   {
      int n;
      cin>>n;

      vector< long long int>v(n);
     vector< long long int>p(n);
       long long int sum=0;

      for (int i = 0; i <n; i++)
      {
       cin>>v[i];

      }

 for (int i = 0; i <n; i++)
        {
           sum=sum+v[i];
           p[i]=sum;
        }

      int q;
      cin>>q;
    int ans;
      
     
      
      cout<<ans<<endl;
      t--;
   }
   
}