#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;

    while (t>0)
    {   int h,m;
        cin>>h>>m;
        int min=(h*60)+m;
        int ans=1440-min;

        cout<<ans<<endl;
        t--;
    }

}