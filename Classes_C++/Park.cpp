#include"Park.h"

Park::Park()
{
	New_Name ="Stryjskyj";
	New_Adress = "Lukasha_5";
	New_Bike_Way_Lenth = 1032;
	New_Ticket_Price = 10.3;
	New_Foundation_Age = 1990;
	New_Rating = 9;
	New_Lakes = 0;
}

Park::Park(string name, string adress, int bike_way_lenth, double ticket_price, int foundation_age, int rating, int lakes)  
{
	    New_Name = name;
		New_Adress = adress;
		New_Bike_Way_Lenth = bike_way_lenth;
		New_Ticket_Price = ticket_price;
		New_Foundation_Age = foundation_age;
		New_Rating = rating;
		New_Lakes = lakes;
}

Park::~Park() 
{

}

string Park::getName() const 
{
	return New_Name;
}

string Park::getAdress() const
{
	return New_Adress;
}

int Park::getBikeWayLenth() const 
{
	return New_Bike_Way_Lenth;
}

double Park::getTicketPrice() const 
{
	return New_Ticket_Price;
}

int Park::getFoundationAge() const 
{
	return New_Foundation_Age;
}

int Park::getRating() const 
{
	return New_Rating;
}

int Park::getLakes() const
{
	return New_Lakes;
}

void Park::setName(string name)
{
	 New_Name = name;
}

void Park::setAdress(string adress) 
{
	 New_Adress = adress;
}

void Park::setBikeWayLenth(int lenth) 
{
     New_Bike_Way_Lenth = lenth;
}

void Park::setTicketPrice(double price) 
{
	 New_Ticket_Price = price;
}

void Park::setFoundationAge(int age) 
{
	 New_Foundation_Age = age;
}

void Park::setRating(int rating) 
{
	 New_Rating = rating;
}

void Park::setLakes(int lakes) 
{
	 New_Lakes = lakes;
}