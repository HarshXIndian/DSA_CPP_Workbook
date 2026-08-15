// Namespace by Neso Academy || Playlist video : 7

// Without namespace :
// #include<iostream>
// int main(){
//     std::cout << "Enter a Number : " << std::endl ;
//     // std:: => standard libraries 
//     // std::cout => mean that the cout belongs to standard libraries 
//     // std::endl => mean that endl is belongs to standard libraries 
//     int n1 ;
//     std::cin >> n1 ;
//     // std::cin => mean that cin is belongs to std 
//     std::cout << "You Entered The Number : " << n1 ;
//     return 0 ;
// }

// With namespace::name : i.e. std::cout .
// #include<iostream>
// using std::cout ;
//     // now we don't have to mention the std::cout again and again.
// int main(){
//     cout << "Enter a Number : " << std::endl ;
//     int n1 ;
//     std::cin >> n1 ;
//     // std::cin , std::endl => is mentioned because we don't declare them as cout !
//     std::cout << "You Entered The Number : " << n1 ;
//     return 0 ;
// }

// With namespace::name :
// #include<iostream>
// using std::cout ;
// using std::endl ;
// using std::cin ;
// int main(){
//     cout << "Enter a Number : " << endl ;
//     int n1 ;
//     cin >> n1 ;
//     cout << "You Entered The Number : " << n1 ;
//     return 0 ;
// }

// Problem => We have to specify for each and every name that we use , which is a namespace , now if there are another things that we want to use , we have to again mention them .
// Solution => In Order to solve that we can use something known as the "using namespace std ;"

// With Namespace std :
#include<iostream>
using namespace std ;
int main(){
    cout << "Enter a Number : " << endl ;
    int n1 ;
    cin >> n1 ;
    cout << "You Entered a Number : " << n1 ;
    return 0;
}