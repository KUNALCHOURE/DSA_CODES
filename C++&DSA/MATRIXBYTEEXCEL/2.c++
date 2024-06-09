#include<iostream>
#include<vector>
using namespace std;
int main(){

long long int n,m;
cin>>n>>m;
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
           cin>>brr[i][j];
        }
  }


  for (int i = 0; i <n; i++)
  {
         
for (int j = 0; j <m; j++)
        {
           sum[i][j]=arr[i][j]+brr[i][j];

        }
  }


for (int i = 0; i <n; i++)
  {
         
for (int j = 0; j <m; j++)
        {
          cout<<sum[i][j]<<" ";

        }
        cout<<endl;
  }


}