#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[6]={5,5,5,5,5,5};
    int n;
    cout<<"enter target";
    cin>>n;
    int l=0;int h=6-1;
 bool flag=false;
    while (l<=h)
    {
        int mid=l+(h-l)/2;
      
      if(arr[mid]==n){
        if(arr[mid-1]!=n){
              flag=true;
            cout<<mid;
            break;
           
        }
        else{
          h=mid-1;
        }
      }
      else if (arr[mid]<n) l=mid+1;
      else h=mid-1;
      
      
    }
    
    if(flag==false) cout<<-1;
   
    
    
}