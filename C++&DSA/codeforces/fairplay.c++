#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
 while (t>0)
 {
    int s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;

    int min1=min(s1,s2);
    int max1=max(s1,s2);
    int max2=max(s3,s4);
    int min2=min(s3,s4);


    if(min1<max2 && min2<max1){
        cout<<"Yes"<<endl;

    }
    else{
        cout<<"NO"<<endl;
    }

    t--;
 }


}