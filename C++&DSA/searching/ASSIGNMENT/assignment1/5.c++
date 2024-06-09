/*Given a number ‘n’. Predict whether ‘n’ is a valid perfect square or not.
Input 1: n = 36
Output 1: yes

Input 2: n = 45
Output 2: no*/

#include<iostream>
#include<vector>
using namespace std;
int main(){
int n;
cin>>n;

int l=0;
int h=n-1;
bool flag=false;
while (l<=h)
{ int mid=l+(h-l)/2;
    if(mid*mid==n){ flag=true ; break;}
    else if(mid*mid>n) h=mid-1;
    else l=mid+1;

}
if(flag){
    cout<<"Yes";
}
else{
    cout<<"NO";
}

}