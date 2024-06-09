/*Given a sorted array of n elements and a target ‘x’. Find the last occurrence of ‘x’ in the array. If ‘x’
does not exist return -1.
Input 1: arr[] = {1,2,3,3,4,4,4,5} , x = 4
Output 1: 6*/

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
 int n;
    cout<<"enter the number to find";
    cin>>n;
int ans;
 for (int i = v.size(); i >0; i--)
 {
    if(v[i]==n){
        ans=i;
        break;
    }
 }
 cout<<"last index of number is "<<ans;

}
