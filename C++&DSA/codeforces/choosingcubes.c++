#include<bits/stdc++.h>
using namespace std;

int main() {
 int t;
 cin>>t;

 while(t--){
    int n,f,k;
    cin>>n>>f>>k;

    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int fav=arr[f-1];
    sort(arr.rbegin(),arr.rend());
    
int ind1=-1,ind2=-1;
 for(int i=0;i<n;i++){
    if(arr[i]==fav){
        if(ind1==-1) ind1=i;
    
          ind2=i;
    
    }
       
 }


 if(ind2<k){
    cout<<"YES"<<endl;
 }
 else if(ind1>=k) cout<<"NO"<<endl;
else{
    cout<<"MAYBE"<<endl;
}


 }

}
