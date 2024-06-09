#include<iostream>
using namespace std;
int main(){

    int n,m;
    cin>>n>>m;

     char arr[n][m];
     for (int i = 0; i <n; i++)
     {
        for (int j= 0; j <m; j++)
        {
           cin>>arr[i][j];
        }
        
     }
bool flag=false;
for (int i = 0; i <n; i++)
     {
        for (int j= 0; j <m; j++)
        {
           if(arr[i][j]=='C'|| arr[i][j]=='M'|| arr[i][j]=='Y'){
            flag=true;
           }
           
        }
        
     }
     if (flag){
 cout<<"#Color";
     }
     else{
        cout<<"#Black&White";
     }
    
     

     
}