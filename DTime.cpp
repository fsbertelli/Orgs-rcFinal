#include <ctime>
#include <iostream>  
#pragma warning(disable : 4996)
using namespace std;

void printDateTime() {
	time_t now = time(0);
	char* dt = ctime(&now);
	dt[strlen(dt) - 1] = '\0';
	cout << "\nLast login: " << dt << " from 127.0.0.1" << endl;
}
