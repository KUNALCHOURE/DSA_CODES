#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int count=0;
bool flag=false;
set<char>ans;

for( char ch : s){
    ans.insert(ch);

}
if(ans.size()%2==0){
    cout<<"CHAT WITH HER!";
}
else{
cout<<"IGNORE HIM!";
}
}