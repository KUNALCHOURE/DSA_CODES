#include<bits/stdc++.h>
using namespace std;
int main(){
     
    int arr[4]={1,2,3,4};
    for (int i = 0; i <4; i++)
    { 
         for(int j=i;j<4;j++){  //it denotes no of rounds in loop
         for (int k = i; k <=j; k++) //isse alg alg line main print hoga
         {
             cout<<arr[k];
         }
         cout<<endl;
         
    
         }
         
}
    
}