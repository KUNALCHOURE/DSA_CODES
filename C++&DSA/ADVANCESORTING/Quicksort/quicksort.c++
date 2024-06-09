#include<bits/stdc++.h>
using namespace std;
int pivotindex(int arr[],int s,int l){
    int pivot=arr[s];

    int count=0;
    for (int i = s+1; i <=l; i++)
    {
         if(arr[i]<=pivot){   //= aya kyuki ham equal ele ko lhs mai rakh rahe hai
            count++;
         }

    }
    int pi=count+s; //si aya kyuki agar hame first 
                     //element ka index 0 nahi rahega
swap(arr[s],arr[pi]);
    int i=s;int j=l;
    while (i<pi && j>pi)
    {

       if(arr[i]<=pivot)i++;
       if(arr[j]>pivot)j--;
       else if(arr[i]>pivot && arr[j]<=pivot){
        swap(arr[i],arr[j]);
        i++;j--;
       }

    }
    return pi;
                   
    

}

void quicksort(int arr[],int s,int l){
  if(s>=l) return ;

    int pi=pivotindex(arr,s,l);

    quicksort(arr,s,pi-1);
    quicksort(arr,pi+1,l);

}
int main(){
    int arr[]={5,7,9,4,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    quicksort(arr,0,n-1);
     for (int i = 0; i < n; i++)
     {
       cout<<arr[i];
     }
     
}