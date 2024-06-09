/*Given a sorted binary array, efficiently count the total number of 1’s in it.
Input 1 : a = [0,0,0,0,1,1]
Output 1: 2*/

#include<iostream>
#include<vector>
using namespace std;
int main(){
    
  int a;
 vector<int>v;
 
 for (int i = 0; i <5; i++)
 {  cout<<"enter element in array";
    cin>>a;
    v.push_back(a);
 }
int count=0;
int i=v.size()-1;
while (v[i]!=0)
{  i--;
    count++;
  
}

cout<<"no of ones are"<<count;

}