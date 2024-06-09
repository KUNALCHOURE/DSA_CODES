#include<iostream>
using namespace std ;

int maze(int sr,int sc,int er,int ec){

    if(sr>er || sc>ec){
        return 0;
    }
    else if(sr==er && sc==ec){
        return 1;
    }
    int rightway=maze(sr,sc+1,er,ec);
    int downways=maze(sr+1,sc,er,ec);
  int totalways=rightway+downways;
  return totalways;
}

void printpath(int sr,int sc,int er,int ec,string s){
    if(sr>er || sc>ec){
        return ;
    }
    else if(sr==er && sc==ec){
        cout<<s<<endl;

        return ;
    }
    printpath(sr,sc+1,er,ec,s+'R');
    printpath(sr+1,sc,er,ec,s+'D');


}

int maze2(int sr,int sc){

    if(sr<1 || sc<1){
        return 0;
    }
    else if(sr==1 && sc==1){
        return 1;
    }
    int rightway=maze2(sr,sc-1);
    int downways=maze2(sr-1,sc);
  int totalways=rightway+downways;
  return totalways;
}

void printpath2(int sr,int sc,string s){
    if(sr<1 || sc<1){
        return ;
    }
    else if(sr==1 && sc==1){
        cout<<s<<endl;

        return ;
    }
    printpath2(sr,sc-1,s+'R'); //right
    printpath2(sr-1,sc,s+'D'); //down


}
int main(){
    cout<<maze(0,0,2,2);
    printpath(1,1,3,3,"");

    cout<<endl;
  cout<<maze2(3,3);

  printpath2(3,3,"");
}