#include<iostream>
#include<vector>

using namespace std;
int main(){
    vector<int>v(5);
int target;
cin>>target;
    for (int i = 0; i <5; i++)
    {
        cin>>v[i];
    }
    
    for (int i = 0; i <5; i++)
    {
       if(v[i]==target){
        cout<<i;
        break;
       }
    }
    
}