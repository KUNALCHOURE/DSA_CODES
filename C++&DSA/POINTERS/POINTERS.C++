//swapping with pointers
/*#include<iostream>
using namespace std;

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
    return;
}
int main(){
    int x,y;
    cout<<"enter first number";
    cin>>x;
    cout<<"enter second number";
    cin>>y;
    swap(&x,&y);
    cout<<"after swapping "<<x<<" "<<y;

} */

#include<iostream>
using namespace std;
int sum(int*a,int *b){
    int sum=*a+*b;
    return sum;
}
int main(){
int x,y;
cout<<"enter first number";
cin>>x;
cout<<"enter second number";
cin>>y;

int s=sum(&x,&y);
cout<<"The sum is "<<s;


}