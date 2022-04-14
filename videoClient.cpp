#include <iostream>
#include <cstring>
using namespace std;
#include "video.h"

//client code.
int main()
{
    //declare 2 pointers for 2 video objects.
    Video *aVideo, *bVideo;
	//declare a pointer for a list of videos.
	Video *listVideos;
    //create 2 video objects from different constructors.
	aVideo = new Video();
	bVideo = new Video("Happy Feet", 2010);
	aVideo->printVideo();
	bVideo->printVideo();
	//allocate memory for the list object with 5 objects
	listVideos = new Video[5];
	listVideos[0] = *aVideo;
	listVideos[1] = *bVideo;
	//print the list
	cout << endl << endl;
	for(int i = 0; i < 5; i++)
	{
		listVideos[i].printVideo();
	}
	//delete the 2 single objects
	delete aVideo;
	delete bVideo;
	//list the array of objects
	delete [] listVideos;

	return 0;
}

