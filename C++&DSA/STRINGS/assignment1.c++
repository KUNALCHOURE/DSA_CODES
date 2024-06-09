//Input a string of size n and update all the odd positions in the string to character ‘#’. Consider
//0-based indexing.
/*
#include<iostream>
using namespace std;
int main(){
string s;
cout<<"enter a string ";
getline(cin,s);
for (int i = 0; i <s[i]!='\0'; i++)
{
    if (i%2!=0)
    {
        s[i]='#';

    }
    
}

cout<<s;

}

//Input a string of length n and count all the consonants in the given string.
#include<iostream>
using namespace std;
int main(){
string s;
int count=0;

cout<<"enter a string ";
getline(cin,s);
for (int i = 0; i <s[i]!='\0'; i++)
{
 if (s[i]=='a'||s[i]=='e'|| s[i]=='i'|| s[i]=='o'||s[i]=='u'){
    continue;
 }
else{
    count++;
}
    
}

cout<<count;

}

*/
/*
//Check whether the given string is palindrome or not.
#include<iostream>
using namespace std;
int main(){
string s;
int count=0;
bool flag=true;
cout<<"enter a string ";
getline(cin,s);
int i=0;
int j=s.length()-1;
while (i<j)
{
    if (s[i]!=s[j])
    {
        flag =false;
        break;
    }
   i++;
   j--;

}

if (flag==true)  //waha pehle  flag=true likh raha tha toh compiler samjh rah tha ki flag hai ke nahi isse anwser galat aa rah tha
{
   cout<<"the string is palindrome";
}
else{
    cout<<"the string id not a palindrome";
}


}
*/

//Input a string of even length and reverse the second half of the string.
#include<iostream>
#include<string>
using namespace std;
int main(){
string s;
int count=0;
bool flag=true;
cout<<"enter a string ";
getline(cin,s);
int n=s.length();
/*
for (int i = n/2;s[i]!='\0'; i++)
{
    
}*/


}

