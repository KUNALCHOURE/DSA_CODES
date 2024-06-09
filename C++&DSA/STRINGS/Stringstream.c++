/*#include<iostream>
#include<string>
#include<sstream>

using namespace std;
int main(){
string s;
int count=0;
bool flag=true;
cout<<"enter a string ";
getline(cin,s);
int n=s.length();

stringstream ss(s);
string temp;
while (ss>>temp)
{
    cout<<temp<<endl;
}

}

*/

//Take input a string and retrun the the word occuring max no of times********************************************/*******
/*#include<iostream>   not done yet
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
string s;
cout<<"enter a string ";
getline(cin,s);
int n=s.length();

stringstream ss(s);
string temp,a;
int count=1,maxc=1;
vector<string>v;

while (ss>>temp){
    v.push_back(temp);

}
sort(v.begin(),v.end());
for (int i = 1; i <v.size(); i++)
{ 
    if (v[i]==v[i-1])
    {
        count++;
    }
   else count=1;

   maxc=max(maxc,count);
   
}
   cout<<"the word occuring max no of times is "<<a<<endl;
   cout<<"it is occuring" <<maxc<<"no of times";
    
}
*/

/*
// return index having max number
#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    string s;
    cout<<"enter a string ";
getline(cin,s);
string temp;
stringstream ss(s);
int i=0;
int maxx=0;

string arr[]={"1","2","3","4"};
string num=arr[0];
for (int i = 0; i <4; i++)
{
    int x=stoi(arr[i]);
    if (x>maxx)
    {
        maxx=x;
        num=arr[i];
    }
    
}
cout<<num;

}*/

 /*common prefix
 not done *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/   
#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
 string s;
 cout<<"enter a string ";
getline(cin,s);
string temp;
vector<string> v;
stringstream ss(s);
while (ss<<temp)
{
  v.push_back(temp);
}

sort(v.begin(),v.end());
string a=v[0];
int n=v.size()-1;
string b=v[n];
string c;
for (int i = 0; i <a.size(); i++)
{
    for (int j = 0; j <b.size(); j++)
    {
       if (a[i]==b[j])
       {
         c.push_back(a[i]);
       }
       
    }
    
}
cout<<c;




}
//more questins needed to be done
