/*Write a program to print the elements of both the diagonals in a square matrix.*/
#include<iostream>
using namespace std;
int main(){
      int m,n;
    cout<<"enter no of rows";
    cin>>m;
    cout<<"enter no of cols";
    cin>>n;
    int arr[m][n];
    for (int  i = 0; i <m; i++)
    {
        for ( int j= 0; j < n; j++)
        {
            cin>>arr[i][j];

        }
        
    }


   for (int  i = 0; i <m; i++)
    {
        for ( int j= 0; j < n; j++)
        {
            if (i==j)
            {
                cout<<arr[i][j];
            }
             
            if (i==0 && j==n-1)
            {
                cout<<arr[i][j];
            }
            
            else if (i==m-1&& j==0)
            {
                cout<<arr[i][j];
            }
            
          else{
            cout<<" ";
          }
          
        }
        
        cout<<endl;
        
    }

    
}
