#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool flag=false;
    for (int  i = 0; i <n/2; i++)
    {
        for (int  j = 0; j <n; j++)
        {
            if((i*i)+(j*j)==n){
                cout<<i<<","<<j<<endl;
                flag=true;
                break;
            }
        }
        
    }
    if (flag==false)
    {
        cout<<"cannot find";
    }
    
    
}