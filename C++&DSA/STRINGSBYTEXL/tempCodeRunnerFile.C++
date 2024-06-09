#include<iostream>

using namespace std;
int main(){
    string s;
   int n= s.length();
   for (int i = 0; i <n; i++)
   {
     if(i%2==0){
        cout<<s[i];
     }
   }
   for (int i = 0; i <n; i++)
   {
     if(i%2!=0){
        cout<<s[i];
     }
   }
   
 
    
    
}