#include <stdio.h>
#include <stdlib.h>
#include "Bubble_Sort.h"

int main()
{
    int Array[5] = {14, 754, -23, -73, 109};

    BubbleSort(Array, 5, NormalCompare, Descending_Order);
    for(int i=0; i<5; i++) printf("%d ", Array[i]);
    printf("\n------------------\n");

    BubbleSort(Array, 5, NormalCompare, Ascending_Order);
    for(int i=0; i<5; i++) printf("%d ", Array[i]);
    printf("\n------------------\n");

    BubbleSort(Array, 5, AbsoluteCompare, Descending_Order);
    for(int i=0; i<5; i++) printf("%d ", Array[i]);
    printf("\n------------------\n");

    BubbleSort(Array, 5, AbsoluteCompare, Ascending_Order);
    for(int i=0; i<5; i++) printf("%d ", Array[i]);
    printf("\n------------------\n");

    return 0;
}