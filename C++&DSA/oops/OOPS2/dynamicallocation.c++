#include <iostream>
using namespace std;

class Player {
private:
    int age;
    int score;
    int health;
    bool alive;

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
};

int main(){
    Player *p1=new Player;
    (*p1).setAge(20);
    cout<<(*p1).getAge();

    //or
    //without pointer
    p1->setHealth(100);
    cout<<p1->getHealth();
       
}