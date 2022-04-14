//This is the video class
#pragma once
#include <iostream>
#include <cstring>
using namespace std;

//constants
const int MAXCHAR = 101;
const int CAP = 20;

//class Video
class Video
{
    //private data members
    private:
        char title[MAXCHAR];
        int year;
    public:
        //default constructor
        Video();
        //constructor with parameters
        Video(const char tempTitle[], int tempYear);
		//destructor (we will learn about this next time)
		~Video();
        //member functions
        //accessor functions
        const char * getTitle();
        int getYear();
        //mutator functions
        void setTitle(const char newTitle[]);
        void setYear(int newYear);
        //print function
        void printVideo() const;
        bool isEqualYear(Video aVideo);
};

