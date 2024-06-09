#include<bits/stdc++.h>
using namespace std;
int main(){
     string s1,s2;
     cin>>s1;
     cin>>s2;
     int asc1=0;
      int asc2=0;

   for(int i=0;i<s1.size();i++){
 char a=tolower(s1[i]);
    s1[i]=a;
 
   }
    for(int i=0;i<s2.size();i++){
  
    char a=tolower(s2[i]);
    s2[i]=a;
   }
 

   if(s1>s2){
    cout<<"1";

   }
else if(s1<s2){
    cout<<"-1";
    
   }
   else cout<<"0";
}