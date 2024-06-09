
//Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

//method 2
#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter rows and cols";
    cin>>n>>m;
    int row[n];
    int cols[m];


int arr[n][m];
for (int i = 0; i <n; i++)
{
    for (int j = 0; j <m; j++)
    {
        cin>>arr[i][j];

    }
    
}
//setting zeros
for (int i = 0; i <n; i++)
{
    for (int j = 0; j <m; j++)
{
    if (arr[i][j]==0)
    {
        row[i]=0;
        cols[j]=0;
    }
    
}

}

for (int i = 0; i <n; i++)
{
    if (row[i]==0){
        for (int j = 0; j <m; j++)
        {
            arr[i][j]=0;
        }
        
    }
    if (cols[i]==0)   //here i is representing  colums
    {
       for (int a = 0; a<n; a++)//here a is representing rows
       {
           arr[a][i]=0;
       }
       
    }
    


}

//printting arrray
for (int i = 0; i <n; i++)
{
    for (int j = 0; j <m; j++)
    {
        cout<<arr[i][j]<<" ";

    }
    cout<<endl;

}




}