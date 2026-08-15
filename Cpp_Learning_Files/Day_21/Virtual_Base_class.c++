// Virtual Base Class use in classes declaration !
// tutorial #44
// Date : 22/02/2024

#include<iostream>
using namespace std;

class Player{
    private:
        string Player_Name ;
        int Player_league ;
    protected :
        int vest_level = 3 ;
        int player_healt = 140;
    public:
        string Player_gun_Ammo_type = "AR" ;
        int teammates_live = 2 ;
};

class Health_equipments : virtual public Player{
    protected :
    int medikit ;
    public :
        void Pick_up(){
            cout << "Pick Up 'Medikit' !" << endl ;
        }
};

// use virtual keyword !
class Ammos : virtual public Player{
    protected:
    int AR_Ammo ;
    int SMG_Ammo ;
    public:
        void Pick_up(){
            if(Player_gun_Ammo_type == "AR")
            cout << "Pick Up 'AR Ammo' !" << endl ;
            else cout << "Pick Up 'SMG Ammo' !" << endl ;
        };
};

class Pick : public Health_equipments, public Ammos{
    public:
    void Pick_up(){
        cout << "Player's Gun Ammo Type is : " << Player_gun_Ammo_type << endl ; 
        Health_equipments :: Pick_up() ;
    }
};
int main(){
    Health_equipments mk ;
    mk.Pick_up();

    Ammos a ;
    a.Pick_up();

    Pick p ;
    p.Pick_up();

    return 0;
}