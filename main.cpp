#include<iostream>
#include<string>
#include<iomanip>
#include<fstream>
#include<cstdlib>
#include<Customer.h>
#include<Room.h>

using namespace std;

int main(){
	int ID;
	string cName, checkIn, checkOut;
	cout << "Please Enter Customer Name: " ;
	cin >> cName;
	cout << "Check In: " ;
	cin >> checkIn;
	cout << "Check Out: " ;
	cin >> checkOut;
	cout << "Enter Customer ID: " ;
	cin >> ID;
	fstream writeObject{"Data.txt", ios::in | ios::out | ios::binary};
	for(int i = 0; i < 10; i++){
		Customer c1;
		writeObject.write(reinterpret_cast<const char*>(&c1), sizeof(c1));
	}
//	Customer c2(cName, ID, checkIn, checkOut);
//	writeObject.write(reinterpret_cast<const char*>(&c2), sizeof(c2));
	system("cls");
	cout << "Record Saved!" << endl;
	writeObject.close();
	
	fstream readObject{"Data.txt", ios::in | ios::binary};
	Customer c3;
	cout << "Enter the ID of Record: " << endl;
	int sId;
	cin >> sId;
	while(readObject.read(reinterpret_cast<char*>(&c3), sizeof(c3))){
		if(c3.getCustomerID == sId){
			cout << "Enter New Name: " ;
			string temp;
			c3.setCustomerName(temp);
			long pos = -1 * sizeof(Customer);
			seekp(pos, ios::cur);
			readObject.write(reinterpret_cast<char*>(&c3), sizeof(c3)))
		}
	}
//	menu:
//	cout << "\n\n";
//	cout << setw(71) << setfill('~') << " Hotel Management System ";
//	cout << setw(49) << setfill('~') << "~~" << endl;
//	while(true){
//		cout << "MENU" << endl;
//		cout << "1: Show Available Rooms" << endl;
//		cout << "2: Book a Room" << endl;
//		cout << "3: Rooms Details" << endl;
//		cout << "4: Customers Details" << endl;
//		cout << "5: Delete a Booking" << endl;
//		cout << "6: Exit" << endl;
//		int choice;
//		cin >> choice;
//		if( choice == 1 ){
//			cout << c1.getCustomerName();
//			system("pause");
//			system("cls");
//			goto menu;
//		}
//		else if( choice == 2 ){
//			cout << "Book Room";
//			system("pause");
//			system("cls");
//			goto menu;
//		}
//		else if( choice == 3 ){
//			cout << "Booking";
//			system("pause");
//			system("cls");
//			goto menu;
//		}
//		else if( choice == 4 ){
//			cout << "Booking";
//			system("pause");
//			system("cls");
//			goto menu;
//		}
//		else if( choice == 5 ){
//			cout << "Booking";
//			system("pause");
//			system("cls");
//			goto menu;
//		}
//		else if( choice == 6 ){
//			break;
//			goto menu;
//		}
//		else{
//			cout << "Invalid Input Please Try Again!" << endl;
//			system("pause");
//			system("cls");
//			goto menu;
//		}
//	}
//	cout << "Thank You For Using!";

}
