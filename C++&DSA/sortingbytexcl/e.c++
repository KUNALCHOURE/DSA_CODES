#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
int t;
cin>>t;

while (t>0)
{
    int n;
    cin>>n;
    int a;
    vector<int>v(n);
    for (int i = 0; i <n; i++)
    {
        cin>>a;
        v[i]=a;
    }
    sort(v.begin(),v.end());


    for (int i = 0; i<n; i++)
    {cout<<v[i]<<" ";
    }
    cout<<endl;
   t--;
    
}
}
