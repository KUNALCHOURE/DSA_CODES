/*Given an array of digits (values are from 0 to 9), the task is to find the minimum possible sum of
two numbers formed from digits of the array. Please note that all digits of the given array must be
used to form the two numbers.*************************************************************************/
/*
#include<iostream>
using namespace std;
int main(){
    int arr[10];
    for (int i = 0; i <10; i++)
    {
        cin>>arr[i];
    }
    
    for (int i = 0; i <10; i++)
    {  int min=-1;
    int key=1;
       for (int j = i; j<10 ; j++)
       { 
         if (arr[j]<arr[j-1])
         {
            min=arr[j];
            key=j;
         }
         
          
       }
       swap(arr[i],arr[key]);
       
    }

    int sum=0;
    for (int i = 0; i <5; i++)
    {
       for (int j = 5; j <10; i++)
       {
          int sum=
       }
       
    }
    
    
}*/

/*Given an array of strings arr[] with all strings in lowercase. Sort given strings using Bubble Sort
and display the sorted array.*/

#include<iostream>
using namespace std;
int main(){
    string s[5]={"banana", "apple", "orange", "grape", "kiwi"};

    for (int i = 0; i <5; i++)
    {
        for (int j = 0; j <4;j++)
        {
            if(s[j]>s[j+1]){
            swap(s[j],s[j+1]);
            }
        }
        
    }
   for(int i = 0; i <5; i++){
 cout<<s[i]<<endl;
 
   } 
    
}