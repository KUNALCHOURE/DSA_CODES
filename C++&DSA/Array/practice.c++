/*
#include<iostream>
using namespace std;
int main(){int size;
    cout<<"enter the size of array";
    cin>>size;
    int arr[size];
    for (int i = 0; i <size; i++)
    {
       cout<<"enter element";
       cin>>arr[i];

    }

    int max=arr[0];
    for (int i = 0; i <size; i++)
    {
        if (arr[i]>=max)
        {
        max=arr[i];
        }

        
    }
    cout<<"the max element of array is "<<max<<endl;
int smax=arr[0];

    for (int i = 0; i <size; i++)
    {
        if (arr[i]>smax && arr[i]!=max)
        {
            smax=arr[i];

        }
        
    }
    cout<<"the second largest element in array is "<<smax;
}


#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"enter the size of array";
    cin>>size;
    int arr[size];
    for (int i = 0; i <size; i++)
    {
       cout<<"enter element";
       cin>>arr[i];

    }
    int noz=0;
    int noo=0;
    int notw=0;
    for (int i = 0; i <size; i++)
    {
        if (arr[i]==0) noz++;
        else if (arr[i]==1)noo++;
        else notw++;

        
    }
    for(int i=0;i<size;i++){
        if (i<noz)arr[i]=0;
      else if (i<(noz+noo) ) arr[i]=1;
      else arr[i]=2;
      
        
    }
    for (int i = 0; i < size; i++)
    {
     cout<<arr[i];
    }
    
}*/


//mergee twosorted arrayss *********************************/************/***************************
#include<iostream>
#include<vector>

using namespace std;
vector<int> merge(vector<int>& arr1,vector<int>& arr2){
    int n=arr1.size();
    int m=arr2.size();
    int i=0;
    int j=0;
    int k=0;
    vector<int> arr3(n+m);
    while (i<=n && j<=m){

 if (arr1[i]<arr2[j])
 {
    arr3[k]=arr1[i];
    i++;
 }
 else
 {
    arr3[k]=arr2[j];
    j++;

 }

 k++;
    }
if (i==n)  //arr1 ke sare elements ko utha liya
{
    arr3[k]=arr2[j];
    j++;
    k++;
}
if (j==m)
{
    arr3[k]=arr1[i];
    i++;
    k++;
    
}
return arr3;
    
}
int main(){
    vector<int> arr1;
    arr1.push_back(1);
     arr1.push_back(4);
      arr1.push_back(5);
       arr1.push_back(8);

       cout<<"array 1"<<endl;
            for(int i=0;i<arr1.size();i++){
            cout<<arr1[i];
            cout<<endl;


        }


    vector<int> arr2;
    arr2.push_back(2);
     arr2.push_back(3);
      arr2.push_back(6);
       arr2.push_back(7);
        arr2.push_back(10);
         arr2.push_back(12);

        cout<<"array 2"<<endl;
             for(int i=0;i<arr2.size();i++){
            cout<<arr2[i];
            cout<<endl;

        }

         cout<<"merged array"<<endl;
         
         vector<int> arr3=merge(arr1,arr2);
        for(int i=0;i<arr3.size();i++){
            cout<<arr3[i];
            cout<<endl;


        }

}



   