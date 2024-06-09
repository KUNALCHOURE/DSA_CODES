#include<iostream>
using namespace std;
/*
int main(){
    for(int i=0;i<3;i++){
        for (int j = 0; i <5; i++)
        {
            cout<<"*";

        }
        cout<<"\n";
    }
}

int main(){
    int x,y;
    cout<<"enter no of rows";
    cin>>x;
    cout<<"enter no of cols ";
    cin>>y;
    for (int i = 0; i <x; i++)
    {
      for (int  j = 1; j<=y; j++)
      {
         cout<<j;

      }
      cout<<"\n";
    }
    
}

int main(){
    int x,y;
      cout<<"enter no of rows";
    cin>>x;
    cout<<"enter no of cols ";
    cin>>y;
    for (int i = 1; i<=x; i++)
    {
      for (int  j =1 ; j<=i; j++)
      {
         cout<<"*";

      }
      cout<<"\n";

    }

}
*
**
***
**** 

int main(){
    int x,y;
      cout<<"enter no of rows";
    cin>>x;
   
    for (int i = 0; i<x; i++)
    {
      for (int  j =0; j<x-i; j++)
      {
         cout<<"*";

      }
      cout<<"\n";

    }

}
****
***
**
*



int main(){
    int x,y;
      cout<<"enter no of rows";
    cin>>x;
   
    for (int i = 0; i<x; i++)
    {int a=1;
      for (int  j =0; j<=i; j++)
      {
         cout<<a;
         a=a+2;

      }
      cout<<"\n";

    }

}
1
13
135
1357 


int main(){
    int x,y;
      cout<<"enter no of rows";
    cin>>x;
   
    for (int i = 0; i<x; i++)
    {int a=65;
      for (int  j =0; j<x; j++)
      {
         cout<<char(a);
         a=a+1;

      }
      cout<<"\n";

    }

}
ABCDE
ABCDE
ABCDE
ABCDE
ABCDE 



int main(){
    int x,y;
      cout<<"enter no of rows";
    cin>>x;
    int mid=(x/2)+1;
   
    for (int i = 1; i<=x; i++)
    {
      for (int  j =1; j<=x; j++)
      {
     
           if (i==mid || j==mid)
           {
                cout<<"*";
           }
           else{
            cout<<" ";
           }
           
      }
      cout<<"\n";

    }

}
  *  
  *
*****
  *
  *  

 
int main(){
    int x,y;
      cout<<"enter no of rows";
    cin>>x;
    int mid=(x/2)+1;
   
    for (int i = 1; i<=x; i++)
    {
      for (int  j =1; j<=x; j++)
      {
     
           if (i==j || i+j==(x+1))
           {
                cout<<"*";
           }
           else{
            cout<<" ";
           }
           
      }
      cout<<"\n";

    }

}

 *   *
  * *
   *
  * *
 *   *
*     *  

int main(){
    int x,y;
      cout<<"enter no of rows";
    cin>>x;
    int mid=(x/2)+1;
    int a=1;
    for (int i = 1; i<=x; i++)
    { 
      for (int  j =1; j<=i; j++)
      {
        cout<<a;
        a=a+1;     
      }
      cout<<"\n";

    }

}
 
1
23
456
78910 


int main(){
    int x,y;
      cout<<"enter no of rows";
    cin>>x;
    int a=1;
    for (int i = 1; i<=x; i++)
    { if (i%2!=0)
    {
        a=1;
    }
    else
    {
        a=0;
    }
    
      for (int  j =1; j<=i; j++)
      {
        cout<<a;
        //flipping
        if(a==1) a=0;
        else a=1;
          
      }
      cout<<"\n";

    }

}

1
01
101
0101
10101


int main(){
    int x,y;
      cout<<"enter no of rows";
    cin>>x;
    int a=1;
    
    for(int i=1;i<=x;i++){
      for (int j =i; j<=x-1; j++)
      {
        cout<<" ";
      }
      for (int k = 1; k <=i; k++)
      {
        cout<<"*";
      }
      cout<<endl;
    }

    }
   *
  **
 ***
****


int main(){
    int x,y;
      cout<<"enter no of rows";
    cin>>x;
    
    for(int i=1;i<=x;i++){
      for (int j =i; j<=x-1; j++)
      {
        cout<<" ";
      }
      for (int k = 1; k <=i; k++)
      {
        cout<<"*";
      }
     for (int l = 1; l <i; l++)
     {
        cout<<"*";
     }
     
      cout<<endl;
    }

    }
   *
  ***
 *****
*******    


int main(){
    int x,y;
      cout<<"enter no of rows";
    cin>>x;
    
    for(int i=1;i<=x;i++){
      for (int j =i; j<=x-1; j++)
      {
        cout<<" ";
      }
      for (int k = 1; k <=i; k++)
      {
        cout<<k;
      }
     for (int l = 1; l <i; l++)
     {
        cout<<l;
     }
     
      cout<<endl;
    }

    }

   1
  121
 12312
1234123




  // star pyramid

  
  
int main(){
    int x,y;
      cout<<"enter no of rows";
    cin>>x;
    
    for(int i=1;i<=x;i++){
      for (int j =1; j<=(x-i); j++)
      {
        cout<<" ";
      }
      for (int k = 1; k <=x; k++)
      {
        cout<<"*";
      }
      cout<<endl;
    }

    }
 
    ****
  ****
 **** 
****    

//star bridge
***********************************************************************************************************
int main(){
    int x,y;
      cout<<"enter no of rows";
    cin>>x;
    int a=1;
    for(int i=1;i<=x;i++){
      if(i==1){
        cout<<"*";
      }
      else{
      for (int j =1; j<=(x+1-i); j++)
      {
        cout<<"*";
      }
      
      for (int k = 1; k <=a; k++)
      {
        cout<<a;
        a=a+2;
      }
      for (int l = 1; l <=(x+1-i); l++)
      {
         cout<<"*";
      }
      
      cout<<endl;
    }
    }

    }*/

    //number bridge