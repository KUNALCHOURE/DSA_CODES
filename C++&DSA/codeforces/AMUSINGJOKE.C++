#include<bits/stdc++.h>/*******************************************/
using namespace std;
int main()
{
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    
   int l1= s1.size();
   int l2= s2.size();
   int l3= s3.size();

   if((l1+l2)==l3){
    cout<<"YES";
   }
   else{
    cout<<"NO";
   }

}