#include<iostream>
#include"Task4-Header.h"
using namespace std;
int main()
{
	int size1 = 0,size2=0,size3=0;

	int* ptr1=new int[size1];
	int* ptr2 = new int[size2];
	int* ptr3 = new int[size3];

	cout << "Enter the size of array:";
	cin >> size1;

	cout << "Enter the size of array:";
	cin >> size2;

	size3=13;
	
	cout << "Enter the values of array:";
		for(int i=0;i<size1;i++)
		{
			cin >> *(ptr1 + i);
		}

    cout << "Enter the values of array:";
		for (int i = 0; i < size2; i++)
		{
			cin >> *(ptr2 + i);
		}

		*ptr3=merge(ptr1, ptr2);

		for (int i = 0; i < size3; i++)
		{
			cout<< *(ptr3 + i);
		}



}