//count the no of times when the adjacent element of string is different
/*#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"enter a string ";
    getline(cin,s);
    int count=0;
    for (int  i = 0; s[i]!='\0'; i++)
    {
        if (s[i-1]==s[i] || s[i]==s[i+1])
        {
            continue;
        }
        else{
        count++;

        }
    }
    cout<<count;


}

//sorting string
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
     string s;
    cout<<"enter a string ";
    getline(cin,s);
    sort(s.begin(),s.end());   //isme space pehle ayega aur agar
                               //capital letter hai toh uski ascii value jyada hone ke karan woh pehle ayenge

    cout<<s;

}

//ANAGRAM *******************************
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
     string s,t;
    cout<<"enter first string ";
    getline(cin,s);
    cout<<"enter second string";
    getline(cin,t);
    sort(s.begin(),s.end());   //isme space pehle ayega aur agar
                               //capital letter hai toh uski ascii value jyada hone ke karan woh pehle ayenge
sort(t.begin(),t.end());
if (s==t)
{
    cout<<"the s,t are anamgrams";

}
else{
    cout<<"they are not anagram";

}
    

}*/

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
     string s,t;
    cout<<"enter first string ";
    getline(cin,s);
int max=0;
int index=0;
int n=s.length();
sort(s.begin(),s.end()); 
 //sort karne ke bad \0 sabse age chala jayga toh s.length use karna loop main
 //aur s ka pehle element hi pehla element hoga \0 nahi hoga

  for (int  i = 0;i<n; i++)
  {
     int count=1;
   for (int j = i+1;j<n ; j++)
   {
    if (s[i]==s[j])
    {
        count++;
    }

     if (max<count)
     {
        max=count;
        index=i;
     }
     

  }
  }
  
  cout<<s[index];
  cout<<max<<"times";

}

// solve this using aray also
