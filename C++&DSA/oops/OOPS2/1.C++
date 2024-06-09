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
 
//passing obj ot function
int addScores(Player p1, Player p2) {
    return p1.getScore() + p2.getScore();
}
//creating an obj function
Player maxplayer(Player p1, Player p2){
    if(p1.getScore()>p2.getScore()){
        return p1;
    }
    else return p2;
}
int main(){
    Player p1;
    p1.setAge(25);
    p1.setScore(100);
    p1.setHealth(90);
    p1.setAlive(true);


  Player p2;
    p2.setAge(20);
    p2.setScore(120);
    p2.setHealth(120);
    p2.setAlive(true);

     int totalScore = addScores(p1, p2);
    cout << "Total Score of both players: " << totalScore << endl;

 Player p3= maxplayer(p1,p2);
 cout<<p3.getScore();

}