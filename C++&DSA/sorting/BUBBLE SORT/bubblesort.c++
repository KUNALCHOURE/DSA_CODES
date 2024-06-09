#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
int n;
cout<<"enter no of elements";
cin>>n;
    vector<int>v(n);
    for (int i = 0; i <n; i++)
    {
        cin>>v[i];
    }
    
    /*sort(v.begin(),v.end());//built in function
    for (int i = 0; i <5; i++)
    {
        cout<<v[i];
    }*/
    
  /*  for (int  i = 0; i <n-1; i++)
    {
        for (int j = 0; j <n-1; j++)
        {
            if (v[j]>v[j+1])
            {
                swap(v[j],v[j+1]);
            }
            
        }
        
    }
    
 for (int i = 0; i <n; i++)
    {
        cout<<v[i];
    }   
}
*/
// OPTIMIZED BUBBLE SORTING

    for (int  i = 0; i <n-1; i++)
    { bool flag=true;
        for (int j = 0; j <n-1; j++)
        {
            if (v[j]>v[j+1])
            {
                swap(v[j],v[j+1]);
                flag=false;
                
            }
            
        }
        if (flag== true) //swap didnt happen
        {
            break;
        }
        
    }
    
 for (int i = 0; i <n; i++)
    {
        cout<<v[i];
    }   
}
