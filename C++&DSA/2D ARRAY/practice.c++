//FIND LARGEST NO    *********************************************************
/*#include<iostream>
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
int max=arr[0][0];
    for (int  i = 0; i <m; i++)
    {
        for ( int j= 0; j < n; j++)
        {
          if (arr[i][j]>max)
          {
            max=arr[i][j];

          }
          

        }
        
    }
    cout<<"maximum element is "<<max;
   


}*/



//Write a program to add two matrices.********************************
/*
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


    cout<<"enter no of rows of second matrix";
    cin>>m;
    cout<<"enter no of cols of second matrix";
    cin>>n;
     int brr[m][n];
    for (int  i = 0; i <m; i++)
    {
        for ( int j= 0; j < n; j++)
        {
            cin>>brr[i][j];

        }
        
    }
//adding matrix
int crr[m][n];
    for (int  i = 0; i <m; i++)
    {
        for ( int j= 0; j < n; j++)
        {
            crr[i][j]=arr[i][j]+brr[i][j];

        }
        
    }
    cout<<endl;

//printing addition of array
      for (int  i = 0; i <m; i++)
    {
        for ( int j= 0; j < n; j++)
        {
           cout<<crr[i][j]<<" ";

        }
        cout<<endl;

    }

}
*/
//Write a program to print the transpose ofthe matrix entered by the user and store it in a newmatrix.
/*
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

//storing transpose of first array in new array
    int brr[n][m];

     for (int  i = 0; i <n; i++)
    {
        for ( int j= 0; j < m; j++)
        {
            brr[i][j]=arr[j][i];


        }
        
    }
//printing new array
     for (int  i = 0; i <n; i++)
    {
        for ( int j= 0; j < m; j++)
        {
           cout<<brr[i][j]<<" ";
            

        }
        cout<<endl;

    }

}*/

// Write a program to take transpose of matrix in itself
/*
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
 //transpose in same matrix
     for (int  i = 0; i <m; i++)
    {
        for ( int j= i+1; j < m; j++)
        {
          swap(arr[i][j],arr[j][i]);
        }
        

    }
    cout<<endl;
    for (int  i = 0; i <m; i++)
    {
        for ( int j= 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";


        }
        cout<<endl;
    }

}
*/

// wap to rotate array by 90 degrees**************************
/*
#include<iostream>
using namespace std;
int main(){
     
    int m,n;
    cout<<"enter no of rows/cols";
    cin>>m;
 
     int arr[m][m];
    for (int  i = 0; i <m; i++)
    {
        for ( int j= 0; j < m; j++)
        {
            cin>>arr[i][j];

        }
        
    }
 //transpose in same matrix
     for (int  i = 0; i <m; i++)
    {
        for ( int j= i+1; j < m; j++)
        {
          swap(arr[i][j],arr[j][i]);
        }
        

    }
//reversing transposed  array
    for (int k = 0; k <m; k++)
    {
     int i=0;
     int j=m-1;
     while(i<j) {
            swap(arr[k][i],arr[k][j]);
          i++;
          j--;
    }
    }
    cout<<endl;
    for (int  i = 0; i <m; i++)
    {
        for ( int j= 0; j <m; j++)
        {
            cout<<arr[i][j]<<" ";


        }
        cout<<endl;
    }

}*/

//multiplication of matrix
/*
#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter cols/rows of matrix";
    cin>>m;

    int arr[m][m];
    int brr[m][m];
        for (int  i = 0; i <m; i++)
    {
        for ( int j= 0; j < m; j++)
        {
            cout<<"enter element";
            cin>>arr[i][j];

        }
        
    }
    cout<<"second array";

            for (int  i = 0; i <m; i++)
    {
        for ( int j= 0; j < m; j++)
        {
            cout<<"enter element";
            cin>>brr[i][j];

        }
        
    }


int sum;
int crr[m][m];
for (int i = 0; i<m; i++)
{
    for (int j = 0; j <m; j++)
    { crr[i][j]=0;

    for (int k = 0; k<m; k++)
    {
        
        crr[i][j]+=arr[i][k]*arr[k][j];
    }
    
      
    }
    
}

     for (int  i = 0; i <m; i++)
    {
        for ( int j= 0; j < m; j++)
        {
         
           cout<<crr[i][j]<<" ";


        }
        cout<<endl;
        
    }

    
}*/


//wap to print a matrix in a wave from
/*
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
        for ( int j= 0; j <n; j++)
        {
            cin>>arr[i][j];

        }
        
    }

    //printing in wave form
  for (int i = 0; i <m; i++)
  {
    if (i%2==0)
    {
      for (int j = 0; j <n; j++)
    {
        cout<<arr[i][j];
    }
  cout<<endl;
    }
    
if (i%2!=0)
{
      for (int j = n-1; j>=0; j--)
    {
        cout<<arr[i][j];
    }
  cout<<endl;
}
}

}*/

//wap to print arraay in column wave format
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
        for ( int j= 0; j <n; j++)
        {
            cin>>arr[i][j];

        }
        
    }

    //printing in wave form
  for (int j = 0; j <m; j++)
  {
    if (j%2==0)
    {
      for (int i = 0; i<n; i++)
    {
        cout<<arr[i][j];
    }

    }
    
if (j%2!=0)
{
      for (int i= n-1; i>=0; i--)
    {
        cout<<arr[i][j];
    }
 
}
}

}