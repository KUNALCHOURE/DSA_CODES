#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t>0){
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;

        unordered_map<char,int> ans;

        for(char ch='A';ch<='G';++ch){
            ans[ch]=0;
        }
       for (char ch : s) {
            ans[ch]++;
        }
        
int prob=0;
     for(char ch='A' ; ch<='G';ch++){
         if(ans[ch]<m){
            prob+=m-ans[ch];
            }
        }
        cout<<prob<<endl;
t--;
    }
}