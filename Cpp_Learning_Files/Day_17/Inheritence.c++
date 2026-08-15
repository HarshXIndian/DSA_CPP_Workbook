// Inheritence By Code With Harry !
// Date : 17/02/2024
// Tutorial #36 

// ---------> Overiview Of Inheritance !
// Reausability is a very important feature of OOPs
// In C++ we can reuse a class and additional features to it 
// Reusing classes saves time and money 
// Reusing already tested and debugged class will save a lot of efforts of developing and debugging the same thing again .

// ---------> What is Inheritance in C++ !
// The concept of Reusability in C++ is supported using Inheritance .
// We can reuse the properties of an existing class by inherititing from it 
// The existing class is called as the 'Base Class'
// The new class which is inherited is called as the 'Derived Class'
// Reusing classes saves time and money 
// There are different types of inheritances in C++

// ---------> Forms of Inheritance In C++ !
// 1. Single Inheritance .
// 2. Multiple Inheritance .
// 3. Hierarical Inheritance .
// 4. Multilevel Inheritance .
// 5. Hybrid Inheritance .

// ---------> Single Inheritance :
// A derived class with only one Base Class .
// Employee --> Programmer (programmer is derived from Employee)
// now programmer is equals to Employee + more !

// ---------> Multiple Inheritance :
// A derived class with more than one Base Class .
// Employee --> Programmer 
// Assistant --> Programmer 

// ---------> Hierarchical Inheritance :
// Serval derived classes from one Base Class .
// Employee --> Programmer 
// Employee --> Manager  

// ---------> Multilevel Inheritance : 
// Deriving a class from already derived class . 
// Animal --> Mammals --> Humans 
// Here Mammals = animals + more ! 
// and Humans = Mammals + more ! 

// ---------> Hybrid Inheritance : 
// Hybrid Inheritance is a combination of 'Multiple' and 'Multilevel' Inheritances . 
// A Class is derived from two classes as in multiple Inheritance . 
// However, One of the parent classes is not a base class. 
// A --> B --> D !
// A --> C --> D !