#include<iostream>
using namespace std;

//fibonacii 
int fibbo(int n){
    if (n==1|| n==2)
    {
      return 1;
    }
    else{
        return fibbo(n-1)+fibbo(n-2);

    }
}



////power function

int power(int n,int m){
    if (m==0)
    {
    return 1;
    }
    else if (m==1)
    {
        return n;
    }
    else{
           if(m%2==0){
            int ans=power(n,m/2);
            return ans*ans;
        
           }
           else {
            int ans=power(n,m/2);
            return ans*ans*ans;
           }
    }
}


//stair
int stair(int n){
    if (n==2)
    {
        return 2;
    }
    else if(n==1){
        return 1;
    }
    else{
        return stair(n-1)+stair(n-2);
    }
    
    
}
int main(){
    int n;
    cin>>n;
//to print fibbo number
    int f=fibbo(n);
    cout<<f;
// to print fibbonacii series
for (int i = 1; i <=n; i++)
{
    int c=fibbo(i);
    cout<<c;
}
int m=3;
int d=power(n,m);
cout<<d;

int s;
cin>>s;
 int df=stair(s);
 cout<<df;
 



}


