/*#include<iostream>
using namespace std;
int main(){
  int x;
  cout<<"enter a number";
  cin>>x;

  if (x>0)
  {
    cout<<x;
  }
  else
  {
    cout<<-x;

  }
  
}*/
/*
int main(){
    float cp,sp;
    cout<<"enter cost price";
    cin>>cp;
    cout<<"enter selling price";
    cin>>sp;

    if (sp>cp){
  cout<<"profit"<<sp-cp;

    }
    else{
        cout<<"loss"<<sp-cp;
    }
   
}


int main(){
    char ch;
    cout<<"enter a character";
    cin>>ch;
    int x=(int) ch;

    if((97<=x && x<=122) || (x>=65&& x<=90 )){
        cout<<"The given character is alphabet";

    }
    else{
        cout<<"the given character is a special character";

    }
}*/
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter a number";
    cin>>x;
    if (x%3==0 || x%5==0 && x%15!=0)
    {
        cout<<"The given number satisfies the condidtions";
    }
    else{
        cout<<"The given no doesnot satisfy the conditions";
    }
    
}