#include<iostream>
#include"Task7-Header.h"
using namespace std;
int main()
{
	int times;

	cout << "Enter a number: ";
	cin >> times;

	Drawline1(times,'*');
	cout << endl;
	Drawline2(times-1);
	Drawline1(times,'*');

}