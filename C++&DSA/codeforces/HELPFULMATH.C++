#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    string s1;
    vector<int>v;
    int j=0;
    for (int i = 0; i <s.size(); i++)
    {
        if(s[i]!='+'){
           v.push_back(stoi(string(1,s[i])));
           j++;
        }

    }


    sort(v.begin(),v.end());
    
    for(int i=0;i<j-1;i++){
        s1.append(to_string(v[i]));
        s1.append("+");
    }
    
   s1.append(to_string(v[j-1]));

   cout<<s1;
}