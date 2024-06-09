#include<bits/stdc++.h>
using namespace std;

 void bstring(string s,int n){
    if(s.length()==n){
       cout<<s<<endl;
       return;
    }
    bstring(s+"0",n);
    if(s=="" ||s[s.length()-1]=='0'){
        bstring(s+"1",n);
       } 
   
    

    
       
}
int main(){
    string s="";
    int n;
    cin>>n;

    bstring("",n);
}