/*
 * constants.h
 *
 *  Created on: 01 Nov,2018
 *      Author: antec
 */

#ifndef CONSTANTS_H_
#define CONSTANTS_H_

#include <string>
using namespace std;

//event names
const string nameMap[] = { "Opening", "Soccer 1", "Soccer 2", "Soccer 3",
		"Track and Field 1", "Track and Field 2", "Track and Field 3",
		"Track and Field 4", "Swimming 1", "Swimming 2", "Gymnastics 1",
		"Gymnastics 2", "Basketball 1", "Basketball 2", "Closing" };
//event prices
const int eventPriceMap[] = { 2000, 80, 160, 500, 80, 100, 120, 140, 100, 100, 60, 100,
		150, 300, 800 };

//event days
const int eventDateMap[] = { 0, 3, 6, 9, 1, 2, 3, 4, 5, 6, 7, 8, 5, 7, 9 };

//not needed yet
const int eventQuota[] = {60, 47, 30, 22, 50, 52, 42, 25, 37, 20, 43, 34, 35, 30, 40};

//star levels increase
const int hotelPriceMap[] = {160, 210, 320};

//not need yet
const int hotelQuota[] ={20, 25, 30};// per day

//maximum amount of events a client can request
const int MAXEVENTS = 10;

const int MAXREQUESTS = 150;

const int NUMBEROFEVENTS = 15;

const int NUMBEROFDAYS = 10;





#endif /* CONSTANTS_H_ */
