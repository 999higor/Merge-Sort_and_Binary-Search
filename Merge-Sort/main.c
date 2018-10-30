#include<MergeSort.h>

/* Driver program to test above functions */
int main()
{
    setlocale(LC_ALL ,"PORTUGUESE");
    int size = sizeArray();

    int arr[size];

    readFile(arr);

    int arr_size = sizeof(arr)/sizeof(arr[0]);

    //printf("Given array is \n");
    //printArray(arr, arr_size);


   // printf("\nSorted array is \n");
   // printArray(arr, arr_size);

    mergeSort(arr, 0, arr_size - 1);

   int option ,number;
   do
    {
        printArray(arr ,arr_size);
        printf("1 - Busca Sequencial \n");
        printf("2 - Busca Binária \n");
        printf("\n>");
        scanf("%d",&option);

        switch(option)
        {

            case 1:
                printf("\n>");
                scanf("%d",&number);
                sequencialSearch(arr, size, number);
                break;
            case 2:
                printf("\n>");
                scanf("%d",&number);
                binarySearch(arr, size, number);
                break;

            case 0:
                break;
        }

   }while(option!=0);
    return 0;
}
