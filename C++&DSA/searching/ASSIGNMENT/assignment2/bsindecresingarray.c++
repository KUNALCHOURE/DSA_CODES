#include<iostream>/****************************************/
using namespace std;
int main(){
    int n=5;

    int l=0;
    int h=n-1;
    int arr[n]={5,4,3,2,1};
    int x;
    cout<<"enter number to find";
    cin>>x;
    bool flag=false;
int index;
    while (l<=h)
    {
        int mid=l+(h-l)/2;
    if (arr[mid]==x)
    {
             index=mid;
             flag=true;
             break;
    }
    
      else if(arr[mid]>x){
            l=mid+1;
         }
    else{
        h=mid-1;
    }
    }
    if (flag==true){
        cout<<"element found at"<<index;
    }
   else{
    cout<<"Element not found";

   }


}