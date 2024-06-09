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
int ksmallestele(int arr[],int s,int l,int k){
    int pi=pivotindex(arr,s,l);
    cout<<pi<<endl;
    if(pi+1==k) return arr[pi];  //+1 kar rahe ha i kyuki index diya hai aur index 0 se strt hai 1st smallest index 0 ka hoga toh 0+1 karne padega agar check karna hai toh
    else if(pi+1<k) return  ksmallestele(arr,pi+1,l,k);
    else return ksmallestele(arr,s,pi-1,k);
    

}
int main(){
    int arr[]={5,7,9,4,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=32;

     cout<< ksmallestele(arr,0,n-1,k)<<endl;

     for (int  i = 0; i <n; i++)
     {
        cout<<arr[i];

     }
     
  
     
}