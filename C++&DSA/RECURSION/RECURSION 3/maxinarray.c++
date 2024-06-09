#include<bits/stdc++.h>
using namespace std;
  int maxxx=INT_MIN;
int maxx(int arr[],int n,int i){
  
    if(i==n) return maxxx;
    if(arr[i]>maxxx){

      maxxx=arr[i];
    }
    maxx(arr,n,i+1);
    
}
int main(){
    int n;
    cin>>n;
      int arr[n];
  for (int i = 0; i <n; i++)
  {
    cin>>arr[i];
      }
cout<<maxx(arr,n,0);


}