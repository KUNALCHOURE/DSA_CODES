#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k;
    cout<<"enter window size";
    cin>>k;
int sum=0;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for (int i = 0; i <4; i++)
    {
        sum=sum+arr[i];
    }
int maxi;
int maxx=INT_MIN;
int i=1;
int j=k;
while (j<n)
{
    sum=sum+arr[j]-arr[i-1];
    if(maxx<sum){
        maxx=sum;
        maxi=i;
    }
 
    i++;
    j++;
}


cout<<maxx<<endl;
cout<<maxi;
}