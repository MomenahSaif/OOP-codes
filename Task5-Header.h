#pragma once
#include<iostream>
using namespace std;

int *hist(float *array, int size)
{
	int frequency=1;
	for (int i = 1; i < size; i++)
	{
		
		if (*(array + i) == *(array + i + 1))
			frequency++;
		else
        {
			cout << "The frequency of " << *(array + i) << " is " << frequency << endl;
			frequency = 1;
		}
		
		
		
	}

	return 0;
}
