#include <stdio.h>
#include <stdlib.h>
#include "Selection_Sort.h"

int main()
{
    int Array[5] = {14, 754, -23, -73, 109};

    SelectionSort(Array, 5, NormalCompare, Descending_Order);
    for(int i=0; i<5; i++) printf("%d ", Array[i]);
    printf("\n------------------\n");

    SelectionSort(Array, 5, NormalCompare, Ascending_Order);
    for(int i=0; i<5; i++) printf("%d ", Array[i]);
    printf("\n------------------\n");

    SelectionSort(Array, 5, AbsoluteCompare, Descending_Order);
    for(int i=0; i<5; i++) printf("%d ", Array[i]);
    printf("\n------------------\n");

    SelectionSort(Array, 5, AbsoluteCompare, Ascending_Order);
    for(int i=0; i<5; i++) printf("%d ", Array[i]);
    printf("\n------------------\n");

    return 0;
}
