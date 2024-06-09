#pragma once
#include<iostream>

using namespace std;
int  *merge(int *arr1,int * arr2)
{
	int* arr3 = new int[13];
	int i=0, j = 0;
	for (int k = 0; k<=13; k++)
	{
		if ((i == 5) || (j == 8))
		{
			if (i == 5)
			{
				*(arr3 + k) = *(arr2 + j);
				++j;
			}
			else
			{
				*(arr3 + k) = *(arr1 + i);
				++i;
			}
		}
		else
		{
			if (*(arr1 + i) > *(arr2 + j))
			{
				*(arr3 + k) = *(arr2 + j);
				++j;
			}
			else
			{
				*(arr3 + k) = *(arr1 + i);
				++i;
			}
		}
	}
	
	return arr3;

}
