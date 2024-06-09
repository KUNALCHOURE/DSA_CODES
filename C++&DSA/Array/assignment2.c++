/*Find the unique number in a given Array where all the elements are being repeated twice with one value being unique.**********************/
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[5];

    for (int i = 0; i <5; i++)
    {
        cout<<"enter element";
        cin>>arr[i];

    }
    int len=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+len);
    int u;
    for (int i = 0; i <5; i++)
    {
        for (int j = i+2; j <5; j++)
        {
             if (arr[i]==arr[j])
             {
                continue;
             }
             else{
                
            u=arr[i];
            
             }
             
        }
        
    }
  cout<<"the unique element is "<<u;

} 