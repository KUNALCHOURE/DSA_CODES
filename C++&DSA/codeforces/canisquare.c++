#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
     int sum=0;
    while(t--){


    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }

     for (int i = 0; i <n; i++)
    {
      sum=sum+arr[i];
    }


 bool flag=false;
    int l=1;
    int h=sum;
    while(l<=h){
        int mid=l+(h-l)/2;
        if((mid*mid)==sum){
            flag=true;
            break;
        }
        else if((mid*mid)>sum){
            h=mid-1;
        }
        else l=mid+1;
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
}