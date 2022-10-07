/*
 * Package.h
 *
 *  Created on: 01 Nov,2018
 *      Author: antec
 */

#ifndef PACKAGE_H_
#define PACKAGE_H_

#include <vector>
#include <iomanip>
#include <iostream>
#include "constants.h"
#include "TravelAgent.h"
#include "Ticket.h"
using namespace std;

//specifies the travel package
class Package
{
private:
	//contains two air tickets, hotel vouchers for each day, event tickets as data members
	//validate the package based on the budget
    //other is to get stuff to work with it
    //works on each individual client

public:
	Package();
	bool validatePackage();
	bool getPackage();
	int hotelCost();
    int flightCost();
    int eventCost();


};
/*
//works out the cost of the packages
int Package::hotelCost()
{
	HotelVoucher data1;
	ClientRequest data;

	int hotelCost;
	int voucherCost;

	int numOfVouchers = data.latestEventDate() - data.earlistEventDate();

	//calculate price for hotel rooms, still have to implement discount
	    int i;

	    if (data.ClientHotel[i] == 3)
        voucherCost = hotelPriceMap[0];

	    if ( data.ClientHotel[i] == 4)
	    voucherCost = hotelPriceMap[1];

	    if (data.clientHotel[i] == 5)
	    voucherCost = hotelPriceMap[2];

        hotelCost = (  numOfVouchers* voucherCost * data1.HotelDiscount() );

	return hotelCost;
}

int Package::flightCost()
{
	FlightTicket data;

    double ticketCost;

    ticketCost = 2000 * data.flyInDiscount() + 2000 * data.flyOutDiscount();

    return ticketCost;
}

//calculates the total cost of all events
int Package::eventCost()
{
	 TracelAgent data;

     int eventCost;
     int currentCost;

       for( int i = 0; i < MAXEVENTS; i++)
       {
    	   int event = data.clientEvents[i];
    	   switch (event )
    	   {
    	   case 0 :
    		   currentCost = eventPriceMap[0];
    		   break;

    	   case 1 :
    		   currentCost = eventPriceMap[1];
    		   break;

    	   case 2 :
    		   currentCost = eventPriceMap[2];
    		   break;

    	   case 3 :
    		   currentCost = eventPriceMap[3];
    		   break;

    	   case 4:
    		   currentCost = eventPriceMap[4];
    		   break;

    	   case 5:
    		   currentCost = eventPriceMap[5];
    		   break;

    	   case 6:
    		   currentCost = eventPriceMap[6];
    		   break;

    	   case 7:
    		   currentCost = eventPriceMap[7];
    		   break;

    	   case 8:
    	       currentCost = eventPriceMap[8];
    	       break;

    	   case 9:
    		   currentCost = eventPriceMap[9];
    		   break;

    	   case 10:
    		   currentCost = eventPriceMap[10];
    		   break;

    	   case 11:
    		   currentCost = eventPriceMap[11];
    		   break;


    	   case 12:
    		   currentCost = eventPriceMap[12];
    		   break;

    	   case 13:
    		   currentCost = eventPriceMap[13];
    		   break;

    	   case 14:
    		   currentCost = eventPriceMap[14];
    		   break;

    	   case 15:
    		   currentCost = eventPriceMap[15];
    		   break;
    	   }

            eventCost = eventCost + currentCost;

       }

     return eventCost;
}
*/

/*
//checks if a client package is valid
bool Package::validatePackage()
{
	ClientRequest data;

		//checks the budget
		unsigned int Sum = flightCost() + hotelCost() + eventCost();


		if (data.clientBudget[i] <=  Sum)
		{
             return false;
		}


		//checks if date range is valid
		int earlistDate = data.earlistEventDate();
		int latestDate = data.latestEventDate();

		if ( earlistDate > latestDate )
		{
             return false;
		}

		//check if the event are valid

		if ( !(data.clientEvents[i] == (0 || 1 || 2 || 3 || || 5 || 6 || 7 || 8 || 9 || 10 || 11 || 12 || 13 || 14 || 15)))
		{
			return false;
		}


        return true;
}
*/


#endif /* PACKAGE_H_ */
