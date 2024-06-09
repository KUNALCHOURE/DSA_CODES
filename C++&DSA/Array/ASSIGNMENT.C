//Calculate the product of all the elements in the given array
/*#include<iostream>
using namespace std;
int prod=1;
int product(int arr[],int n){
    for (int i = 0; i<n ; i++)
    {
         prod=prod*arr[i];

    }
    return prod;

}
int main(){
    int n;
    cout<<"enter size of array";
    cin>>n;
    int arr[n];
      for (int i = 0; i<n ; i++)
    {
         cout<<"enter element in array";
       cin>>arr[i];

    }
    int prod;
    prod=product(arr,n);
    cout<<"the product of elements is "<<prod;
  
}
*/

//Find the minimum value out of all elements in the array.
/*
#include<iostream>
using namespace std;
int min(int arr[],int n){
    int min=arr[0];

    for (int i = 0; i <n; i++)
    {
        if (arr[i]<min)
        {
            min=arr[i];
            
        }
        
        
    }
    return min;

}

int main(){
   int n;
    cout<<"enter size of array";
    cin>>n;
    int arr[n];
      for (int i = 0; i<n ; i++)
    {
         cout<<"enter element in array";
       cin>>arr[i];

    }
    int minimum=min(arr,n);
    cout<<"the min element of array is "<<minimum;
}*/

//Given an array, predict if the array contains duplicates or not. *****************
/*
#include<iostream>
using namespace std;
int main() {
int arr[5]={1,2,2,4,5};
bool flag = false;
for(int i=0;i<5;i++){
for(int j=i+1;j<5;j++){
if(arr[i]==arr[j]){
flag = true;
cout<<arr[i];
break;
}
}
}
if(flag==false) cout << "No duplicate";
return 0;
}
*/
//Count the number of triplets whose sum is equal to the given value x.
/*
#include<iostream>
using namespace std;
void sum(int arr[],int n,int x){
    int min=arr[0];

    for (int i = 0; i <n; i++)
    {
        for (int j = i+1; j < n;j++)
        {
        for (int k = i+2; k <n; k++)
        {
        if (arr[i]+arr[j]+arr[k]==x)
        {
          cout<<"["<<arr[i]<<arr[j]<<arr[k]<<"]";
        }
        
        }
        
        }
        
        
    }
  

}

int main(){
   int n;
    cout<<"enter size of array";
    cin>>n;
    int arr[n];
      for (int i = 0; i<n ; i++)
    {
         cout<<"enter element in array";
       cin>>arr[i];

    }
    int x;
    cout<<"enter the number";
    cin>>x;

    sum(arr,n,x);

    
}*/

//Find the factorial of a large number. 
/*
#include<iostream>
using namespace std;
int fact(int n){
  if (n==0)
  {
    return 0;

  }
  if (n==1)
  {
     return 1;
  }
  else{
    return n*fact(n-1);

  }
  
}
int largest(int arr[],int n){
    int max=arr[0];

    for (int i = 0; i <n; i++)
    {
        if (arr[i]>max)
        {
          max=arr[i];

        }
    }
  
  int factorial=fact(max);
return factorial;

}

int main(){
   int n;
    cout<<"enter size of array";
    cin>>n;
    int arr[n];
      for (int i = 0; i<n ; i++)
    {
         cout<<"enter element in array";
       cin>>arr[i];

    }
  int factorial=largest(arr,n);
  cout<<"the factorial of largest no is "<<factorial;

}
*/


//Find the first non-repeating element in the array . ********************//***************
#include<iostream>
using namespace std;

int nre(int arr[],int n){
    int max=arr[0];
 int j;
    for (int i = 0; i <n; i++)
    {
      for ( j  = 0; j < n; j++)   //waha pe hum i+1 se start nahi karenge kyuki agar koi element jo repeating hai
                                    // i uspe ata hai aur uske age  woh repeat nahi ho raha hai toh woh non repeating
                                    // ban jayga ,toh isliye hame j=0(starting) se hame check karna hoga ki kahi i 
                                    //wala number pehle bhi repeat toh nahi hua
      {
        if (i!=j & arr[i]==arr[j])
        {
        break;
        }
    
      }
      if (j==n)
      {
        cout<<arr[i];

      }
      
}
}

int main(){
   int n;
    cout<<"enter size of array";
    cin>>n;
    int arr[n];
      for (int i = 0; i<n ; i++)
    {
         cout<<"enter element in array";
       cin>>arr[i];

    }
  nre(arr,n);


  

}
/*
//Move all zeros to the end of the array.
#include<iostream>
using namespace std;
int main(){
   int n;
    cout<<"enter size of array";
    cin>>n;
    int arr[n];
      for (int i = 0; i<n ; i++)
    {
         cout<<"enter element in array";
       cin>>arr[i];

    }
/*  // this is also a logic but didnt understand how it works dry run it
    for (int i = 0; i <n; i++)
    {
       for (int j = i+1; j <n; j++)
       {
         if (arr[i]==0)
         {
           swap(arr[i],arr[j]);

         }
         
       }
       
    }
int j=0;
for (int i = 0; i <n; i++)
{
  if (arr[i]!=0)
  {
     swap(arr[i],arr[j]);
     j++;
     
  }
  
}


    for (int i = 0; i <n; i++)
    {
      cout<<arr[i];

    }
    
    
}/*

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=prices[0];
        int minnum;
        for(int i=0; i<prices.size();i++){
            if(prices[i]<min){
                min=i;
                minnum=prices[i];
            }
            
        }
        int max=prices[0];
        for(int i=min;i<prices.size();i++){
             if(prices[i]>max)
             {
               max=prices[i];

             }

        }
        return max-min;

    }
};*/