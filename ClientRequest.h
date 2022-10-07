/*
 * ClientRequest.h
 *
 *  Created on: 01 Nov,2018
 *      Author: antec
 */

#ifndef CLIENTREQUEST_H_
#define CLIENTREQUEST_H_


#include "constants.h"
#include "TravelAgent.h"
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

class ClientRequest {
public:
	int cId;
	int hotelType;
	bool events[ NUMBEROFEVENTS];
	int budget;

	//sets the value empty by default
	ClientRequest()
	{
		cId = -1;
		hotelType = -1;
		budget = -1;
		for (int i = 0; i < NUMBEROFEVENTS; i++)
			events[i] = false;
	}


	int earlistEventDate();
	int latestEventDate();
	void print();
};
    /*
	int ClientRequest::earlistEventDate()
	{
//work out earliest event date based of the  selected events, loop through list of events and access the earliest date
		TravelAgent data;

		int lowestEventDate = NUMBEROFDAYS;

		for ( int i = 0; i < data.ClientEvents[i].Size(); i++)
		{
             if ( lowestEventDate > data.ClientEvents[i] )
             {
                   lowestEventDate = data.ClientEvents[i];
             }
		}

		return lowestEventDate;
    }

	int ClientRequest::latestEventDate()
	{
//work out the latest event date based of the selected events, loop through list of events and access the latest date
		TravelAgent data;

		int highestEventDate = 0;

        for ( int i=0; i < data.ClientEvents[i]; i++)
        {
        	if ( highestEventDate < data.ClientEvents[i] )
        	{
        			highestEventDate = data.ClientEvents[i];
        	}
        }

		return highestEventDate;
    }
*/
	void ClientRequest::print() {
		cout << "Client " << cId << ":" << setw(8) << budget << setw(8) << hotelType;

		for (int i = 0; i < NUMBEROFEVENTS; i++) {
			if (events[i])
				cout << setw(8) << i;
		}
		cout << endl;
	}






#endif /* CLIENTREQUEST_H_ */
