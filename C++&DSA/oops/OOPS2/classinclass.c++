#include <iostream>
#include<string>
using namespace std;

class gun{
    public:
    int ammo;
    int damage;
    int scope;

};

class Player {
private:
    int age;
    int score;
    int health;
    bool alive;
    gun g;
     class Helmet{
        public:
        int hp;
        int level;
    
 int getHp() {
        return hp;
    }

    // Setter for hp
 void setHp(int hp) {
        this->hp = hp;
    }

    // Getter for level
 int getLevel() {
        return level;
    }

    // Setter for level
 void setLevel(int level) {
        this->level = level;
    }

     };
   
public:
    // Setter functions
    void setAge(int a) {
      this->age = a;
    }

    void setScore(int s) {
        score = s;
    }

    void setHealth(int h) {
        health = h;
    }

    void setAlive(bool al) {
        alive = al;
    }

    // Getter functions
    int getAge() {
        return age;
    }

    int getScore() {
        return score;
    }

    int getHealth() {
        return health;
    }

    bool isAlive() {
        return alive;
    }
    void setgun(gun g){
    this->g=g;       
    }
    gun getgun(){
        return g;
    }

    void sethelmet(int level){
        Helmet *H1=new Helmet;
        H1->setLevel(level);
       
       
        
    }
};

int main(){
    Player *p1=new Player;
    (*p1).setAge(20);
    cout<<(*p1).getAge()<<endl;

    //or
    //without pointer
    p1->setHealth(100);
    cout<<p1->getHealth()<<endl;
       
gun MK24;
 MK24.ammo=100;
  p1->setgun(MK24);
 gun g=p1->getgun();

 cout<<g.ammo<<endl;
}