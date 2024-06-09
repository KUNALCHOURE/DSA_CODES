#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while (t--)
    {
        int count=0;
         string s;
         cin>>s;
        string s1="codeforces";
         for(int i=0;i<s.size();i++){
            if(s[i]!=s1[i]){
               count++;
            }
         }
         cout<<count<<endl;
         
    }
    
}