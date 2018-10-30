#include<MergeSort.h>

/* Driver program to test above functions */
int main()
{
    int size = sizeArray();

    int arr[size];

    readFile(arr);

    int arr_size = sizeof(arr)/sizeof(arr[0]);

    printf("Given array is \n");
    printArray(arr, arr_size);

    system("pause");

    mergeSort(arr, 0, arr_size - 1);

    printf("\nSorted array is \n");
    printArray(arr, arr_size);
    return 0;
}
