/*Given an integer array and an integer k where k<=size of array, We need to return the kth
smallest element of the array.*/
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v(5);
    for(int i=0;i<5;i++){
        cin>>v[i];
    }
    int k;
    cin>>k;
    int val;
    for (int i = 0; i <k; i++)
    {
        int min=INT32_MAX;
        for (int j = i; j <5; j++)
        {
            if(min>v[j]){
                min=v[j];
                
            }
            
        }
        val=min;
        
    }

    cout<<"THE "<<k<<"th min number is "<<val;
    

    
}