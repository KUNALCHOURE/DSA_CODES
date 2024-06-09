/*Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n]
inclusive in sorted order.
There is only one repeated number in nums, return this repeated number.
Input 1: arr[] = {1,2,3,3,4}
Output 1: 3
Input 2: arr[] = {1,2,2,3,4,5}
Output 2: 2*/


#include<iostream>
using namespace std;
int main(){
    int arr[4];
    int n;
    cout<<"enter size";
     cin>>n;

       for (int i = 0; i <n; i++)
    { 
         cout<<"enter a element ";
         cin>>arr[i];
         

    }

    for(int i=0;i<n-1;i++)
    {
        if(arr[i]==arr[i+1]){
            cout<<arr[i];
            break;
        }
    }


}