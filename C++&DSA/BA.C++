/*   
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
      for (int i = 0; i <n; i++)
      {
       cin>>v[i];
       

      }

      int q;
      cin>>q;

      while (q>0)
      {
        int s,e,w;
        cin>>s>>e>>w;

        for (int i = s-1; i <=e-1; i++)
        {
           v[i]=v[i]+w;
        }

        q--;


      }
      long long int sum=0;

       for (int i = 0; i <n; i++)
      {
   
      sum=sum+v[i];
      }
      
      cout<<sum<<endl;
      t--;
   }
   
}*/





 /*   
#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
   int n;
   cin>>n;
   vector< long long int>v(n);
   for (int i = 0; i<n; i++)
   {
      cin>>v[i];
   }

 long long int sum=0;

    for (int i = 0; i<n; i++)
   {
      sum=sum+v[i];
   }
   cout<<sum<<endl;




   
}
*/
/*
#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main(){

    int n;
    cin>>n;
    vector< long long int>v(n);
    for (int i = 0; i <n; i++)
    {
      cin>>v[i];
    }
    int count=0;
   for (int i = 1; i <n-1; i++)
    {
        if(v[i]<v[i+1] && v[i]<v[i-1]){
          count++;
        }


    }
    cout<<count<<endl;

}

*/

/*
#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main(){

    int t;
    cin>>t;
   
    while (t>0)
    {
       int l,r;
       cin>>l>>r;
 int count=0;
       for (int i =l; i <=r; i++)
       {
         if(i%10==2 || i%10==3 || i%10==9){
            count++;
         }
       }
       cout<<count<<endl;
       

       t--;
    }
    


}*/

/*
#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main(){

    int n;
    int q;
    cin>>n>>q;
   int v[n];
   int p[n];
 int sum=0;

 for (int i = 1; i <=n; i++)
    {
       cin>>v[i];
    }
    for (int i = 1; i <=n; i++)
    {
       sum=sum+v[i];
       p[i]=sum;
    }
    int ans;
    while (q>0)
    {
       int l,r;
       cin>>l>>r;

      ans=p[r]-p[l];
      
     
    q--;

    }
      
cout<<ans<<endl;

}

*/

#include<iostream>
using namespace std;
int main(){
   string s="";
   
}