#include<iostream>
#include<limits>
using namespace std;
int main(){
    int n=5;
    int arr[n]={5,3,7,2,1};
    for (int i= 0; i <n-1; i++)
    {
        int min=100;
        int key=-1;
        for (int j = i; j <n; j++)
        {
            if(arr[j]<min){
                min=arr[j];
                key=j;
            }
           
        }
        swap(arr[i],arr[key]);
        
    }

    for(int i=0;i<5;i++){
          cout<<arr[i];
    }
    
}