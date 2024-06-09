#include<bits/stdc++.h>
using namespace std;

bool pali(string s,int i,int j){
    if(i>j){
        return true;
    }
   if(s[i]!=s[j]){
    return false;
   }
  else return pali(s,i+1,j-1);
}
int main(){
    string s="dad";

  bool ans=  pali(s,0,s.size()-1);
  cout<<ans;
}