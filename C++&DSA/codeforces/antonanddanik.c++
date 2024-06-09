#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    string s;
   cin>>s;
int counta=0,countd=0;
   for (int i = 0; i <n; i++)
   {
        if (s[i]=='A')
        {
            counta++;
        }
        else{
            countd++;
        }
        
   }

   if(counta>countd){
    cout<<"Anton";
   }
   else if (counta==countd)
   {
     cout<<"Friendship";
   }
   
   else cout<<"Danik";
   

    
}