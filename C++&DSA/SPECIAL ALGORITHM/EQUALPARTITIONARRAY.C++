#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[9]={1,2,3,4,5,6,7,8,9};
    int pref[9];
 pref[0]=arr[1];
 bool flag=false;
    for (int i = 0; i <9; i++)
    {
        pref[i]=arr[9-1]-pref[i-1];

    }

       for (int i = 0; i <9; i++)
    {
       if(pref[i]==(pref[8]-pref[i+1-1])){
        flag=true;
        break;

       }
       

    }
    if(flag) cout<<"YES";
    else cout<<"NO";
    
    

}