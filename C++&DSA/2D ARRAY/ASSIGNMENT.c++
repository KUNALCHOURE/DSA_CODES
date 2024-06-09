/*#include<iostream>
using namespace std;
int main(){
int arr[5][5];
for (int i = 0; i <5; i++)
{
    for(int j=0;j<5;j++)
    {
        arr[i][j]=10;
    }
}
for (int i = 0; i < 5; i++)
{
        for(int j=0;j<5;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
}

}*/

/*
#include<iostream>
using namespace std;
int main(){
int arr[3][3];
int brr[3][3];
for (int i = 0; i <3; i++)
{
    for(int j=0;j<3;j++)
    { cout<<"enter element ";
        cin>>arr[i][j];
    }
}
  cout<<endl;
for (int i = 0; i <3; i++)
{
    for(int j=0;j<3;j++)
    {cout<<"enter element ";
        cin>>arr[i][j];
    }
}

for (int i = 0; i <3; i++)
{
    for(int j=0;j<3;j++)
    {
        brr[i][j]= brr[i][j]+arr[i][j];
    }
}

for (int i = 0; i <3; i++)
{
    for(int j=0;j<3;j++)
    {
        cout<<brr[i][j]<<" ";
    }
    cout<<endl;
}

}*/

//: Write a C++ program to find the largest element of
// a given 2D array of integers. 
/*
#include<iostream>
using namespace std;
int main(){
int arr[3][3];
int brr[3][3];
for (int i = 0; i <3; i++)
{
    for(int j=0;j<3;j++)
    { cout<<"enter element ";
        cin>>arr[i][j];
    }
}

int max=arr[0][0];
for (int i = 0; i <3; i++)
{
    for(int j=0;j<3;j++)
    { 
        if(max<arr[i][j]){
            max=arr[i][j];    
        }
    }
}

cout<<"max element is "<<max;
}*/

// Write a program to print the row number having the maximum sum in a given matrix. **************
/*
#include<iostream>
using namespace std;
int main(){
int arr[3][3];
int brr[3][3];
int summ=0;

for (int i = 0; i <3; i++)
{
    for(int j=0;j<3;j++)
    { 
        cin>>arr[i][j];
    }
}
int j=0;
int n=0;
for (int i = 0; i < 3; i++)
{  int sum=0;
   for(int j=0;j<3;j++)
    {
       sum=sum+arr[i][j];
      
    }
    if (sum>summ)
    {
         summ=sum;
         n=i;
    }
   
    
}

cout<<"the max sum of row is "<<summ<<"the row number is"<<n;
}
*/


//Write a function which accepts a 2D array of integers and its size as arguments and displays the  elements of middle row and the 
//elements of middle column.[Assuming the 2D Array to be a square matrix with odd dimensions i.e. 3x3, 5x5, 7x7 etc...]
/* 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size";
    cin>>n;
int arr[n][n];

for (int i = 0; i <3; i++)
{
    for(int j=0;j<3;j++)
    { 
        cin>>arr[i][j];
    }
}

   for (int i = 0; i <n; i++)
    {
        for (int j = 0; j< n; j++)
        {
            if (j==(n/2)|| i==(n/2))
            {
                cout<<arr[i][j]<<" ";
            }
            else{
                cout<<" ";
            }
            
        }
        cout<<endl;
    }

    

}
*/

//wap to mul two matrices *********************************************
/*
#include<iostream>
using namespace std;
int main(){
    int n1,m1,n2,m2;
    cout<<"enter  row of first matrix" ;
    cin>>m1;
    cout<<"enter col of first matrix";
    cin>>n1;

    cout<<"enter  row of first matrix" ;
    cin>>m2;
    cout<<"enter col of first matrix";
    cin>>n2;


int arr[m1][n1];
int brr[m2][n2];

for (int i = 0; i <m1; i++)
{
    for(int j=0;j<n1;j++)
    { 
        cin>>arr[i][j];
    }
}

for (int i = 0; i <m2; i++)
{
    for(int j=0;j<n2;j++)
    { 
        cin>>brr[i][j];
    }
}
int crr[m2][n2];
int mul=1;
int sum=0;
for (int i = 0; i<m1; i++)
{
for (int j = 0; j<n2; j++)
{  crr[i][j]=0;
    for (int k = 0; k < m2; k++)
  {
        crr[i][j]+=arr[i][k]*brr[k][j];
        
  }
}
}

for (int i = 0; i <m2; i++)
{
    for(int j=0;j<n2;j++)
    { 
        cout<<crr[i][j]<<" ";
    }
    cout<<endl;
}*/

//wap to print the array in wave form
/*
#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter no  of  rows of array";
    cin>>m;

    cout<<"enter no  of cols of array";
    cin>>n;
    int arr[m][n];
cout<<" enter elements ";
    for (int i = 0; i <m; i++)
{
    for(int j=0;j<n;j++)
    { 
        cin>>arr[i][j];
    }
}

for (int k = 0; k <m; k++){


if (k%2==0)
{
    for (int i = 0; i <m; i++)
{
    
       cout<<arr[k][i]<<" ";
}
cout<<endl;
}

else{
        for (int i = m-1; i>=0; i--)
{
    cout<<arr[k][i]<<" ";
}
cout<<endl;
}
}
}

*/

