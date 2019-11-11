#include <iostream>
using namespace std;
#include "date.h"
int main()
{
	Date dl;//create instance of the class
	int m, d, y;//establish the month, day and year
	cout << "Enter month, day and year separated by spaces: ";
	cin >> m >> d >> y;//enter the info
	dl.setDate(m, d, y);//set the date
	dl.printDate();//print the date
	
	return 0;
}
