/***********************************************************/
/***********************************************************/
/*****  Owner:            Mohamed Hassan               *****/
/*****	App:              Bubble Sort for integers     *****/
/*****  Time Complexity:                               *****/
/*****  	Best case:    O(n)                         *****/
/*****  	Average case: O(n)                         *****/
/*****  	Worest case:  O(n2)                        *****/
/*****  Space Complexity: O(1)                         *****/
/*****  Type:             Inplace Sorting              *****/
/***********************************************************/
/***********************************************************/


#include "Bubble_Sort.h"
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

void BubbleSort(int* Copy_pintArray, int Copy_intArraySize, int (*Copy_pintPtrFunction)(int, int , int), int Copy_intOrder)
{
	if(Copy_pintArray != NULL && Copy_pintPtrFunction != NULL)
	{
		int Local_intCounter1, Local_intCounter2, Local_intIndex, Local_intTempVar, Local_intFlag;
	
		for(Local_intCounter1 = 1; Local_intCounter1 < Copy_intArraySize; Local_intCounter1++)
		{
			Local_intFlag = 0;
			for(Local_intCounter2 = 0; Local_intCounter2 < Copy_intArraySize - Local_intCounter1; Local_intCounter2++)
			{
				if(Copy_pintPtrFunction(Copy_pintArray[Local_intCounter2], Copy_pintArray[Local_intCounter2 + 1], Copy_intOrder) > 0)
				{
					/* Swapping Operation */
					Local_intTempVar = Copy_pintArray[Local_intCounter2];
					Copy_pintArray[Local_intCounter2] = Copy_pintArray[Local_intCounter2 + 1];
					Copy_pintArray[Local_intCounter2 + 1] = Local_intTempVar;
					
					/* Indication for swapping process */
					Local_intFlag = 1;
				}
			}
			
			/* If there is no swapping, it means that the array is sorted and no need for additional looping */
			if(Local_intFlag == 0) break; 
		}
	}
	else
	{
		/* DO NOTHING */
	}
	
}