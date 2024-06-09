#pragma once
int difference(int* ptr,int size)
{
	int max = *ptr, min = *ptr,diff;

	for (int i = 0; i < 10; i++)
	{
		if (*(ptr + i) > max)
			max = *(ptr + i);
	}

	for (int j = 0;j < 10; j++)
	{
		if (*(ptr + j) < min)
			min = *(ptr + j);
	}

	diff = max - min;
	return diff;

}
