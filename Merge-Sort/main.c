#include<MergeSort.h>

/* Driver program to test above functions */
int main()
{
    setlocale(LC_ALL ,"PORTUGUESE");

    clock_t t_inicial, t_final;
    double tempo=0;

    printf("Calculating the size of the Vector ...\n");

    long int size = sizeArray();
    long int arr[size];

    t_inicial = clock();
    printf("Reading the FILE and inserting in the Vector...\n");
    readFile(arr);

    int arr_size = sizeof(arr)/sizeof(arr[0]);

    printf("Sorting with MergeSort...\n");

    mergeSort(arr, 0, arr_size - 1);

    t_final = clock();
    tempo = ((double) (t_final - t_inicial)) /CLOCKS_PER_SEC;
    printf("Runtime Insert and Sort: %lf \n",tempo);

   int option ,number;
   do
    {
        //printArray(arr ,arr_size);
        printf("1 - Sequential Search\n");
        printf("2 - Binary Search\n");
        printf("3 - SEARCH.TXT - Sequential Search\n");
        printf("4 - SEARCH.TXT - Binary Search\n");
        printf("0 - EXIT\n");
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

            case 3:
                t_inicial = clock();

                printf("\nSearching ...\n");

                ReadSearchSequencial(arr, size);

                t_final = clock();

                tempo = ((double) (t_final - t_inicial)) /CLOCKS_PER_SEC;

                printf("Runtime: %lf \n",tempo);
                break;

            case 4:
                t_inicial = clock();

                printf("\nSearching ...\n");

                ReadSearchBinary(arr, size);

                t_final = clock();

                tempo = ((double) (t_final - t_inicial)) /CLOCKS_PER_SEC;

                printf("Runtime: %lf \n",tempo);
                break;

            case 0:
                break;
        }

   }while(option!=0);
    return 0;
}
