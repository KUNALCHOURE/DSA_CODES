#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,5,7,4,1};


    //insetion sort
    for (int i = 1; i <5; i++)
    {
        int j=i;

        while(j>=1 && arr[j]<arr[j-1]){
           {
                swap(arr[j],arr[j-1]);
                j--;
            }
        }
        
    }
    for (int i = 0; i < 5; i++)
    {
       cout<<arr[i];
    }
    
    
}