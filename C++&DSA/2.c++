/*#include<iostream>
#include<algorithm>
using namespace std;
int main(){
   int t;
    cin>>t;
    while (t>0)
    {
        int n;
        cin>>n;
        int sum=0;

       int i=1;
            int j=i;
           while (j>0 &&i<n)
           {
              int rem=j%10;
              sum=sum+rem;
           
              j=j/10;
              i++;
           }
           
        
        cout<<sum<<endl;

       t--;
   }
    
}*/

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
   int t;
    cin>>t;
    while (t>0)
    {
        int n;
        cin>>n;
        vector<int>v;
        vector<int>ans;
        for (int i = 1; i <=n; i++)
        {
            v.push_back(i);
        }
        
        int sum=0;
        int i=0;
        while (v[i]<n)
        {    int rem=v[i]%10;
              v[i]=v[i]/10;
            
        }
        
     
       
          
           while (i<n)
           {  int j=i;
               if(j<0){
          
               }
           i++;
           }

        cout<<sum<<endl;

       t--;
   }
    
}