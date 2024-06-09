#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    while (n>0)
    {  
        int a,b,c;
     cin>>a>>b>>c;

      vector<int>v;
       v.emplace_back(a);
        v.emplace_back(b);
         v.emplace_back(c);
      sort(v.begin(),v.end());
    if(v[1]==1 && v[2]==1){
        count++;
    }
    
    n--;
    }
    cout<<count;
    
}
