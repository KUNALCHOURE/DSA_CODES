
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

//wap to print arraay in column wave format***************
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

}*/

//wap to print  array in spiral form***************
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
 int minc=0;
 int maxc=n-1;
 int minr=0;
 int maxr=m-1;

while (minr<=maxr && minc<=maxc)
{
 

    //right (i constant,j varies)
    for (int j =minc; j<=maxc; j++)
    {
        cout<<arr[minr][j]<<" ";
    }
  minr++;
  if (minr>maxr || minc>maxc)
  {
     break;
  }
  
    //down(j constant ,i varies)
    for (int i = minr; i <=maxr; i++)
    {
         cout<<arr[i][maxc]<<" ";

    }
    maxc--;
      if (minr>maxr || minc>maxc)
  {
     break;
  }
    
    // left(i constant,j varies)
    for (int j = maxc; j>=minc; j--)
    {
        cout<<arr[maxr][j]<<" ";
    }
    maxr--;
      if (minr>maxr || minc>maxc)
  {
     break;
  }

    // top ( i varies, j constant)
    for (int i = maxr; i>=minr; i--)
    {
        cout<<arr[i][minc]<<" ";
    }
    minc++;
    
}   
// another condition -no of element are fixed so they cannot be more
}