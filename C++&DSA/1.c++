

#include<iostream>
#include<string>
using namespace std;
int main(){
   int t;
   cin>>t;
   while (t>0)
   {
   string s;
   cin>>s;
   int counta=0;
   int countb=0;
   for(int i=0;i<5;i++){
    if(s[i]=='A'){
        counta++;
    }
    if(s[i]=='B'){
        countb++;
    }
   }
   if(counta>countb){
    cout<<"A"<<endl;
   }
     if(countb>counta){
    cout<<"B"<<endl;
   }
 t--;
   }
   
  
    return 0;
}