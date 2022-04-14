//This file has the implementation for video.h
#include "video.h"

//implementation for the Video Class
Video::Video()
{
    strcpy(title, "No title");
    year = 0;
}

Video::Video(const char tempTitle[], int tempYear)
{
    strcpy(title, tempTitle);
    year = tempYear;
}
// We will learn about this next time
Video::~Video() {
}
//accessor functions
const char * Video::getTitle()
{
    return title;
}

int Video::getYear()
{
    return year;
}

//mutator functions
void Video::setTitle(const char newTitle[])
{
    strcpy(title, newTitle);
}

void Video::setYear(int newYear)
{
    year = newYear;
}

//print function
void Video::printVideo() const
{
    cout << title << ';' << year << endl;
}

//bool isEqualYear function
//checks to see if the current video object's year is equal to the year of the passed video
//if same, then it returns true, else returns false
//takes one video object as a parameter
bool Video::isEqualYear(Video aVideo)
{
    if(year == aVideo.year)
    {
        return true;
    }
    else
    {
        return false;
    }
}

