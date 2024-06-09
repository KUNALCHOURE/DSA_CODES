#include<bits/stdc++.h>
#include<string>
using namespace std;
class Book{
    private:
    string name;
    float price;
    int no_of_pages;
public:

    void settname(string n){
        name=n;
    }
     void settprice(int p){
       price=p;
    }
     void settnoofpages(int pages){
       no_of_pages=pages;
    }

    string gettname(){
        return name;
    }
    
    int gettprice(){
        return price;
    }
    
    int gettnoofpages(){
        return no_of_pages;
    }


    int countBooks(int p){
              if(price<p){
                return 1;
              }
    }

    bool isbookpresent(string s){
        if(name==s){
            return true;
        }
    }
};

int main(){
  Book B1;
  B1.settname("HARRY PORTR");
  B1.settprice(500);
  B1.settnoofpages(400);


cout<<B1.countBooks(1000);
cout<<B1.isbookpresent("HARRY PORTR");

}