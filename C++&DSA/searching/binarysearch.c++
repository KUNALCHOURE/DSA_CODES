#include<iostream>
#include<vector>
using namespace std;
int main(){
    cout<<"enter size";
    int n;
    cin>>n;

vector<int>v(n);
    int l=0;
    int h=n-1;
    
    for (int i = 0; i <n; i++)
    {
        cout<<"enter element";
        cin>>v[i];
    }
      int target;
    cout<<"enter target";
cin>>target;
    
    int index;

    while (l<=h)
    {
        int mid=(l+(h))/2;
  
        if(v[mid]==target){
            
            index=mid;
        }
        else if (v[mid]>target)
        {
            h=mid-1;
        }
        else{
            l=mid+1;
        }
        
        l++;
        h--;
    }

    cout<<index;
    

}