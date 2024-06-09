#include<bits/stdc++.h>
using namespace std;

int gcd(int x,int y){
   int a=min(x,y);
   for (int i = a; i >=2; i--)
   {
       if(x%i==0 && y%i==0){
         return i;
       }
       
   }
   return 1;
   
}

int gcd2(int x,int y){
if(x==0) return y;
else{
    return gcd2(y%x,x);
}

  
}
int main(){
    int x,y;
    cin>>x>>y;

    int ans=gcd2(min(x,y),max(x,y));
    cout<<ans;

}