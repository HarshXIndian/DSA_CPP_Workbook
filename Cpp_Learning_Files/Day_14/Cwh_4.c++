// Dynamic Initialization of Objects Using Constructors  
// Tutorial #33
#include<iostream>
using namespace std;

class BankDeposite{
    int principal ;
    int years ;
    float intrestRate ;
    int returnValue ;
    public :
        void show();
        BankDeposite(){};
        BankDeposite(int p , int y , float r);
        BankDeposite(int p , int y , int R);
};

BankDeposite :: BankDeposite(int p , int y , float r){ // r can be something like 0.03
    principal = p ;
    years = y ;
    intrestRate = r ;
    returnValue = principal ;
    for(int i = 0 ; i < years ; i++){
        returnValue = returnValue * (1 + intrestRate);
    };
};

BankDeposite :: BankDeposite(int p , int y , int R){ // r can be something like 0.03
    principal = p ;
    years = y ;
    intrestRate = float(R)/100 ;
    returnValue = principal ;
    for(int i = 0 ; i < years ; i++){
        returnValue = returnValue * (1 + intrestRate);
    };
};

void BankDeposite :: show(){
    cout << "Your " << principal << " Rupess , will be " << returnValue << " Rupess after " << years << " years ." << endl ;
}


int main(){
    BankDeposite cash_1 , cash_2 ;
    int p ,y ,R;
    float r ;

    cout << "Enter the value of p,y,r : " << endl ;
    cin >> p >> y >> r ;
    
    cash_1 = BankDeposite(p,y,r);
    cash_1.show();
    
    cout << "Enter the value p,y,R : " << endl ;
    cin >> p >> y >> R ;

    cash_2 = BankDeposite(p,y,R);
    cash_2.show();
     
    return 0 ;
}