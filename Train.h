#pragma once
#include<string>
#include <iostream>
using namespace std;
class Train
{
	string station;
	string number;
	string depacture_time;
public:
	Train();
	Train(string station, string number, string depacture_time);

	string getStation()const;
	string getNumber()const;
	string getDepacture()const;
	void setDepacture(string time);


};