#ifndef ROOM_H
#define ROOM_H

#include<iostream>
#include<fstream>
#include<string>

using namespace std;


class Room{
	int roomNumber;
	string roomType;
	int rentOfRoom;
	bool isAvailable;
	public:
		// Default Constructor
		Room();
		// Parameterized Constructor
		Room(int, string, int, bool);
		void setRoomNumber(int);
		int getRoomNumber();
		void setRoomType(string);
		string getRoomType();
		void setRentOfRoom(int);
		int getRentOfRoom();
};

#endif
