#include<iostream>
#include<string.h>
using namespace std;
int main(){

    int t;
    cin>>t;

    while (t>0)
    {
 string s;
 string sh;
 cin>>s;

for (int  i = 0; i <s.size(); i++)
{
  char a= (char)tolower(s[i]);
 sh.push_back(a);
}


if (sh=="yes"){
 cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
t--;
 }


}
