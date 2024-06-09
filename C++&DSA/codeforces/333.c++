#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
            int a,b,c,d;
          cin>>a>>b>>c>>d;

          if(a>12){
            a=12+a;
          }
          if(b>12){
            b=12+b;
          }
           if(c>12){
            c=12+c;
          }
           if(d>12){
            d=12+d;
          }
             int maxx=max(a,b);
             int minn=min(a,b);

          if ((maxx<=c && c<=minn || maxx<=d & d<=minn) && (maxx>=c && c<=minn || maxx>=d & d>=minn ))
          {
            cout<<"YES"<<endl;
          }
          else{
            cout<<"NO"<<endl;

          }
          
    }
    



}