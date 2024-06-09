
#include<iostream>
#include<unordered_map>
#include<vector>

#include<algorithm>

using namespace std;
int main(){
 int n;
    cin>>n;


 unordered_map<int,int> m1;
 vector<int>v(n);
  vector<int>b;



    for (int i = 0; i <n; i++)
    {
        cin>>v[i];
    }
   

   for(auto nums:v){
    m1[nums]++;
   }

   for(int nums :v)
    {
        if(m1[nums]==1){
          cout<<nums<<" ";

          m1[nums]=-1;
        }
         
         
  
    }
    
  
     cout<<endl;
   
    }
   