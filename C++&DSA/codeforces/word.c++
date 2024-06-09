#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int countA=0;
     int counta=0;
    for (int i = 0; i<s.length(); i++)
    {
       if (int(s[i])>=97 &&int(s[i])<=122)
       {
        counta++;
       }
       else{
        countA++;

       }
       
    }
    
    if(counta>=countA){
     for (int i = 0; i <s.length(); i++)
     {
      transform(s.begin(),s.end(),s.begin(),::tolower);
     }
     
    }
    else{
         for (int i = 0; i <s.length(); i++)
     {
           transform(s.begin(),s.end(),s.begin(),::toupper);

     }

    }

    cout<<s;
    
}