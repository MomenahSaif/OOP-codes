#pragma once

int* MergeArrayRecursively(int *ptr1,int size1,int *ptr2, int size2,int *ptr3, int i, int j, int k)
{
	if (k==size1+size2)
	return ptr3;

	if (i > size1 - 1)
	{
		
		*(ptr3 + k) = *(ptr2 + j);

		j++;
		k++;
		MergeArrayRecursively(ptr1, size1, ptr2, size2, ptr3, i, j, k);
	}

	else if (j > size2 - 1)
	{
		
		*(ptr3 + k) = *(ptr1 + i);
		i++;
		k++;
		MergeArrayRecursively(ptr1, size1, ptr2, size2, ptr3, i, j, k);
	}
	else if (*(ptr1 + i) > *(ptr2 + j))
	{
		
		*(ptr3 + k) = *(ptr2 + j);
		
		j++;
		k ++;
		MergeArrayRecursively(ptr1, size1, ptr2, size2, ptr3, i, j, k);
	}
	else if(*(ptr1 + i) < *(ptr2 + j))
	{
		
		*(ptr3 + k) = *(ptr1 + i);
	

		i++;
		
		k ++;
		MergeArrayRecursively(ptr1, size1, ptr2, size2, ptr3, i, j, k);
	}
	


	
}
