/***********************************************************/
/***********************************************************/
/*****  Owner            : Mohamed Hassan              *****/
/*****	App              : Insertion Sort for integers *****/
/*****  Time Complexity  :                             *****/
/*****  	Best case    : O(n)                        *****/
/*****  	Average case : O(n2)                       *****/
/*****  	Worest case  : O(n2)                       *****/
/*****  Space Complexity : O(1)                        *****/
/*****  Type             : Inplace Sorting             *****/
/***********************************************************/
/***********************************************************/

#include <math.h>
#include <stdio.h>
#include "Insertion_Sort.h"

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

void InsertionSort(int* Copy_pintArray, int Copy_intArraySize, int (*Copy_pintPtrFunction)(int, int , int), int Copy_intOrder)
{
	if(Copy_pintArray != NULL && Copy_pintPtrFunction != NULL)
	{
		int Local_intCounter, Local_intHoleIndex, Local_intValue, Local_intTempVar;
		
		for(Local_intCounter = 1; Local_intCounter < Copy_intArraySize; Local_intCounter++)
		{
			Local_intValue = Copy_pintArray[Local_intCounter];
			Local_intHoleIndex = Local_intCounter;
			
			while(Local_intHoleIndex > 0 && Copy_pintPtrFunction(Copy_pintArray[Local_intHoleIndex - 1], Local_intValue, Copy_intOrder) > 0)
			{
				/* Swapping Operation */
				Local_intTempVar = Copy_pintArray[Local_intHoleIndex];
				Copy_pintArray[Local_intHoleIndex] = Copy_pintArray[Local_intHoleIndex - 1];
				Copy_pintArray[Local_intHoleIndex - 1] = Local_intTempVar;
				
				/* Decrement Hole Index */
				Local_intHoleIndex--;
			}
			
			Copy_pintArray[Local_intHoleIndex] = Local_intValue;
		}
	}
	else
	{
		/* DO NOTHING */
	}
}