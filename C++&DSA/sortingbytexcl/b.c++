#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
int t;
cin>>t;

while(t>0){
    int n;
    cin>>n;
    int a;
    int count=0;
    vector<int>v(n);
    for (int i = 0; i <n; i++)
    {
        cin>>a;
        v[i]=a;
    }
 
  for (int i = 0; i <n; i++)
  {
 for (int j = 0; j <n-i-1; j++)
 {
  
 
   if (v[j]>v[j+1 ])
   {
     swap(v[j],v[j+1]);
     count++;
   }
   
    
  }
  
  }

   cout<<count<<endl;
    t--;
 
}
}

