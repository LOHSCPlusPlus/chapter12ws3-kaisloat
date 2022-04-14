videoExample : video.o videoClient.o
	g++ -g video.o videoClient.o -o videoExample

videoClient.o : videoClient.cpp video.h
	g++ -g -c videoClient.cpp -o videoClient.o

video.o : video.cpp video.h
	g++ -g -c video.cpp -o video.o

