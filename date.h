#pragma once
class Date
{
private://private data in the class
	int month;
	int day;
	int year;
public://public methods
	Date();
	
	void setDate(int m, int d, int y);//set the date
	void printDate();//print the date
};
