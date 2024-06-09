#include<iostream>
using namespace std;
int main(){
    string s,t;
    cin>>s;
    cin>>t;

    int l=0;
    int h=s.size()-1;
    while (l<h)
    {
        swap(s[l],s[h]);
        l++;
        h--;

    }
    if(s==t){
        cout<<"YES";

    }
    else{
        cout<<"NO";
    }
}