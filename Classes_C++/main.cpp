#include<iostream>
#include<string>
#include"Park.h"
using namespace std;

static int countNumber;
#define dimension 3

int main() 
{
	string Name[dimension], Adress[dimension];
	int Bike_Way_Lenth[dimension], Foundation_Age[dimension], Rating[dimension], Lakes[dimension];
	double Ticket_Price[dimension];
	
	for (countNumber = 0; countNumber <= 2; countNumber++)
	{
		cout << "Enter park Name: ";
		cin >> Name[countNumber];
		cout << "Enter park Adress: ";
		cin >> Adress[countNumber];
		cout << "Enter park bike way in meters: ";
		cin >>Bike_Way_Lenth[countNumber];
		cout << "Enter park ticket price: ";
		cin >> Ticket_Price[countNumber];
		cout << "Enter park foundation age: ";
		cin >> Foundation_Age[countNumber];
		cout << "Enter park Rating: ";
		cin >> Rating[countNumber];
		cout << "Enter number of park Lakes: ";
		cin >> Lakes[countNumber];
		cout << endl;
	}
	
	Park Park1(Name[0],Adress[0],Bike_Way_Lenth[0],Ticket_Price[0],Foundation_Age[0],Rating[0],Lakes[0]);
	cout << "Name: " << Park1.getName() << endl;
	cout << "Adress: "<< Park1.getAdress()<<endl;
	cout << "Bike way in meters: "<< Park1.getBikeWayLenth()<<endl;
	cout << "Ticket price: "<< Park1.getTicketPrice()<<endl;
	cout << "Foundation age: " << Park1.getFoundationAge() << endl;
	cout << "Your Rating: " << Park1.getRating() << endl;
	cout << "Number of Lakes: " << Park1.getLakes() << endl<<endl;

	Park Park2(Name[1], Adress[1],Bike_Way_Lenth[1], Ticket_Price[1], Foundation_Age[1], Rating[1], Lakes[1]);
	cout << "Name: " << Park2.getName() << endl;
	cout << "Adress: " << Park2.getAdress() << endl;
	cout << "Bike way in meters: " << Park2.getBikeWayLenth() << endl;
	cout << "Ticket price: " << Park2.getTicketPrice() << endl;
	cout << "Foundation age: " << Park2.getFoundationAge() << endl;
	cout << "Your Rating: " << Park2.getRating() << endl;
	cout << "Number of Lakes: " << Park2.getLakes() << endl<<endl;

	Park Park3(Name[2], Adress[2],Bike_Way_Lenth[2], Ticket_Price[2], Foundation_Age[2], Rating[2], Lakes[2]);
	cout << "Name: " << Park3.getName() << endl;
	cout << "Adress: " << Park3.getAdress() << endl;
	cout << "Bike way in meters: " << Park3.getBikeWayLenth() << endl;
	cout << "Ticket price: " << Park3.getTicketPrice() << endl;
	cout << "Foundation age: " << Park3.getFoundationAge() << endl;
	cout << "Your Rating: " << Park3.getRating() << endl;
	cout << "Number of Lakes: " << Park3.getLakes() << endl<<endl;

	system("pause");

	return 0;
}