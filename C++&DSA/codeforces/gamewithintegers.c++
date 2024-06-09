#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int count =0;
        bool flag=false; 
        while (count<=10)
        {
           if((n+1)%3==0 || (n-1)%3==0){
              flag=true;
           }
          count++;
        }
        if(flag){
            cout<<"First"<<endl;

        }
        else{
            cout<<"Second"<<endl;

        }

        
    }
    
}