#include<bits/stdc++.h>
#include<string>
using namespace std;
class Student{
    public:
    string name;
    int rollno;
    float marks;

    Student(string name,int rollno,float marks){
        this->name=name;
        this->rollno=rollno;
        this->marks=marks;

    }
}
;
int main(){
 // Student *s= new Student("kunal",99,99);  //DYNAMIC ALLOCATION
  Student s("kunal",99,99);  //STATIC ALLOCATION
  s.name="abc";

  Student *ptr=&s;
  (*ptr).name="def";
  cout<<s.name;

  ptr->marks=100;
  cout<<s.marks;
}