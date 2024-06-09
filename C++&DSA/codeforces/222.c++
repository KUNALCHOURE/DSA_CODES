#include<iostream>
using namespace std;
int main(){

    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        bool flag=false;
         string s;
          cin>>s;

          for(int i=0;i<s.length()-1;i++){
            if(s[i]!=s[i+1]){
                  flag=true;
                  s[i]=s[i+1];
                  break;
            }


          }
          if(flag){
            cout<<"YES"<<endl;
           cout<<s<<endl;
          }
          else{
            cout<<"NO"<<endl;
          }
    }
    
   


}