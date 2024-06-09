#include<iostream>
#include"Task5-Header.h"
using namespace std;
int main()
{
	int size=1;
	float* ptr=new float[size] ;

	cout << "Enter the numbers: " << endl;
	int i = 0;
	do{
		
		cin >> *(ptr+i);
		

		
		i++;

	} while (*(ptr + i-1) != -1);

	size = i;
	
	
	float temp = 0;

	for (i = 0; i < size; i++)
	{

		for (int j = 0; j < size - 1 - i; j++)
			if (*(ptr+j) > *(ptr+j + 1))
			{
				temp = *(ptr+j);
				*(ptr + j) = *(ptr + j+1);
				*(ptr + j+1) = temp;

			}

	}
	

	hist(ptr,size );









}