/*#include<iostream>
#include<string>
using namespace std;
int main(){
  //  string s={"hello string"};
   // cout<<s;  // a string can be printed directly;

string s;
 getline(cin,s);//we cannot take string with spaces directly as input
               // so we use getline function

 cout<<s;

    
}*/


#include<iostream>
#include<string>
using namespace std;
int main(){
  //  string s={"hello string"};
   // cout<<s;  // a string can be printed directly;

//string s;
 //getline(cin,s);//we cannot take string with spaces directly as input
               // so we use getline function

int n;
cout<<"enter size of string";
cin>>n;
string s[n];
cout<<"enter string";
getline(cin,s[n]);

for (int i = 0;s[i]!="\0"; i++)
{
    if (i%2==0)
    {
        s[i] = "a";

    }
    
}


    
}
