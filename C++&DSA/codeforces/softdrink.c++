#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int totall=k*l;
    int totals=c*d;
 int count=0;
 
  /*  while ((totall-nl)>=0 && (totals--)>=0 && (p-np)>=0 && n>0)
    {
       count++;
       n--;
       totall=totall-nl;
       totals--;
       p=p-np;
    }*/
 int ans;
    if(totall/n>0 && totals/n>0 && p/np>0 && n>0){
       ans=min({totall/n,totals/n, p/np});
       ans=ans/n;
    }

    cout<<ans;
    
}