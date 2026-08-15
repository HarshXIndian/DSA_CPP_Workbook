// Ambiguity Resolution by code with harry !
// Also an example of hybrid Inheritance !
// tutorial #43
// Date : 21/02/2024

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

class Health_equipments : public Player{
    protected :
    int medikit ;
    public :
        void Pick_up(){
            cout << "Pick Up 'Medikit' !" << endl ;
        }
};

class Ammos : public Player{
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
        // cout << "Player's Gun Ammo Type is : " << Player_gun_Ammo_type << endl ; 
        /* Throw an error as Player_gun_Ammo_type because 'hum yha par jis variable ko use karna chate hai vo dono derived classes use karti hai aur access kar skti hai ,
        to Helath_equiment ke pass bhi base class ke us variable ki copy hai aur Ammo derived class ke pass bhi aur ab ye dono hi use ho rhi hai Player Derived class me 
        aur esi liye ye dono hi apna apna access provide krwa rhe hai us variable 'Player_gun_ammo_type' ke liye jis vjh se compiler confuse ho gya hai aur ambiguos name se 
        error dikha rha hai isko shi karne ke liye hm log , jha pe hmne classes ko jo ki player me use ho rhi hai unko declare kiya hai vha pe unko base class se jodte 
        time virtual ka use krenge jis se ki jab bhi base class 'Player' ka data age do ya do se jyada derived classes me share hoga aur uske baad derived classes se 
        sub derive classes me to same data vapus use na ho jaye vo pta chal jayega ! hencd for now we can use this syntax :
        */ 
        cout << "Player's Gun Ammo Type is : " << Health_equipments :: Player_gun_Ammo_type << endl ; 
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