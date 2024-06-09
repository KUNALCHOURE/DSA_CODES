#include<bits/stdc++.h>
using namespace std;

void display(int arr[],int n,int index){

    if(index==n){
        return ;
    }
    cout<<arr[index];
    display(arr,n,index+1);
}

void display2(vector<int>v,int index){

    if(index==v.size()){
        return ;
    }
    cout<<v[index];
    display2(v,index+1);
}
int main()
{
    int n;
 cout<<"enter size of array";
 cin>>n;
 vector<int>v;


  int arr[n];
  for (int i = 0; i <n; i++)
  {
    cin>>arr[i];
      }

  for (int i = 0; i <n; i++)
  {
    cin>>v[i];
      }

display2(v,0);
}

//displa vector

