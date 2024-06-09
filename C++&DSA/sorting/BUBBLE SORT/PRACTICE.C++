//SORT A STRING IN DECENDING ORDER OF VALUE ASSOCIATED AFTER REMOVAL OF VALUES SMALLER THAN X
/*#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s="AZYZXBDJKX";
    string sn;
    for (int i = 0; i <s.size(); i++)
    {
         if (s[i]>='X')
         {
            sn.push_back(s[i]);
            
         }
         
    }

     sort(sn.begin(),sn.end());
  cout<<sn;
  

    
    
}*/

/*sort the array in decending order using bubble sort****************************
#include<iostream>
#include<vector>
using namespace std;
int main()
{
   int n;
   cout<<"enter no of elements";
   cin>>n;
   vector<int>v(n);
    for (int i = 0; i <n; i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<v.size();i++){
      for (int j = 0; j<n-1; j++)
      {
         if (v[j]<v[j+1])
         {
            swap(v[j],v[j+1]);

         }

         
      }
      
    }
    for (int  i = 0; i <n; i++)
    {
       cout<<v[i];
    }
    
}*/

//push zeros to end while maintaing the relative order of other elements
#include<iostream>
#include<vector>
using namespace std;
int main(){

     int n;
     n=9;
  
   int v[]={5,0,1,2,0,0,4,0,3};
    
    for(int i=0;i<n-1;i++){
      for (int j = 0; j<n-1; j++)
      {
         if (v[j]==0)
         {
            swap(v[j],v[j+1]);

         }

         
      }
      
    }
    for (int  i = 0; i <n; i++)
    {
       cout<<v[i];
    }
   
}