/***********************************************************/
/***********************************************************/
/*****  Owner:            Mohamed Hassan               *****/
/*****	App:              Selection Sort for integers  *****/
/*****  Time Complexity:  O(n2)                        *****/
/*****  Space Complexity: O(1)                         *****/
/*****  Type:             Inplace Sorting              *****/
/***********************************************************/
/***********************************************************/

#include "Selection_Sort.h"
#include <math.h>
#include <stdio.h>


int NormalCompare(int Copy_intFirstElement, int Copy_intSecondElement, int Copy_intOrder)
{
    if(Copy_intOrder == Ascending_Order)
        return (Copy_intFirstElement) - (Copy_intSecondElement);  /* returnnig the minus to know the sign of the operation */
    return (Copy_intSecondElement) - (Copy_intFirstElement);
}

int AbsoluteCompare(int Copy_intFirstElement, int Copy_intSecondElement, int Copy_intOrder)
{
    if(Copy_intOrder == Ascending_Order)
        return abs(Copy_intFirstElement) - abs(Copy_intSecondElement); /* returnnig the minus to know the sign of the operation */
    return abs(Copy_intSecondElement) - abs(Copy_intFirstElement);
}

void SelectionSort(int* Copy_pintArray, int Copy_intArraySize, int (*Copy_pintPtrFunction)(int, int , int), int Copy_intOrder)
{
	int Local_intCounter1, Local_intCounter2, Local_intIndex, Local_intTempVar;

	if(Copy_pintArray != NULL && Copy_pintPtrFunction != NULL)
	{
		/* for loop to index n-2 */
		for(Local_intCounter1 = 0; Local_intCounter1 < Copy_intArraySize - 1; Local_intCounter1++)
		{
			/* consider the current index have the appropriate element */
			Local_intIndex = Local_intCounter1;

			/* for loop to check all the elements and choose the appropriate element to store at this index */
			for(Local_intCounter2 = Local_intCounter1 + 1; Local_intCounter2 < Copy_intArraySize; Local_intCounter2++)
			{
				/* if condition to check the element at the desired index is the appropriate value or not */
				if(Copy_pintPtrFunction(Copy_pintArray[Local_intIndex], Copy_pintArray[Local_intCounter2], Copy_intOrder) > 0)
				{
					Local_intIndex = Local_intCounter2;
				}
			}

			/* swapping operation */
			Local_intTempVar = Copy_pintArray[Local_intIndex];
			Copy_pintArray[Local_intIndex] = Copy_pintArray[Local_intCounter1];
			Copy_pintArray[Local_intCounter1] = Local_intTempVar;
		}
	}
	else
	{
		/* Do Nothing */
	}
}

