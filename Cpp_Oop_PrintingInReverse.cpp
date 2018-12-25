/*
This takes a user input array of integers and outputs 
the same array but the elements are in reverse.

e.g.:
Input: 12345
Output: 54321

Keyword: oop

Code written by: TAK'S JOSEPH REFUGIO
Code written on: Summer 2017
Code written for: For myself. Just practicing
*/

#include <iostream>
#define MAX_ARRAY_LENGTH 1000
using namespace std;

class Userarray
{
private:
	int arraySize;
	int anArray[MAX_ARRAY_LENGTH];
public:
	void promptUser(void);
	void printResults(void);
};
void Userarray::promptUser() {
	cin >> arraySize;
	for (int i = 0; i < arraySize; i++) { cin >> anArray[i]; }
}
void Userarray::printResults() {
	for (int j = arraySize-1; j>=0; j--) { cout << anArray[j] << " "; }
	cout << "\n";
}


int main(void)
{
	Userarray firstList;
	firstList.promptUser();
	firstList.printResults();
	return 0;
}