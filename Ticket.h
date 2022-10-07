/*
 * Ticket.h
 *
 *  Created on: 01 Nov,2018
 *      Author: antec
 */

#ifndef TICKET_H_
#define TICKET_H_

#include <string>
#include "ClientRequest.h"
using namespace std;

//details of the ticket
class Ticket
{
protected:
     string ticketType;
     int date;
     int fullPrice;
     double discount;

public:

	//Ticket(int date, int fullPrice ) { discount = 0.0; };

	int getDate()
	{
		return date;
	}

	double getTicketPrice()
	{
		return (1.0-discount) * fullPrice;
	}

	/*
	virtual void printTicket () = 0;

	virtual ~Ticket() {
	}
	*/
};


class FlightTicket : protected Ticket
{
public:
	//bool variable for flyin and flyout

	//FlightTicket( int date, int fullprice) : Ticket( date, fullPrice) { discount = 0.0; };
	int flyInDiscount();
	int flyOutDiscount();
};
/*
//decrease the price the higher the day
int FlightTicket::flyInDiscount()
{
	ClientRequest data;

    date = data.latestEventDate();
	for ( int i  = 0; i < date; i++ )
	{
        discount = discount - (discount * 0.05);
	}
	return discount;
}

//increase the price the higher the day.
int FlightTicket::flyOutDiscount()
{
	ClientRequest data;

	int day = data.latestEventDate();

	for (int i = 0; i < day; i++)
	{
        discount = discount * 1.05;
	}


    return discount;
}
*/
class HotelVoucher : protected Ticket
{
public:
	//HotelVoucher( int date, int fullprice) : Ticket( date, fullPrice) { discount = 0.0; };
	int HotelDiscount();
private:
	int vaycancy;


};


//calculates the discount of the hotel vouchers
int HotelVoucher::HotelDiscount()
{
    //3 star hotel
	if ( vaycancy <= 20 )
		discount = 0.0;

	//4 star hotel
	if (vaycancy <= 25)
		discount = 20.0;

	//5 star hotel
	if (vaycancy <= 30)
		discount = 20.00 || 40.00;

	return discount;
}


class EventTicket : protected Ticket
{
public:
	//EventTicket( int date, int fullprice) : Ticket( date, fullPrice) { discount = 0.0; };
	//calculate discount dependongs on the day
	int eventquantity();
};

int EventTicket::eventquantity()
{

    return discount;
}




#endif /* TICKET_H_ */
