#include<iostream>
#include<vector>
using namespace std;
int main(){

long long int n,m;
cin>>n>>m;
int count=0;
long long int sum[n][m];
long long int arr[n][m];
long long int brr[n][m];
for (int i = 0; i <n; i++)
  {
         
for (int j = 0; j <m; j++)
        {
           cin>>arr[i][j];
        }
  }

for (int i = 0; i <n; i++)
  {
         
for (int j = 0; j <m; j++)
        {
           if(arr[i][j]==0){
            count++;
           }
        }
  }

int half=((n*m)/2);
  if(count>half && half>0){
    cout<<"Yes"<<endl;
  }

  else{
    cout<<"No";
  }

}