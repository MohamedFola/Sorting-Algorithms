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

#ifndef _INSERTION_SORT_H_
#define _INSERTION_SORT_H_


#define Ascending_Order    1
#define Descending_Order   2


/* 
--> Function Description:

	Funtion: this function used to compare between two integers and to choose between ascending order or descending order for the sorting 

	Inputs: 
		1) Copy_intFirstElement  --> first interger 
		2) Copy_intSecondElement --> second interger
		3) Copy_intOrder         --> to choose between ascending order or descending order
		
	Output:
		1) +Ve Number  --> if first element is greater than the second element
		2) 0           --> if first element is equal the second element
		3) -Ve Number  --> if first element is smaller than the second element
*/
int NormalCompare(int Copy_intFirstElement, int Copy_intSecondElement, int Copy_intOrder);

/* 
--> Function Description:

	Funtion: this function used to compare between absolute of two integers and to choose between ascending order or descending order for the sorting 

	Inputs: 
		1) Copy_intFirstElement  --> first interger 
		2) Copy_intSecondElement --> second interger
		3) Copy_intOrder         --> to choose between ascending order or descending order
		
	Output:
		1) +Ve Number  --> if first element is greater than the second element
		2) 0           --> if first element is equal the second element
		3) -Ve Number  --> if first element is smaller than the second element
*/
int AbsoluteCompare(int Copy_intFirstElement, int Copy_intSecondElement, int Copy_intOrder);


/* 
--> Function Description:

	Funtion: this function used to Sort passed array of intergers in ascending or descending order, 
			 also you can choose if you want absloute sorting or not

	Inputs: 
		1) Copy_pintArray        --> pointer to array you want to sort
		2) Copy_intArraySize     --> size of passed array
		3) Copy_pintPtrFunction  --> a callback function to choose between normal compare or asbolute compare
		4) Copy_intOrder         --> to choose between ascending order or descending order
		
	Output:
		no output for this function
*/

void InsertionSort(int* Copy_pintArray, int Copy_intArraySize, int (*Copy_pintPtrFunction)(int, int , int), int Copy_intOrder);


#endif /* _INSERTION_SORT_H_ */