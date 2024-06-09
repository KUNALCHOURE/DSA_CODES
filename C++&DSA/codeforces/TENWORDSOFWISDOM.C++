#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>av;
        vector<int>bv;
        for(int i=0;i<n;i++){
            int a,b;
            cin>>a>>b;
            av.push_back(a);
            bv.push_back(b);
            
        }
        int maxx=-1;
        int maxi;
          for(int i=0;i<n;i++){
          if(av[i]<=10 && bv[i]>maxx){
                maxx=bv[i];
                maxi=i+1;

          }
            
        }

cout<<maxi<<endl;
    }
}