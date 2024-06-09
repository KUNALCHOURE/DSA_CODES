#include<bits/stdc++.h>
using namespace std;
class Player{
   private:
    int health;
    int score;
   
  //memeber function
public:
   void displayhealth(){
    cout<<health;
   }
 //getter & setter
 void sethealth(int h){
    health=h;
 }
   int  gethealth(){
        return health; 
    }
};

int main(){
      Player p1;//p1 is an object
    /*  p1.health=90;
      Player player[10];
      player[0]=p1;
      */

p1.sethealth(90);
cout<<p1.gethealth();
p1.displayhealth();

    
}