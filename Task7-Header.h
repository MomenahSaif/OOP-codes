#pragma once
#include"iostream"
using namespace std;
void Drawline1(int times, char sy)
{
	if (times == 0)
		return;

	cout << sy ;


	Drawline1(times - 1, sy);

}

void Drawline2(int times)
{
	if (times == 0)
		return;
	
	Drawline1(times - 1, ' ');
	cout << "*";
	cout << endl;
	Drawline2(times - 1);
}




