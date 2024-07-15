//concepts of copy constructor is explained in this code

#include<iostream>
using namespace std;

class Player{
private:
    string name;
    int health;
    int xp;

public:
    string get_name() {return name;}
    int get_health() {return health;}
    int get_xp() {return xp;}
    Player(string name_val="None", int health_val=0, int xp_val=0);
    //copy constructor
    Player(const Player &source);
    //Destructor
    ~Player() {cout << "Destructor called for: " << name << endl;}
};

Player::Player(string name_val, int health_val, int xp_val)
    : name {name_val}, health {health_val}, xp {xp_val} {
        cout << "constructor - called for: " << name << endl;
    }

Player::Player(const Player &source)
    //: name {source.name}, health {source.health}, xp {source.xp} 
    : Player{source.name, source.health, source.xp}{
        cout << "Copy constructor - made copy of: " << source.name << endl;
    }

void display_player(Player P){
    cout << P.get_name() << " have left " << P.get_health() << " health and have xp of " << P.get_xp() << endl;
}

int main(){
    Player sharvesh {"sharvesh", 69, 125};
    Player santu {"santu",99};

    display_player(sharvesh);
    display_player(santu);
    
    return 0;
}
