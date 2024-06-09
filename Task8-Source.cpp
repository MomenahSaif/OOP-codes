#include<iostream>
#include"Task8-Header.h"
using namespace std;
int main()
{
	int size1, size2,size3;

	cout << "Enter the size of array:";
	cin >> size1;

	cout << "Enter the size of array:";
	cin >> size2;

	size3 = size1 * size2;

	int* ptr1 = new int[size1];
	int* ptr2 = new int[size2];
	int* ptr3 = new int[size3];

	cout << "Enter the values for first array in sorted oder:" ;
	for (int i = 0; i < size1; i++)
		cin >> *(ptr1 + i);

	cout << "Enter the values for second array in sorted oder:";
	for (int i = 0; i < size2; i++)
		cin >> *(ptr2 + i);

	int i = 0, j = 0, k = 0;
	
	
	ptr3=MergeArrayRecursively(ptr1, size1, ptr2, size2, ptr3, i, j, k);

	cout << "The third array will be: ";
	for (int i = 0; i < 11; i++)
		cout << *(ptr3 + i);


	
}