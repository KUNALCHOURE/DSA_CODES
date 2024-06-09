#include<iostream>
#include<vector>
using namespace std;
int main(){

int n,m;
cin>>n>>m;
int arr[n][m];
for (int i = 0; i <n; i++)
  {
         
for (int j = 0; j <m; j++)
        {
           cin>>arr[i][j];
        }
  }

int i=0;

    
    while (i<m)
    {int sum=0;
        for (int j = 0; j <n; j++)
        {
            sum=sum+arr[j][i];
        }
        cout<<sum<<endl;
        i++;
    }
    
}