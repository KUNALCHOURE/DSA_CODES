#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int x1,x2,x3;
    cin>>x1>>x2>>x3;

vector<int>v;
v.emplace_back(x1);
v.emplace_back(x2);
v.emplace_back(x3);
sort(v.begin(),v.end());

int d1=abs(v[0]-v[1]);
int d2=abs(v[2]-v[1]);

cout<<d1+d2;


}