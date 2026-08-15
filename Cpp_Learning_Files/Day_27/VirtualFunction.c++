// Date: 29/02/2024
// Tutorial #57
// Virtual Function example !
#include<iostream>
#include<cstring>
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
        // virtual function 'display'
        virtual void display(){cout << "Error 404 :(" << endl ;};
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
        // void display(){
        //     cout << "This is Amazing Text video with Title '" << title << "'" << endl ;
        //     cout << "Rating of the Text video is " << rating << " out of 5 stars !" << endl ;
        //     cout << "Words in this Text video is : "<< wordsCount << " Words ."<< endl ;
        // }
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

// Rules For Virtual Functions :
// 1. they can not be static 
// 2. they are accessed by objects pointers
// 3. virtual function can be a friend of another class 
// 4. a virtual fucntion in base class might not be used .
// 5. if a virtual function define in the base class, there is no necsssity of redefining it in the derived class :
/* 5. ager hum kisi ek derived class ke display function ko comment kar dete hai or hata dete hai to call ke time compiler 
ko uska display() function nhi milega jisse compiler apne aap hi base class ka display() fucntion call kar dega ! */  