#include<iostream>
#include<vector>
using namespace std;
int main(){
    
  int n;
 cout<<"enter size of array";
 cin>>n;
 vector<int>v(n);
 
 for (int i = 0; i <n; i++)
 { 
   cout<<"enter a element ";

    cin>>v[i];
    
 }
 int target;
 cout<<"enter target";
cin>>target;
int l=0;
int h=v.size()-1;
 while (l<=h){

   int mid=l+(h-l)/2;
   if(v[mid]==target){
     cout<<v[mid];
   }
   else if (v[mid]>target) h=mid-1;
   else l=mid+1;
 }

 cout<<v[h];

 
 




}