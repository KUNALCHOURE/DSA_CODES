#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={4,3,2,1,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);

    //cyclic sort
    int i=0;
    while (i<n)
    {
        int correctindx=arr[i]-1;
        if(i==correctindx) i++;
        else swap(arr[i],arr[correctindx]);

    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    
}