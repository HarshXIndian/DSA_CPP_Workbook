// Abstract Base Class & Pure Virtual Function in C++ By Code With Harry !
// Tutorial #58

// Abstract Base Class : 
// When we create a Base Class with intention that we definatily creates its derived classes,
// & functions of Base class will definatily redeclared further in derived classes,
// so those types of Base class is called 'Abstract Class' 
// # In Abstract Base Class we have to declare at least one function class which is definatily will override by derived classes. 
// # Abstract class mean that it will be mainly not used for creating objects instead it used to create derived classes using its pointers !
#include<iostream>
using namespace std;

class Video{
    protected:
    string title ;
    float rating ;
    public:
        // Video Constructor !
        Video(string s,float r){
            title = s ;
            rating = r ;
        };
        // pure virtual function 'display'
        virtual void display() = 0 ; // its do nothing --> Pure Virtual Function !
};

class video_length : public Video{
    float videoLength ;
    public: 
        // Constructor for derived class + call to base class constructor as well !
        video_length(string s,float r,float vl) : Video(s,r){
            videoLength = vl ;
        };
        void display(){
            cout << "This is Amazing video with Title '" << title << "'" << endl ;
            cout << "Rating of the video is " << rating << " out of 5 stars !" << endl ;
            cout << "Length of the video is : "<< videoLength << " minutes ."<< endl ;
        }
};

class video_wordsCount : public Video{
    int wordsCount ;
    public: 
        // Constructor for derived class + call to base class constructor as well !
        video_wordsCount(string s,float r,int wc) : Video(s,r){
            wordsCount = wc ;
        };
        void display(){
            cout << "This is Amazing Text video with Title '" << title << "'" << endl ;
            cout << "Rating of the Text video is " << rating << " out of 5 stars !" << endl ;
            cout << "Words in this Text video is : "<< wordsCount << " Words ."<< endl ;
        }
};

int main(){
    string title ;
    float rating,videoLength ;
    int wordsCount ;

    // For Video_length Class Object : set values !
    title = "Virtual Fucntion Example By Code with Harry !" ;
    videoLength = 28.45 ;
    rating = 3.7 ;
    // Create a object of Video_length class with values define below !
    video_length Cwh(title,rating,videoLength);
    // Cwh.display();


    // For Video_wordsCount Class Object : set values !
    title = "Abstract Class By Apna Collage !" ;
    wordsCount = 471 ;
    rating = 3.2 ;
    // Create a object of Video_wordsCount class with values define below !
    video_wordsCount apnaCollage(title,rating,wordsCount);
    // apnaCollage.display();

    // create two object's pointers of base class 'Video' !
    Video* videos[2] ;
    // assigning objects to pointer , which is pointed by pointers from now !
    videos[0] = &Cwh ;
    videos[1] = &apnaCollage ;

    // Now we can access the respective functions of the pointed objects by base class pointer as "base class 'display' function is virtual !"
    videos[0] -> display();
    videos[1] -> display();
    
    return 0;
}
