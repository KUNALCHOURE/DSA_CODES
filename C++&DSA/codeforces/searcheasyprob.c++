#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
 bool flag=true;
    int arr[n];
    for (int  i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    
    for (int i = 0; i<n; i++)
    {
        if(arr[i]==1){
            flag=false;
            break;
        }
    }
    if(flag==false){
        cout<<"HARD";
    }
    else{
        cout<<"EASY";

    }
    
    
}