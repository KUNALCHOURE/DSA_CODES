
#include <iostream>
#include <string>

using namespace std;

class Cricketer {
private:
    string name;
    int age;
    string role;
    
public:
   
    // Getter for name
    string getName() const {
        return name;
    }

    // Setter for name
    void setName(const string &name) {
        this->name = name;
    }

    // Getter for age
    int getAge() const {
        return age;
    }

    // Setter for age
    void setAge(int age) {
        this->age = age;
    }

    // Getter for role
    string getRole() const {
        return role;
    }

    // Setter for role
    void setRole( string role) {
        this->role = role;
    }




};

int main(){
    Cricketer c1;
    
    c1.setName("virat");
    c1.setRole("Batsman");


   Cricketer c2;
    
    c2.setName("MS");
    c2.setRole("WICKET KEEPER");


      Cricketer player[2]={c1,c2};
      cout<<player[0].getName()<<endl;
       cout<<player[1].getName()<<endl;

   
}