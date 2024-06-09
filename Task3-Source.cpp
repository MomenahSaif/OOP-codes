#include<iostream>
#include"Task3-Header.h"
using namespace std;
int main()
{

	char* ptr = new char[10];
	char alphbet;

	cout << "Enetr 10 alphbets or a sentence:";
	for (int i = 0; i < 10; i++)
	{
		cin >> *(ptr + i);
	}

	cout << "Now enter a alphbet to search";
	cin >> alphbet;

	cout << "Is alphbet present in the given array" << if_exists(ptr, alphbet);

}