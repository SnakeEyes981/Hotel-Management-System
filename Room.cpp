#include<iostream>
#include<iostream>
#include<fstream>
#include<iostream>
#include<string>
#include "Room.h"
using namespace std;


		// Default Constructor
		Room::Room()
		{}
		Room::Room(int _roomNumber, string _roomType , int _rentOfRoom, bool _isAvailable):
		roomNumber(_roomNumber), roomType(_roomType), rentOfRoom(_rentOfRoom), isAvailable(_isAvailable)
		{}
		// Parameterized Constructor
		void Room::setRoomNumber(int _roomNumber){
			roomNumber=_roomNumber;
		}
		int Room::getRoomNumber(){
			return roomNumber;
		}
		void Room::setRoomType(string _roomType){
			roomType=_roomType;
		}
		string Room::getRoomType(){
			return roomType;
		}
		void Room::setRentOfRoom(int _rentOfRoom){
			rentOfRoom=_rentOfRoom;
		}
		int Room::getRentOfRoom(){
			return rentOfRoom;
		}
