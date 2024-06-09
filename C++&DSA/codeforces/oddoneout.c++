#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t>0)
    {
        int a,b,c;
        cin>>a>>b>>c;
        vector<int>v;
        v.emplace_back(a);
        v.emplace_back(b);
        v.emplace_back(c);
        sort(v.begin(),v.end());

        if(v[0]==v[1])
        {
          cout<<v[2]<<endl;
        }
        else{
          cout<<v[0]<<endl;
        }
        t--;
}
}