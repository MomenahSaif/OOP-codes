#include<iostream>
#include"Task2-Header.h"
using namespace std;
int main()
{
	int size = 10;
	int* ptr=new int[size];
	
	cout << "Enter 10 values of array:";

	for (int i = 0; i < 10; i++)
	{
		cin >> *(ptr + i);
	}

	cout<<"The differnece between maximum and minimum term is:"<< difference(ptr,size);


}