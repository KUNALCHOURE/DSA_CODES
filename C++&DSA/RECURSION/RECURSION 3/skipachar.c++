#include<bits/stdc++.h>
using namespace std;
/*void removechar(string a,string s){
    if(s.length()==0){
      cout<<a;
      return;

    }
    char ch=s[0];
    if(ch=='a') removechar(a,s.substr(1));
    else removechar(a+ch,s.substr(1));

}*/

void removechar(string a,string s,int indx){
    if(indx==s.length()){
      cout<<a;
      return;

    }
    char ch=s[indx];
    if(ch=='a') removechar(a,s,indx+1);
    else removechar(a+ch,s,indx+1);

}
int main(){
    string s="kunal choure";
   
 cout<<s.length();
   removechar("",s,0);
}