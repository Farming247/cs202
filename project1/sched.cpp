#include <iostream>
#include <iomanip>
#include <string>
#include "sched.h"

using namespace std;

// FUNCTION PROTOTYPES -- DO NOT CHANGE!

// sort() - sorts an array of floats returning sorted indices
// On return, indx[] is an array of indices such that data[indx[0]], 
// data[indx[1]], ..., data[indx[len-1]] is data[] in ascending order.
//
// Parameters
//    data[] - float array of data to be ordered
//    indx[] - int array, same length as data[], to hold indices
//    len - int specifying the length of data[] and indx[]

void sort(float data[], int indx[], int len);

// sched() - schedules events given start and end times, and indx[] from sort
// Returns number of events scheduled; on return, scheduled[] contains 
// indices of scheduled events (e.g. startTime[scheduled[0]] is the start
// time of the first schedled event).
//
// Parameters
//    startTime[] - float array of event start times
//    endTime[] - float array of event end times
//    indx[] - array of indices that orders the end times
//    scheduled[] - int array to hold indices of scheduled events
//    len - int specifying the length of the arrays
// Returns
//    int value specifying number of events scheduled

int sched(float startTime[], float endTime[], int indx[], int scheduled[], int len);

// printEvent() - prints an event to the console
// Converts float start and end times to hh:mm format and prints times
// along with description.  E.g. Study Session from 12.5 to 13.25 should
// print as "12:30 - 13:15 Study Session"
//
// Parameters
//    startTime - float event start time
//    endTime - float event end time
//    description - string event description

void printEvent(float startTime, float endTime, string description);

// MAIN PROGRAM - DO NOT CHANGE!

int main() {

  int indx[NUM_EVENTS];
  int scheduledEvents[NUM_EVENTS];
  int numSched;

  // Sort by event ending times
  sort(endTime, indx, NUM_EVENTS);
  
  // Call greedy scheduling algorithm
  numSched = sched(startTime, endTime, indx, scheduledEvents, NUM_EVENTS);

  // Display scheduled events
  for (int i = 0; i < numSched; i++)
    printEvent(startTime[scheduledEvents[i]], endTime[scheduledEvents[i]],
	       description[scheduledEvents[i]]);

  return 0;
}

//
// FUNCTION IMPLEMENTATIONS GO HERE
//  
/*void sort(float endTime,int indx,int NUM_EVENTS){
	float endT = endTime[0];
	for (int i = 1; i < NUM_EVENTS; i++) {
		if (endTime[i] > endT) {
			endT = endTime[i];
		}
	}
	return endT;
}
*/
void sort(endTime[indx[NUM_EVENTS-1]]){
	

}
