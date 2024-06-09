#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int sum=0;
    int arr[n];
   int tmin=240;
   int fmin=240-k;
   
   for (int i = 1; i <=n; i++)
   {  sum=sum+5*i;
      arr[i]=sum;
   }
 int l=1;
 int h=n;
 bool flag=false;
   while (l<=h)
   { int mid=l+(h-l)/2;

      if(arr[mid]==fmin){
          cout<<mid;
          flag=true;
          break;
      }
      else if(arr[mid]>fmin) h=mid-1;
      else l=mid+1; 
   }
   if(flag==false){
    cout<<h;
   }


   
}