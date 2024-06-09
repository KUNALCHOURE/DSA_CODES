/*Calculate the number of ways in which a person can climb n stairs if he can take exactly 1, 2 or 3
steps at each level.*/

#include<iostream>
using namespace std;
int stair( int n){
   

   if(n==1) return 1;
   else if(n==2) return 2;
   else if(n==3) return 4; //4 ways to jump

 int  totalways=stair(n-1)+stair(n-2)+stair(n-3);
   return totalways;
   
}
int main(){
    int n;
    cin>>n;
  cout<<stair(n);
    
}