/*#include<iostream>

using namespace std;
int gcd(int a,int b){
    int hcf;
    for (int i = 1; i<=min(a,b); i++)   //  value of hcf is lesser than or equals to  min value of numbers whoes hcf needs to be 
                                  // determine 
    {
        if (a%i==0 && b%i==0)
        {
            
            hcf=i;
        }
        
    }
    return hcf;
    
}
int main(){
  int x,y;
  cout<<"enter first number";
  cin>>x;
  cout<<"enter second number";
  cin>>y;
  
  int h=gcd(x,y);
  cout<<"The hcf of numbers is"<<h;

}




//optimized code
#include<iostream>

using namespace std;
int gcd(int a,int b){
    int hcf;
    for (int i =min(a,b); i>=1; i--)   //  value of hcf is lesser than or equals to  min value of numbers whoes hcf needs to be 
                                  // determine 
    {
        if (a%i==0 && b%i==0)
        {
            
            hcf=i;
            break;
        }
        
    }
    return hcf;
    
}
int main(){
  int x,y;
  cout<<"enter first number";
  cin>>x;
  cout<<"enter second number";
  cin>>y;
  
  int h=gcd(x,y);
  cout<<"The hcf of numbers is"<<h;

}



//factorial of a number
#include<iostream>

using namespace std;
int fact(int n){
    int fact=1;
    for (int i = 2; i<=n; i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main(){
  int x,y;
  cout<<"enter number";
  cin>>x;

  int f=fact(x);
  cout<<"The factorial of number is"<<f;

}*/

//swapping a number
#include<iostream>

using namespace std;
 void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;

    return;
}

int main(){
  int x,y;
  cout<<"enter first number";
  cin>>x;
  cout<<"enter second number";
  cin>>y;
  swap(x,y);

  cout<<"after swapping "<<x<<" "<<y;

}
