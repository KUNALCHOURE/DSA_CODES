#include<bits/stdc++.h>
using namespace std;
int main(){
    int y;
    cin>>y;
   
    int ans=0;

    for(int i=y+1;i<=9000;i++){
     set<int>s;
     int temp=i;
     bool flag=true;
        while (temp>0)
        {
            int rem=temp%10;
            if(s.count(rem)){
                flag=false;
                break;
            }
            s.insert(rem);  
            temp=temp/10; 
        }
        if(flag && s.size()==4){ 
            ans=i;
            break;
        }
   
    }
    cout<<ans;

  
 
}