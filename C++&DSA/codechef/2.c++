#include <bits/stdc++.h>
using namespace std;

int main() {
	
    int t;
    cin>>t;

    while (t>0)
    {
         int n;
         cin>>n;
        int flag=false;
         vector<int>a(n);
         for (int i = 0; i <n; i++)
         {
            cin>>a[i];
         }
int prod=1;
    prod=accumulate(a.begin(), a.end(), prod, multiplies<int>());
      
      cout<<prod;   
    
   int count=0;
 if(prod==0 && prod==1){
    cout<<"YES"<<endl;
 }

 else{
    for (int i = 0; i <n; i++)
    {
       if(a[i]==2){
        count++;
       }
    }
   if(count%8==0){
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }
    }
     t--;
}
}
