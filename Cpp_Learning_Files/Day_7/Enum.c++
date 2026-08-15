// Enumeration by Neso Academy :
#include<iostream>
using namespace std ;

// Def : An enumeration type is a user defined type which is used to assign names to 'Integral Constraints' because names are easier to handle in program .

// enum Point {
//     x,
//     y,
//     z
// } ;

// if we do not assign values to enum names then , automatically compiler will assign values to them starting from 0 .
int main(){
    // #1 Two or more names can have same values !
    enum Point {x = 0 , y = 0 , z = 0 };
    cout << x << " " << y << " " << z << endl ;

    // #2 We can assign values in any order . all unassigned names will get value as value of previous name+1 ;
    enum Point_2 {a = 2 , b = 34 , c , d = 0 } ;
    cout << a << " " << b << " " << c << " " << d << " " ;
    // Output shows 'c' value equals to 35 .

    // #3 Only integral values are allowed !
    // enum Point_3 { k = 55 , l = 57.5 , m = 0 } ; // l show error as it is not an integral value !
    // cout << k << " " << l << " " << m << endl ;

    // #4 All enum constant must be unique in their scope 
    // enum Points_3 { a = 23 , f = 2 , g = 6 } ;
    // above statement will show error as we redefine the 'a' in the scope of int main() !
    // cout << a << " " << f << " " << g << endl ;

    return 0 ;
}
