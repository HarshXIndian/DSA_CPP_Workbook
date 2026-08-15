// bitwise Operators by Collage Wallah , v - 4 
#include<iostream>
using namespace std ;

int main(){
    // bitwise operators work on bits !

    int let = 10 ; // 1010 in binary

    // 1. Bitwise Complement (~) : complement bits [ 0 to 1 , 1 to 0 ] ,
    // ie. ~ 1011 => 0100 .

    cout << "(~let) is : " << (~let) << endl ; // Output : -11 

    // << left shift : shift every bit postition to left by provided number and new place change with 0 , after shifted by one it gives multiplied by 2 or (2)^shifted number
    // ie. 0101  << 1 => 1010 , 0101 << 2 => 0100 .

    cout << "(let << 1) is : " << (let << 1) << endl ; // Multiplied by 2 , OUtput : 20 .

    // >> right shift : shift every bit position to right and new place change with 0 , after shifted by one it gives divided by 2 or (2)^shifted number
    // ie. 0100 >> 1 => 0010 .

    cout << "(let >> 1) is : " << (let >> 1) << endl ; // Divided by 2 , OUtput : 5 .

    // | Bitwise OR : true = 1 , false = 0 .
    // Need to be atleast one condition be true !
    // 1 | 1 => 1
    // 1 | 0 => 1
    // 0 | 1 => 1
    // 0 | 0 => 0

    cout << "\nIn Bitwise OR (|) Operator : " << endl ;
    cout << "(true | true) Give value : " << (true | true) << endl ;   // 1
    cout << "(true | false) Give value : " <<(true | false) << endl ;  // 1
    cout << "(false | true) Give value : " <<(false | true) << endl ;  // 1
    cout << "(false | false) Give value : " <<(false | false) << endl ; // 0

    // & Bitwise AND : true = 1 , false = 0 .
    // Need to be all condition will be true !
    // 1 & 1 => 1
    // 1 & 0 => 0
    // 0 & 1 => 0
    // 0 & 0 => 0

    cout << "\nIn Bitwise AND (&) Operator : " << endl ;
    cout << "(true & true) Give value : " << (true & true) << endl ;   // 1
    cout << "(true & false) Give value : " <<(true & false) << endl ;  // 0
    cout << "(false & true) Give value : " <<(false & true) << endl ;  // 0
    cout << "(false & false) Give value : " <<(false & false) << endl ; // 0

    // ^ Bitwise Exclusive OR : true = 1 , false = 0 .
    // Need to be both conditions are be Different !
    // 1 ^ 1 => 0
    // 1 ^ 0 => 1
    // 0 ^ 1 => 1
    // 0 ^ 0 => 0

    cout << "\nIn Bitwise Execlusive OR (^) Operator : " << endl ;
    cout << "(true ^ true) Give value : " << (true ^ true) << endl ;   // 0
    cout << "(true ^ false) Give value : " <<(true ^ false) << endl ;  // 1
    cout << "(false ^ true) Give value : " <<(false ^ true) << endl ;  // 1
    cout << "(false ^ false) Give value : " <<(false ^ false) << endl ; // 0

    // Misc Operators

    // Sizeof Operator 
    // it show the actual size of variable data types in memory , like for int a ; , cout << sizeof(a) ; => Output : 4.

    cout << "\nsizeof(let) Gives value : " << sizeof(let) << endl ; // Output : 4

    // Condition ? Expression_1 : Expression_2 ;
    // it cheack a condition if that is true so expression_1 will get executed otherwise in case of false expression_2 will execute .

    (let == 9)?(let = 2):(let = 3); // 3
    cout << "\n(let == 9)?(let = 2):(let = 3) Expression Gives : " << let << endl ; // 3

    // Comma Operator (,) 
    // used to seprate two similar declaration , ie. instead of int x ; int y = 5 ; we can use : int x,y = 5 ;
    
    // int x ;
    // int y = 5 ;
    int x,y = 5 ;

    // Advance Operators :

    // Dot (.) and arrow (->) Operators 
    // . operator used for classes , -> operator used for pointers !

    // Casting Operator : cast a varibale into another !

    // & Address Operator : gives address of variable in memory 

    cout << "\n&let Gives Address : " << &let << endl ; // address of let in memory 

    // * Pointer Operator : for creating a pointer , or gives value store on any address in memory 

    int *ptr ;
    ptr = &let ;
    cout << "\n*ptr is : " << *ptr << endl ; // 3
    cout << "\n*(&let) Gives value, prsent on Address &let Which is : " << *(&let) << endl ; // 3

    // Unary Operators : already disccused in cwh_1.c++ program

    // + unary plus 
    // - unary minus
    // ++ increment operator 
    // -- decrement operator 
    // ! complement operator 

    return 0; 
}