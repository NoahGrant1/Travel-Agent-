/*
 * TravelAgent.h
 *
 *  Created on: 01 Nov,2018
 *      Author: antec
 */

#ifndef TRAVELAGENT_H_
#define TRAVELAGENT_H_

#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
#include <fstream>

#include "constants.h"
#include "ClientRequest.h"
#include "requestGenerator.h"
#include "Package.h"
using namespace std;


//takes trip details and acts like the driver for the main classes.
class TravelAgent
{
private:
	ifstream In;
	ifstream Out;
	vector <int> ClientHotel;
	vector <int> ClientBudget;
	vector <int> ClientEvents;

public:
	TravelAgent () {};
	void readRequests();
	void calculateProfit();
	void displayPackage();
	int driver();
	int getClientHotel( int i) {int Hotel = ClientHotel[i]; return Hotel;}
	int getClientBudget ( int i) {int Budget = ClientBudget[i]; return Budget;}
	//array of max event size
	int getClientEvents (int i) { return i;}


};


//reads from the files and saves them into the array, not functional
void TravelAgent::readRequests()
{
		//opening the file
	    cout << "client requests are being read " << endl;

		In.open ("clientRequests.txt");
		{
		    if (In.fail() )
	        {
		     cout << "the requests couldn't be booked" << endl;
		    }
		}

		//read the file and storing in array

		ifstream In("clientRequests.txt", ios::in);

	     while ( !(In.eof()) )
	     {

	    	 In >> ClientBudget.push_back( In);
	         In >> ClientHotel.push_back();

	          //need to work out to tell how to stop
	          for ( int j = 0; j < MAXEVENTS; j++)
	          {
	           In >> ClientEvents[next];
	          }

	          next ++;
	     }

	     In.close( );
	}
/*
//displays the valid packages
void TravelAgent::displayPackage()
{
	Package data;
	ClientRequest data1;

	//if package is valid then display it. make client number.
	//generate clientID, use validpackage as a function in this,
    for ( unsigned int i = 0; i < 100; i++)
    {
         if( data.validatePackage() == true )
         {
              cout << "the client number is: " << i << endl;
              cout << "the budget is: " <<  clientBudget[i] << endl; //budget
              cout << "the fly-in is: " <<  endl; //flyin date;
              cout << "the fly-out is: " <<  endl;
              cout << " the events are: " <<  endl; //list events by name
              cout << " totalCost is: " << endl; //the total cost

         }
    }
}
*/

int TravelAgent::driver()
{
	ClientRequest data1;
	requestGenerator data2;

	string operation;

	cout << "would you like to read from file, use test data ,or generate random client data? (read/generate)" << endl;
	cin >> operation;

	//reads from the client request file
	if ( operation == "read")
	{
		readRequests();
		//print
	}
	//generates the random data
	else if ( operation == "generate")
	{
        data2.generateData();
        data2.displayData();
	}
	else
	{
		cout << "invalid input" << endl;
	}

	return 0;
}




#endif /* TRAVELAGENT_H_ */
