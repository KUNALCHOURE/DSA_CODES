#include<iostream>
using namespace std;
int main(){

    int t;
    cin>>t;
    while (t>0)
    {
        int n;
        cin>>n;
 int count=0;
 int maxx=0;
         int arr[n];
         for(int i=0;i<n;i++){
            cin>>arr[i];
         }

         for (int i = 0; i <n-1; i++)
         {
             if (arr[i]==0 && arr[i+1]==0)
             {
                count++;
             }
             
             if(count>maxx){
                maxx=count;
             }


         }
         
         cout<<maxx<<endl;
      t--;

    }
    
}