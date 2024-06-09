#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t>0)
    {
        string s;
        cin>>s;
        
        int b=stoi(s);

        if(b<11 && b!=0){
            cout<<"0"<<to_string(b)<<":"<<s[3]<<s[4]<<" "<<"AM"<<endl;

        }
        else if(b==11){
             cout<<to_string(b)<<":"<<s[3]<<s[4]<<" "<<"AM"<<endl;

        }
        else if(b==0){
            cout<<"12"<<":"<<s[3]<<s[4]<<" "<<"AM"<<endl;
        }
        else if (b==12){
            cout<<"12"<<":"<<s[3]<<s[4]<<" "<<"PM"<<endl;
        }
        else if(b==24){
            cout<<"12"<<":"<<s[3]<<s[4]<<" "<<"AM"<<endl;
        }
        else{
            int a=b-12;
            if(a<10){
            cout<<"0"<<to_string(a)<<":"<<s[3]<<s[4]<<" "<<"PM"<<endl; 
            } 
            else{

            cout<<to_string(a)<<":"<<s[3]<<s[4]<<" "<<"PM"<<endl; 
            } 
            }
            t--;
          }


    }
