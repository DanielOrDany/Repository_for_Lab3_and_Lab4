#pragma once
#include<iostream>
#include<string>
using namespace std;

#ifndef PARK_H
#define PARK_H

class Park 
{
    public:

	    string New_Name;
		int New_Foundation_Age;
	
		Park();

		Park(string name,
		string adress,
		int bike_way_lenth,
		double ticket_price,
		int foundation_age,
		int rating,
		int lakes);

		~Park();
	
		string getName() const;
		string getAdress() const;
		int getBikeWayLenth() const;
		double getTicketPrice() const;
		int getFoundationAge() const;
		int getRating() const;
		int getLakes() const;

		void setName(string);
		void setAdress(string);
		void setBikeWayLenth(int);
		void setTicketPrice(double);
		void setFoundationAge(int);
		void setRating(int);
		void setLakes(int);

    protected:

		int New_Rating;
		int New_Lakes;

    private:

		string New_Adress;
		int New_Bike_Way_Lenth;
		double New_Ticket_Price;
};

#endif PARK_H