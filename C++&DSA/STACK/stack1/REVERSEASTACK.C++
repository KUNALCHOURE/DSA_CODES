#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>s;
    s.push(10);
     s.push(20);
      s.push(30);
       s.push(40);
    s.push(50);
/*    stack<int>s2;
    while (s.size()>0)
    {
        s2.emplace(s.top());
        s.pop();
    }

     stack<int>s3;
    while (s2.size()>0)
    {
        s3.emplace(s2.top());
        s2.pop();
    }

     while (s3.size()>0)
    {
        s.emplace(s3.top());
        s3.pop();
    }

    while (s.size()>0)
    {
        cout<<s.top()<<" ";
        s.pop();

    }
    
*/

//using array;

vector<int>v;
while (s.size()>0)
{
   v.emplace_back(s.top());
   s.pop();
}

for(int i=0;i<v.size();i++){
    s.emplace(v[i]);
}



 while (s.size()>0)
    {
        cout<<s.top()<<" ";
        s.pop();

    }  
}