#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int sum1=0,sum2=0;

        for(int i=0;i<n;i++){
            if(arr[i]==1){
                sum1+=1;
            }
            else{
                sum2+=2;
            }
        }
        
        if(sum1==sum2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
}