#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter size";
    cin>>n;

int nums[n];
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }

     set<int>s;
         vector<int>v;
       int i=0;
       while(i<n){
        int correctindx=nums[i]-1;
            if(i==correctindx) i++;
            else if(nums[i]==nums[correctindx]) {
                s.insert(nums[i]);
                i++;
            }
            else swap(nums[i],nums[correctindx]);

       }
        cout<<endl;
        
    for(const int& ele :s){
            v.push_back(ele);
        }

          for(const int& ele :v){
            cout<<ele<<" ";
        }
    }
    