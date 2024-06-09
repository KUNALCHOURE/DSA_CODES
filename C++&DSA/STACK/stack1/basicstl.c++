#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;

    cout<<st.size()<<endl;
    st.push(10);
    st.push(42);
    st.push(50);
    st.push(40);
    cout<<st.size()<<endl;
    //pop

    st.pop();
    cout<<st.size()<<endl;

    //top
    cout<<st.top()<<endl;

    //TRAVERSING STACK;
  stack<int>st2;
   while(st.size()>0){
        cout<<st.top()<<endl;
        st2.emplace(st.top());
        st.pop();
    }

    //now putting element in stat st;
    while (st2.size()>0)
    {
        st.emplace(st2.top());
        st2.pop();
    }
    
cout<<st.size();

    

}