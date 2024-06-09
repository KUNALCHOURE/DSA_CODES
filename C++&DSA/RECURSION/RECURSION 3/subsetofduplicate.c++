#include<bits/stdc++.h>
using namespace std;
void sub(string ans,string s,vector<string>v,bool flag){
   char ch=s[0];
   char ds=s[1];
    if(s==""){
     v.push_back(ans);
     for (int i = 0; i <v.size(); i++)
     {
        cout<<v[i]<<endl;
     }
     
 return;
  }
 
    


 else if(s.length()==1){
   if(flag==true) sub(ans+ch,s.substr(1),v,true);
     sub(ans,s.substr(1),v,true);
    return;
   }

  else if(ch==ds){
  if(flag==true) sub(ans+ch,s.substr(1),v,true);
     sub(ans,s.substr(1),v,false);

  }

else{
   if(flag==true) sub(ans+ch,s.substr(1),v,true);
     sub(ans,s.substr(1),v,true);

}

}



void duplicates(string ans,string s,vector<string>v,bool flag){
    char ch=s[0];
 char dh=s[1];

   
   if(s==""){
      v.push_back(ans);
      for (int i = 0; i <v.size(); i++)
      {
         cout<<v[i]<<endl;
      }
      return;
   }


 else if(s.length()==1){
    if(flag=true) duplicates(ans+ch,s.substr(1),v,true);
           duplicates(ans,s.substr(1),v,true);
 }
  else if(ch==dh){
      if(flag=true) duplicates(ans+ch,s.substr(1),v,true);
           duplicates(ans,s.substr(1),v,false);
   }

   else{
       if(flag=true) duplicates(ans+ch,s.substr(1),v,true);
           duplicates(ans,s.substr(1),v,true); 
   }
} 
int main(){
string s="aab";
    vector<string>v;
    
 duplicates("",s,v,true);
 
}
