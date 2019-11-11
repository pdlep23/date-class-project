#include "date.h"
#include <iostream>
Date::Date()// default date info
{
	month = 9;
	day = 1;
	year = 2018;
}

void Date::setDate(int m, int d, int y)//set date, month, day and year
{
	if (m >= 1 && m <= 12)//month cannot be less than 1 or more than 12
	{
		if (d >= 1 && d <= 31)//day cannot be less than 1 or more than 31
		{
			if (y >= 1900 && y <= 2018)//year cannot be less than 1900 and more than 2018
			{
				month = m;
				day = d;
				year = y;
			}
		}
	}
}

void Date::printDate()//print entered date or default date
{
	std::cout << month << '/' << day << '/' << year << std::endl;
}
