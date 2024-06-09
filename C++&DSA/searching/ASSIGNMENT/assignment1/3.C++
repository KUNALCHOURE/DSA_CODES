/*Given a matrix having 0-1 only where each row is sorted in increasing order, find the row with the
maximum number of 1’s.
Input matrix : 0 1 1 1
0 0 1 1
1 1 1 1 // this row has maximum 1s
0 0 0 0
Output: 2*/
#include<iostream>
using namespace std;
int main(){
    int arr[4][4];

    for (int i = 0; i <4; i++)
    { 
         for (int j = 0; j <4; j++)
         {   cout<<"enter element ";
          cin>>arr[i][j];

         }

    }
        

    int max=0,index;
    for (int i = 0; i <4; i++)
    { int count=0;
         for (int j = 0; j <4; j++)
         {
            if(arr[i][j]==1){
                count++;

            }
         }
         if(count>max){
            max=count;
            index=i;
         }
         
    }

    cout<<index;

}